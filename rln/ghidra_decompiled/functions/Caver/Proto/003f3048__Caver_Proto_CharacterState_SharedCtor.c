/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f3048
 * Function: Caver::Proto::CharacterState::SharedCtor
 * Signature: undefined __thiscall SharedCtor(CharacterState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState::SharedCtor() */

void __thiscall Caver::Proto::CharacterState::SharedCtor(CharacterState *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR__default_equipped_weapon__007e56f0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  puVar1 = PTR__default_current_skill__007e50e8;
  *(undefined8 *)(this + 0x18) = 0;
  puVar2 = PTR__default_armor_trinket__007e5360;
  *(undefined **)(this + 0x60) = PTR__default_equipped_armor__007e6790;
  *(undefined **)(this + 0x58) = puVar3;
  puVar4 = PTR__default_skill_trinket__007e61b0;
  puVar3 = PTR__default_weapon_trinket__007e5d70;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined **)(this + 0xa8) = puVar3;
  *(undefined **)(this + 0xa0) = puVar1;
  *(undefined **)(this + 0xb8) = puVar4;
  *(undefined **)(this + 0xb0) = puVar2;
  return;
}


