/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ProtoBufDataTemplate.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "ProtoBufDataTemplate.pb-c.h"
void   owlies__core__change_events__item__init
                     (Owlies__Core__ChangeEvents__Item         *message)
{
  static Owlies__Core__ChangeEvents__Item init_value = OWLIES__CORE__CHANGE_EVENTS__ITEM__INIT;
  *message = init_value;
}
size_t owlies__core__change_events__item__get_packed_size
                     (const Owlies__Core__ChangeEvents__Item *message)
{
  assert(message->base.descriptor == &owlies__core__change_events__item__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t owlies__core__change_events__item__pack
                     (const Owlies__Core__ChangeEvents__Item *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &owlies__core__change_events__item__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t owlies__core__change_events__item__pack_to_buffer
                     (const Owlies__Core__ChangeEvents__Item *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &owlies__core__change_events__item__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Owlies__Core__ChangeEvents__Item *
       owlies__core__change_events__item__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Owlies__Core__ChangeEvents__Item *)
     protobuf_c_message_unpack (&owlies__core__change_events__item__descriptor,
                                allocator, len, data);
}
void   owlies__core__change_events__item__free_unpacked
                     (Owlies__Core__ChangeEvents__Item *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &owlies__core__change_events__item__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const Owlies__Core__ChangeEvents__ItemType owlies__core__change_events__item__item_type__default_value = OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Hat;
static const ProtobufCFieldDescriptor owlies__core__change_events__item__field_descriptors[3] =
{
  {
    "name",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Owlies__Core__ChangeEvents__Item, name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "price",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Owlies__Core__ChangeEvents__Item, price),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "itemType",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(Owlies__Core__ChangeEvents__Item, has_itemtype),
    offsetof(Owlies__Core__ChangeEvents__Item, itemtype),
    &owlies__core__change_events__item_type__descriptor,
    &owlies__core__change_events__item__item_type__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned owlies__core__change_events__item__field_indices_by_name[] = {
  2,   /* field[2] = itemType */
  0,   /* field[0] = name */
  1,   /* field[1] = price */
};
static const ProtobufCIntRange owlies__core__change_events__item__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor owlies__core__change_events__item__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Owlies.Core.ChangeEvents.Item",
  "Item",
  "Owlies__Core__ChangeEvents__Item",
  "Owlies.Core.ChangeEvents",
  sizeof(Owlies__Core__ChangeEvents__Item),
  3,
  owlies__core__change_events__item__field_descriptors,
  owlies__core__change_events__item__field_indices_by_name,
  1,  owlies__core__change_events__item__number_ranges,
  (ProtobufCMessageInit) owlies__core__change_events__item__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue owlies__core__change_events__item_type__enum_values_by_number[7] =
{
  { "Hat", "OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Hat", 0 },
  { "Cape", "OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Cape", 1 },
  { "Weapon", "OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Weapon", 2 },
  { "Shoe", "OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Shoe", 3 },
  { "Arm_Armour", "OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Arm_Armour", 4 },
  { "Leg_Armour", "OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Leg_Armour", 5 },
  { "Shirt", "OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Shirt", 6 },
};
static const ProtobufCIntRange owlies__core__change_events__item_type__value_ranges[] = {
{0, 0},{0, 7}
};
static const ProtobufCEnumValueIndex owlies__core__change_events__item_type__enum_values_by_name[7] =
{
  { "Arm_Armour", 4 },
  { "Cape", 1 },
  { "Hat", 0 },
  { "Leg_Armour", 5 },
  { "Shirt", 6 },
  { "Shoe", 3 },
  { "Weapon", 2 },
};
const ProtobufCEnumDescriptor owlies__core__change_events__item_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "Owlies.Core.ChangeEvents.ItemType",
  "ItemType",
  "Owlies__Core__ChangeEvents__ItemType",
  "Owlies.Core.ChangeEvents",
  7,
  owlies__core__change_events__item_type__enum_values_by_number,
  7,
  owlies__core__change_events__item_type__enum_values_by_name,
  1,
  owlies__core__change_events__item_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
