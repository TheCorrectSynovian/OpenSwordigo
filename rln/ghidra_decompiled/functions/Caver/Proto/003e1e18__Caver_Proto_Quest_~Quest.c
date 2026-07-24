/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e1e18
 * Function: Caver::Proto::Quest::~Quest
 * Signature: undefined __thiscall ~Quest(Quest * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Quest::~Quest() */

void __thiscall Caver::Proto::Quest::~Quest(Quest *this)

{
  *(undefined **)this = PTR_vtable_007e5b70 + 0x10;
  SharedDtor(this);
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


