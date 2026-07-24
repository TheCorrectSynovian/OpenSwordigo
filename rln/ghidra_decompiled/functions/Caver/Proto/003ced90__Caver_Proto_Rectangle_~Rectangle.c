/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ced90
 * Function: Caver::Proto::Rectangle::~Rectangle
 * Signature: undefined __thiscall ~Rectangle(Rectangle * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Rectangle::~Rectangle() */

void __thiscall Caver::Proto::Rectangle::~Rectangle(Rectangle *this)

{
  *(undefined **)this = PTR_vtable_007e4bb8 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


