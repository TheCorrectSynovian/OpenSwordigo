/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fbc3c
 * Function: Caver::Proto::ObjectTemplate::ObjectTemplate
 * Signature: undefined __thiscall ObjectTemplate(ObjectTemplate * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectTemplate::ObjectTemplate() */

void __thiscall Caver::Proto::ObjectTemplate::ObjectTemplate(ObjectTemplate *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5e80;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0x3f800000;
  *(undefined **)this = puVar1 + 0x10;
  return;
}


