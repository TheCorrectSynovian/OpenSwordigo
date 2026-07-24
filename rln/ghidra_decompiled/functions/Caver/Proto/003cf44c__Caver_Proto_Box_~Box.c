/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cf44c
 * Function: Caver::Proto::Box::~Box
 * Signature: undefined __thiscall ~Box(Box * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Box::~Box() */

void __thiscall Caver::Proto::Box::~Box(Box *this)

{
  *(undefined **)this = PTR_vtable_007e6f08 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


