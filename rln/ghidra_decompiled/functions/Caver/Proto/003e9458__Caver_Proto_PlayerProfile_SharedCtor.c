/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e9458
 * Function: Caver::Proto::PlayerProfile::SharedCtor
 * Signature: undefined __thiscall SharedCtor(PlayerProfile * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile::SharedCtor() */

void __thiscall Caver::Proto::PlayerProfile::SharedCtor(PlayerProfile *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  *(undefined4 *)(this + 8) = 0;
  puVar6 = PTR__default_name__007e7d58;
  puVar3 = PTR__default_weapon_trinket_name__007e6df0;
  puVar2 = PTR__default_equipped_weapon_name__007e59b0;
  puVar1 = PTR__default_current_level_title__007e50a0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined **)(this + 0xa0) = PTR__default_identifier__007e5ce8;
  puVar5 = PTR__default_armor_trinket_name__007e7ba0;
  puVar4 = PTR__default_equipped_armor_name__007e6ea0;
  this[0x98] = (PlayerProfile)0x0;
  *(undefined **)(this + 0x10) = puVar6;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x20) = puVar1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined **)(this + 0x48) = puVar4;
  *(undefined **)(this + 0x40) = puVar2;
  *(undefined **)(this + 0x58) = puVar5;
  *(undefined **)(this + 0x50) = puVar3;
  *(undefined4 *)(this + 0xa8) = 0;
  return;
}


