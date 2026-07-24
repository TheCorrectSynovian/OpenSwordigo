/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cdc8c
 * Function: Caver::Proto::DateTime::DateTime
 * Signature: undefined __thiscall DateTime(DateTime * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DateTime::DateTime() */

void __thiscall Caver::Proto::DateTime::DateTime(DateTime *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5ca8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


