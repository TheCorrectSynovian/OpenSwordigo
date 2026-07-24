/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ea0bc
 * Function: Caver::Proto::PlayerProfile::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile::New() const */

void Caver::Proto::PlayerProfile::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  
  plVar7 = operator_new(0xb0);
  puVar2 = PTR_vtable_007e54b8;
  plVar7[0xc] = (long)(plVar7 + 0xf);
  plVar7[0xd] = 0;
  *(undefined4 *)(plVar7 + 1) = 0;
  puVar3 = PTR__default_equipped_weapon_name__007e59b0;
  *(undefined4 *)(plVar7 + 0xe) = 4;
  puVar6 = PTR__default_name__007e7d58;
  puVar4 = PTR__default_weapon_trinket_name__007e6df0;
  plVar7[0x14] = (long)PTR__default_identifier__007e5ce8;
  puVar1 = PTR__default_current_level_title__007e50a0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  *plVar7 = (long)(puVar2 + 0x10);
  puVar5 = PTR__default_armor_trinket_name__007e7ba0;
  puVar2 = PTR__default_equipped_armor_name__007e6ea0;
  *(undefined1 *)(plVar7 + 0x13) = 0;
  plVar7[2] = (long)puVar6;
  plVar7[3] = 0;
  plVar7[4] = (long)puVar1;
  plVar7[5] = 0;
  plVar7[9] = (long)puVar2;
  plVar7[8] = (long)puVar3;
  plVar7[0xb] = (long)puVar5;
  plVar7[10] = (long)puVar4;
  *(undefined4 *)(plVar7 + 0x15) = 0;
  return;
}


