/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ce798
 * Function: Caver::Proto::Vector3::~Vector3
 * Signature: undefined __thiscall ~Vector3(Vector3 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector3::~Vector3() */

void __thiscall Caver::Proto::Vector3::~Vector3(Vector3 *this)

{
  *(undefined **)this = PTR_vtable_007e49f8 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


