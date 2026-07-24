/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d0bf4
 * Function: Caver::Proto::FloatColor::FloatColor
 * Signature: undefined __thiscall FloatColor(FloatColor * this, FloatColor * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FloatColor::FloatColor(Caver::Proto::FloatColor const&) */

void __thiscall Caver::Proto::FloatColor::FloatColor(FloatColor *this,FloatColor *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e79a0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0x3f800000;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
  return;
}


