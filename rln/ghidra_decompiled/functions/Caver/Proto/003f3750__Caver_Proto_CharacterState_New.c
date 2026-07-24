/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f3750
 * Function: Caver::Proto::CharacterState::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState::New() const */

void Caver::Proto::CharacterState::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  
  plVar7 = operator_new(0xd0);
  puVar4 = PTR_vtable_007e59a0;
  plVar7[3] = 0;
  plVar7[4] = (long)(plVar7 + 7);
  plVar7[2] = 0;
  plVar7[0xd] = (long)(plVar7 + 0x10);
  puVar3 = PTR__default_equipped_weapon__007e56f0;
  *(undefined4 *)(plVar7 + 6) = 4;
  *(undefined4 *)(plVar7 + 0xf) = 4;
  puVar6 = PTR__default_equipped_armor__007e6790;
  puVar1 = PTR__default_current_skill__007e50e8;
  plVar7[5] = 0;
  plVar7[0xe] = 0;
  puVar5 = PTR__default_weapon_trinket__007e5d70;
  puVar2 = PTR__default_armor_trinket__007e5360;
  plVar7[0xc] = (long)puVar6;
  plVar7[0xb] = (long)puVar3;
  puVar3 = PTR__default_skill_trinket__007e61b0;
  *plVar7 = (long)(puVar4 + 0x10);
  plVar7[1] = 0;
  plVar7[0x18] = 0;
  plVar7[0x19] = 0;
  plVar7[0x15] = (long)puVar5;
  plVar7[0x14] = (long)puVar1;
  plVar7[0x17] = (long)puVar3;
  plVar7[0x16] = (long)puVar2;
  return;
}


