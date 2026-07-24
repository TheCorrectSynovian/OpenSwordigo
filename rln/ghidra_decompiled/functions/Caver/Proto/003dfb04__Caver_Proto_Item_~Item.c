/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dfb04
 * Function: Caver::Proto::Item::~Item
 * Signature: undefined __thiscall ~Item(Item * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Item::~Item() */

void __thiscall Caver::Proto::Item::~Item(Item *this)

{
  *(undefined **)this = PTR_vtable_007e72f8 + 0x10;
  SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


