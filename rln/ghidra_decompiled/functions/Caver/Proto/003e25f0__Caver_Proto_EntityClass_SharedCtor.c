/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e25f0
 * Function: Caver::Proto::EntityClass::SharedCtor
 * Signature: undefined __thiscall SharedCtor(EntityClass * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityClass::SharedCtor() */

void __thiscall Caver::Proto::EntityClass::SharedCtor(EntityClass *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_name__007e5c18;
  puVar1 = PTR__default_title__007e56f8;
  *(undefined4 *)(this + 0x20) = 0x1010100;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined **)(this + 0x18) = puVar1;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


