/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: protocol.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "protocol.pb-c.h"
void   pos_point__init
                     (PosPoint         *message)
{
  static PosPoint init_value = POS_POINT__INIT;
  *message = init_value;
}
size_t pos_point__get_packed_size
                     (const PosPoint *message)
{
  assert(message->base.descriptor == &pos_point__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t pos_point__pack
                     (const PosPoint *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &pos_point__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t pos_point__pack_to_buffer
                     (const PosPoint *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &pos_point__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
PosPoint *
       pos_point__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (PosPoint *)
     protobuf_c_message_unpack (&pos_point__descriptor,
                                allocator, len, data);
}
void   pos_point__free_unpacked
                     (PosPoint *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &pos_point__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   scan_result__init
                     (ScanResult         *message)
{
  static ScanResult init_value = SCAN_RESULT__INIT;
  *message = init_value;
}
size_t scan_result__get_packed_size
                     (const ScanResult *message)
{
  assert(message->base.descriptor == &scan_result__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t scan_result__pack
                     (const ScanResult *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &scan_result__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t scan_result__pack_to_buffer
                     (const ScanResult *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &scan_result__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ScanResult *
       scan_result__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ScanResult *)
     protobuf_c_message_unpack (&scan_result__descriptor,
                                allocator, len, data);
}
void   scan_result__free_unpacked
                     (ScanResult *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &scan_result__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   message__init
                     (Message         *message)
{
  static Message init_value = MESSAGE__INIT;
  *message = init_value;
}
size_t message__get_packed_size
                     (const Message *message)
{
  assert(message->base.descriptor == &message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t message__pack
                     (const Message *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t message__pack_to_buffer
                     (const Message *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Message *
       message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Message *)
     protobuf_c_message_unpack (&message__descriptor,
                                allocator, len, data);
}
void   message__free_unpacked
                     (Message *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor pos_point__field_descriptors[2] =
{
  {
    "x",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_DOUBLE,
    offsetof(PosPoint, has_x),
    offsetof(PosPoint, x),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "y",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_DOUBLE,
    offsetof(PosPoint, has_y),
    offsetof(PosPoint, y),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned pos_point__field_indices_by_name[] = {
  0,   /* field[0] = x */
  1,   /* field[1] = y */
};
static const ProtobufCIntRange pos_point__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor pos_point__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "PosPoint",
  "PosPoint",
  "PosPoint",
  "",
  sizeof(PosPoint),
  2,
  pos_point__field_descriptors,
  pos_point__field_indices_by_name,
  1,  pos_point__number_ranges,
  (ProtobufCMessageInit) pos_point__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor scan_result__field_descriptors[4] =
{
  {
    "position",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(ScanResult, n_position),
    offsetof(ScanResult, position),
    &pos_point__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "result",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(ScanResult, result),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "angle",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_DOUBLE,
    offsetof(ScanResult, has_angle),
    offsetof(ScanResult, angle),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "picrutesize",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(ScanResult, picrutesize),
    &pos_point__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned scan_result__field_indices_by_name[] = {
  2,   /* field[2] = angle */
  3,   /* field[3] = picrutesize */
  0,   /* field[0] = position */
  1,   /* field[1] = result */
};
static const ProtobufCIntRange scan_result__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor scan_result__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "ScanResult",
  "ScanResult",
  "ScanResult",
  "",
  sizeof(ScanResult),
  4,
  scan_result__field_descriptors,
  scan_result__field_indices_by_name,
  1,  scan_result__number_ranges,
  (ProtobufCMessageInit) scan_result__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue message__message_type__enum_values_by_number[2] =
{
  { "NULL", "MESSAGE__MESSAGE_TYPE__NULL", 0 },
  { "ScanResult", "MESSAGE__MESSAGE_TYPE__ScanResult", 1 },
};
static const ProtobufCIntRange message__message_type__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex message__message_type__enum_values_by_name[2] =
{
  { "NULL", 0 },
  { "ScanResult", 1 },
};
const ProtobufCEnumDescriptor message__message_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "Message.MessageType",
  "MessageType",
  "Message__MessageType",
  "",
  2,
  message__message_type__enum_values_by_number,
  2,
  message__message_type__enum_values_by_name,
  1,
  message__message_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCFieldDescriptor message__field_descriptors[2] =
{
  {
    "messagetype",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(Message, has_messagetype),
    offsetof(Message, messagetype),
    &message__message_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "data",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Message, has_data),
    offsetof(Message, data),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned message__field_indices_by_name[] = {
  1,   /* field[1] = data */
  0,   /* field[0] = messagetype */
};
static const ProtobufCIntRange message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor message__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Message",
  "Message",
  "Message",
  "",
  sizeof(Message),
  2,
  message__field_descriptors,
  message__field_indices_by_name,
  1,  message__number_ranges,
  (ProtobufCMessageInit) message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
