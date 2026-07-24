/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e0a48
 * Function: Caver::Proto::Skill::SharedCtor
 * Signature: undefined __thiscall SharedCtor(Skill * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Skill::SharedCtor() */

void __thiscall Caver::Proto::Skill::SharedCtor(Skill *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined4 *)(this + 8) = 0;
  puVar3 = PTR__default_description__007e7dc0;
  puVar2 = PTR__default_title__007e7328;
  puVar1 = PTR__default_name__007e6d10;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  *(undefined **)(this + 0x20) = puVar3;
  return;
}


