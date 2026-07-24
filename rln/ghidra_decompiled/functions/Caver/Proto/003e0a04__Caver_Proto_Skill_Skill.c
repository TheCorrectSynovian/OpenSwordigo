/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e0a04
 * Function: Caver::Proto::Skill::Skill
 * Signature: undefined __thiscall Skill(Skill * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Skill::Skill() */

void __thiscall Caver::Proto::Skill::Skill(Skill *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_vtable_007e5620;
  *(undefined4 *)(this + 8) = 0;
  puVar4 = PTR__default_description__007e7dc0;
  puVar3 = PTR__default_title__007e7328;
  puVar2 = PTR__default_name__007e6d10;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x18) = puVar3;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined **)(this + 0x20) = puVar4;
  return;
}


