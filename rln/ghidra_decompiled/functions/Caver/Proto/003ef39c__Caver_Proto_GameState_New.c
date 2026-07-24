/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ef39c
 * Function: Caver::Proto::GameState::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameState::New() const */

void Caver::Proto::GameState::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  
  plVar5 = operator_new(0x120);
  puVar3 = PTR_vtable_007e5898;
  plVar5[2] = 0;
  plVar5[3] = (long)(plVar5 + 6);
  puVar1 = PTR__default_carried_object_identifier__007e6520;
  *(undefined4 *)(plVar5 + 1) = 0;
  plVar5[0xf] = (long)puVar1;
  plVar5[0x10] = (long)(plVar5 + 0x13);
  plVar5[0x1c] = (long)(plVar5 + 0x1f);
  *(undefined4 *)(plVar5 + 5) = 4;
  *(undefined4 *)(plVar5 + 0x12) = 4;
  *(undefined4 *)(plVar5 + 0x1e) = 4;
  plVar5[10] = (long)PTR__default_current_level__007e5760;
  puVar2 = PTR__default_current_spawn_point__007e6dd0;
  plVar5[4] = 0;
  plVar5[0x11] = 0;
  plVar5[0x1d] = 0;
  puVar1 = PTR__default_current_map_node_name__007e49b8;
  plVar5[0xc] = (long)PTR__default_previous_portal_level__007e7670;
  plVar5[0xb] = (long)puVar2;
  puVar2 = PTR__default_selected_menu_tab__007e6ec0;
  plVar5[0x17] = 0;
  plVar5[0x18] = (long)puVar2;
  puVar4 = PTR__default_carried_object_template__007e66a8;
  *(undefined2 *)(plVar5 + 0x19) = 0;
  puVar2 = PTR__default_flashing_item_name__007e5158;
  plVar5[0xe] = (long)puVar4;
  plVar5[0xd] = (long)puVar1;
  puVar1 = PTR__default_flashing_skill_name__007e63c0;
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[0x23] = 0;
  plVar5[0x1b] = (long)puVar1;
  plVar5[0x1a] = (long)puVar2;
  return;
}


