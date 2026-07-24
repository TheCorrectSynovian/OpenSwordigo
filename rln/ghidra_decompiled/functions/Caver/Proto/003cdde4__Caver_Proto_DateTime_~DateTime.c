/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cdde4
 * Function: Caver::Proto::DateTime::~DateTime
 * Signature: undefined __thiscall ~DateTime(DateTime * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DateTime::~DateTime() */

void __thiscall Caver::Proto::DateTime::~DateTime(DateTime *this)

{
  *(undefined **)this = PTR_vtable_007e5ca8 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


