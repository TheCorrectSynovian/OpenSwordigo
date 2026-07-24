/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cec00
 * Function: Caver::Proto::Rectangle::Rectangle
 * Signature: undefined __thiscall Rectangle(Rectangle * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Rectangle::Rectangle(Caver::Proto::Rectangle const&) */

void __thiscall Caver::Proto::Rectangle::Rectangle(Rectangle *this,Rectangle *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e4bb8;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  MergeFrom(this,param_1);
  return;
}


