/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ce258
 * Function: Caver::Proto::Vector2::~Vector2
 * Signature: undefined __thiscall ~Vector2(Vector2 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector2::~Vector2() */

void __thiscall Caver::Proto::Vector2::~Vector2(Vector2 *this)

{
  *(undefined **)this = PTR_vtable_007e6758 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


