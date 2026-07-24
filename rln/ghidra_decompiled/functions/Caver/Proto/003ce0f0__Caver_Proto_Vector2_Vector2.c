/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ce0f0
 * Function: Caver::Proto::Vector2::Vector2
 * Signature: undefined __thiscall Vector2(Vector2 * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Vector2::Vector2() */

void __thiscall Caver::Proto::Vector2::Vector2(Vector2 *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6758;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


