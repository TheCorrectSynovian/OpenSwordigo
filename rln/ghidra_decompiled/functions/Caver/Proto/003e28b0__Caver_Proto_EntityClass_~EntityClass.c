/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e28b0
 * Function: Caver::Proto::EntityClass::~EntityClass
 * Signature: undefined __thiscall ~EntityClass(EntityClass * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityClass::~EntityClass() */

void __thiscall Caver::Proto::EntityClass::~EntityClass(EntityClass *this)

{
  *(undefined **)this = PTR_vtable_007e69c8 + 0x10;
  SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


