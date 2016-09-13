/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ProtoBufDataTemplate.proto */

#ifndef PROTOBUF_C_ProtoBufDataTemplate_2eproto__INCLUDED
#define PROTOBUF_C_ProtoBufDataTemplate_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Owlies__Core__ChangeEvents__Item Owlies__Core__ChangeEvents__Item;


/* --- enums --- */

typedef enum _Owlies__Core__ChangeEvents__ItemType {
  OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Hat = 0,
  OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Cape = 1,
  OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Weapon = 2,
  OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Shoe = 3,
  OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Arm_Armour = 4,
  OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Leg_Armour = 5,
  OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Shirt = 6
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE)
} Owlies__Core__ChangeEvents__ItemType;

/* --- messages --- */

struct  _Owlies__Core__ChangeEvents__Item
{
  ProtobufCMessage base;
  char *name;
  int32_t price;
  protobuf_c_boolean has_itemtype;
  Owlies__Core__ChangeEvents__ItemType itemtype;
};
#define OWLIES__CORE__CHANGE_EVENTS__ITEM__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&owlies__core__change_events__item__descriptor) \
    , NULL, 0, 0,OWLIES__CORE__CHANGE_EVENTS__ITEM_TYPE__Hat }


/* Owlies__Core__ChangeEvents__Item methods */
void   owlies__core__change_events__item__init
                     (Owlies__Core__ChangeEvents__Item         *message);
size_t owlies__core__change_events__item__get_packed_size
                     (const Owlies__Core__ChangeEvents__Item   *message);
size_t owlies__core__change_events__item__pack
                     (const Owlies__Core__ChangeEvents__Item   *message,
                      uint8_t             *out);
size_t owlies__core__change_events__item__pack_to_buffer
                     (const Owlies__Core__ChangeEvents__Item   *message,
                      ProtobufCBuffer     *buffer);
Owlies__Core__ChangeEvents__Item *
       owlies__core__change_events__item__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   owlies__core__change_events__item__free_unpacked
                     (Owlies__Core__ChangeEvents__Item *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Owlies__Core__ChangeEvents__Item_Closure)
                 (const Owlies__Core__ChangeEvents__Item *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    owlies__core__change_events__item_type__descriptor;
extern const ProtobufCMessageDescriptor owlies__core__change_events__item__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ProtoBufDataTemplate_2eproto__INCLUDED */