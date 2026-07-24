/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cf264
 * Function: Caver::Proto::Box::Box
 * Signature: undefined __thiscall Box(Box * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Box::Box() */

void __thiscall Caver::Proto::Box::Box(Box *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e6f08;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


