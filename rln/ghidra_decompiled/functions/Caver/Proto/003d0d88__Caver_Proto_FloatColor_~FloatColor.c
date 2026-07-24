/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d0d88
 * Function: Caver::Proto::FloatColor::~FloatColor
 * Signature: undefined __thiscall ~FloatColor(FloatColor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FloatColor::~FloatColor() */

void __thiscall Caver::Proto::FloatColor::~FloatColor(FloatColor *this)

{
  *(undefined **)this = PTR_vtable_007e79a0 + 0x10;
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  operator_delete(this);
  return;
}


