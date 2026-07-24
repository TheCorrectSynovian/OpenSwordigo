/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f2fb4
 * Function: Caver::Proto::CharacterState::CharacterState
 * Signature: undefined __thiscall CharacterState(CharacterState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState::CharacterState() */

void __thiscall Caver::Proto::CharacterState::CharacterState(CharacterState *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar4 = PTR_vtable_007e59a0;
  *(undefined8 *)(this + 0x18) = 0;
  *(CharacterState **)(this + 0x20) = this + 0x38;
  *(undefined8 *)(this + 0x10) = 0;
  *(CharacterState **)(this + 0x68) = this + 0x80;
  puVar3 = PTR__default_equipped_weapon__007e56f0;
  *(undefined4 *)(this + 0x30) = 4;
  *(undefined4 *)(this + 0x78) = 4;
  puVar6 = PTR__default_equipped_armor__007e6790;
  puVar1 = PTR__default_current_skill__007e50e8;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  puVar5 = PTR__default_weapon_trinket__007e5d70;
  puVar2 = PTR__default_armor_trinket__007e5360;
  *(undefined **)(this + 0x60) = puVar6;
  *(undefined **)(this + 0x58) = puVar3;
  puVar3 = PTR__default_skill_trinket__007e61b0;
  *(undefined **)this = puVar4 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined **)(this + 0xa8) = puVar5;
  *(undefined **)(this + 0xa0) = puVar1;
  *(undefined **)(this + 0xb8) = puVar3;
  *(undefined **)(this + 0xb0) = puVar2;
  return;
}


