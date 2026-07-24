/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ce110
 * Function: Caver::Proto::Vector2::Vector2
 * Signature: undefined __thiscall Vector2(Vector2 * this, Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector2::Vector2(Caver::Proto::Vector2 const&) */

void __thiscall Caver::Proto::Vector2::Vector2(Vector2 *this,Vector2 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6758;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  MergeFrom(this,param_1);
  return;
}


