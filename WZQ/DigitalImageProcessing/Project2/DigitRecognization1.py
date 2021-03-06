import cv2
from keras.models import model_from_json
import numpy as np
import datetime
import time
with open('model.json', 'r') as f:
    model = model_from_json(f.read())
model.load_weights('model.h5')
model.summary()

def resize(rawimg):  # resize img to 28*28
    fx = 28.0 / rawimg.shape[0]
    fy = 28.0 / rawimg.shape[1]
    fx = fy = min(fx, fy)
    img = cv2.resize(rawimg, None, fx=fx, fy=fy, interpolation=cv2.INTER_CUBIC)
    outimg = np.ones((28, 28), dtype=np.uint8) * 255
    w = img.shape[1]
    h = img.shape[0]
    x = (28 - w) / 2
    y = (28 - h) / 2
    outimg[y:y+h, x:x+w] = img
    return outimg

class image:
    def __init__(self, img, (x, y), (w, h)):
        self.img = img
        self.x = x
        self.y = y
        self.w = w
        self.h = h
        self.result = 0
    def recognize(self):
        gray = cv2.cvtColor(self.img, cv2.COLOR_BGR2GRAY)
        res = resize(gray)
        res = np.resize(res, (1, 28, 28, 1))
        predictions = model.predict(res)
        self.result = np.argmax(predictions)


raw_image = cv2.imread("/Users/wzq/Downloads/testcase1/363_92785372614985.jpg")


def cmp_y(x, y):
    # print x.result,y.result,x.y - y.y
    delta = (x.y - y.y)
    if abs(delta) < 30:
        return 1
    if delta > 30:
        return 0
    return -1


def cmp_x(x, y):
    # print x.result,y.result,x.x - y.x
    delta = (x.x - y.x)
    if delta < 200 and delta > 50:
        return 1
    elif delta < -50 and delta > -200:
        return -1
    return 0
def recognize(raw_image):
    image_pass = []
    image_pad = []
    begin = datetime.datetime.now()

    edge = cv2.Canny(raw_image, 500, 2000, apertureSize=5)
    contours, hierarchy = cv2.findContours(edge.copy(), cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
    dict_key=[]
    x_last=None
    y_last=None
    for i in contours:
        x, y, w, h = cv2.boundingRect(i)
        if x_last == x and y_last == y:
            x_last = x
            y_last = y
            continue

        if w > 50 or h > 60 or h < 40 or w <15:  # give up useless part
            continue


        temp = image(raw_image[y:y + h, x:x + w].copy(), (x, y), (w, h))
        temp.recognize()
        if(temp.result!=10):
            cv2.rectangle(raw_image, (x, y), (x + w, y + h), (0, 255, 0), 2)
            cv2.putText(raw_image, '{:.0f}'.format(temp.result), (x, y), cv2.FONT_HERSHEY_DUPLEX, h / 25.0, (255, 0, 0))
            if temp.result in dict_key:
                continue
            dict_key.append(temp.result)
            image_pad.append(temp)
    if(len(image_pad)<9):
        return None

    image_pad.sort(cmp=cmp_y)
    image_pad.sort(cmp=cmp_x)


    #print "password:", map(lambda x: x.result, image_pass)
    print "pad:", map(lambda x: x.result, image_pad)
    end = datetime.datetime.now()
    print(str(end - begin))
    #print "reflect:", map(lambda x: [i for i,y in enumerate(image_pad) if y.result==x.result][0]+1, image_pass)
    cv2.imshow("digit recognition", raw_image)
    cv2.waitKey(0)
recognize(raw_image)