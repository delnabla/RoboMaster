/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: protocol.proto */

#ifndef PROTOBUF_C_protocol_2eproto__INCLUDED
#define PROTOBUF_C_protocol_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _PosPoint PosPoint;
typedef struct _ScanResult ScanResult;
typedef struct _PadPass PadPass;
typedef struct _Message Message;


/* --- enums --- */

typedef enum _Message__MessageType {
  MESSAGE__MESSAGE_TYPE__NULL = 0,
  MESSAGE__MESSAGE_TYPE__ScanResult = 1,
  MESSAGE__MESSAGE_TYPE__PadPass = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(MESSAGE__MESSAGE_TYPE)
} Message__MessageType;

/* --- messages --- */

struct  _PosPoint
{
  ProtobufCMessage base;
  protobuf_c_boolean has_x;
  float x;
  protobuf_c_boolean has_y;
  float y;
};
#define POS_POINT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pos_point__descriptor) \
    , 0,0, 0,0 }


struct  _ScanResult
{
  ProtobufCMessage base;
  size_t n_position;
  PosPoint **position;
  PosPoint *picrutesize;
  char *result;
  protobuf_c_boolean has_angle;
  float angle;
};
#define SCAN_RESULT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&scan_result__descriptor) \
    , 0,NULL, NULL, NULL, 0,0 }


struct  _PadPass
{
  ProtobufCMessage base;
  protobuf_c_boolean has_pad;
  ProtobufCBinaryData pad;
  protobuf_c_boolean has_password;
  ProtobufCBinaryData password;
};
#define PAD_PASS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&pad_pass__descriptor) \
    , 0,{0,NULL}, 0,{0,NULL} }


struct  _Message
{
  ProtobufCMessage base;
  protobuf_c_boolean has_messagetype;
  Message__MessageType messagetype;
  protobuf_c_boolean has_data;
  ProtobufCBinaryData data;
};
#define MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&message__descriptor) \
    , 0,0, 0,{0,NULL} }


/* PosPoint methods */
void   pos_point__init
                     (PosPoint         *message);
size_t pos_point__get_packed_size
                     (const PosPoint   *message);
size_t pos_point__pack
                     (const PosPoint   *message,
                      uint8_t             *out);
size_t pos_point__pack_to_buffer
                     (const PosPoint   *message,
                      ProtobufCBuffer     *buffer);
PosPoint *
       pos_point__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pos_point__free_unpacked
                     (PosPoint *message,
                      ProtobufCAllocator *allocator);
/* ScanResult methods */
void   scan_result__init
                     (ScanResult         *message);
size_t scan_result__get_packed_size
                     (const ScanResult   *message);
size_t scan_result__pack
                     (const ScanResult   *message,
                      uint8_t             *out);
size_t scan_result__pack_to_buffer
                     (const ScanResult   *message,
                      ProtobufCBuffer     *buffer);
ScanResult *
       scan_result__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   scan_result__free_unpacked
                     (ScanResult *message,
                      ProtobufCAllocator *allocator);
/* PadPass methods */
void   pad_pass__init
                     (PadPass         *message);
size_t pad_pass__get_packed_size
                     (const PadPass   *message);
size_t pad_pass__pack
                     (const PadPass   *message,
                      uint8_t             *out);
size_t pad_pass__pack_to_buffer
                     (const PadPass   *message,
                      ProtobufCBuffer     *buffer);
PadPass *
       pad_pass__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   pad_pass__free_unpacked
                     (PadPass *message,
                      ProtobufCAllocator *allocator);
/* Message methods */
void   message__init
                     (Message         *message);
size_t message__get_packed_size
                     (const Message   *message);
size_t message__pack
                     (const Message   *message,
                      uint8_t             *out);
size_t message__pack_to_buffer
                     (const Message   *message,
                      ProtobufCBuffer     *buffer);
Message *
       message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   message__free_unpacked
                     (Message *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*PosPoint_Closure)
                 (const PosPoint *message,
                  void *closure_data);
typedef void (*ScanResult_Closure)
                 (const ScanResult *message,
                  void *closure_data);
typedef void (*PadPass_Closure)
                 (const PadPass *message,
                  void *closure_data);
typedef void (*Message_Closure)
                 (const Message *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor pos_point__descriptor;
extern const ProtobufCMessageDescriptor scan_result__descriptor;
extern const ProtobufCMessageDescriptor pad_pass__descriptor;
extern const ProtobufCMessageDescriptor message__descriptor;
extern const ProtobufCEnumDescriptor    message__message_type__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_protocol_2eproto__INCLUDED */
