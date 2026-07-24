/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004af69c
 * Function: Caver::EntityClass::EntityClass
 * Signature: undefined __thiscall EntityClass(EntityClass * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityClass::EntityClass() */

void __thiscall Caver::EntityClass::EntityClass(EntityClass *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_007e5de8;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined **)(this + 8) = puVar1 + 0x18;
  *(undefined **)this = puVar1 + 0x18;
  *(undefined4 *)(this + 0x10) = 0x1010100;
  return;
}


