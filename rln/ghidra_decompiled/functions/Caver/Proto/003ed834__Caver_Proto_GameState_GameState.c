/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ed834
 * Function: Caver::Proto::GameState::GameState
 * Signature: undefined __thiscall GameState(GameState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameState::GameState() */

void __thiscall Caver::Proto::GameState::GameState(GameState *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_vtable_007e5898;
  *(undefined8 *)(this + 0x10) = 0;
  *(GameState **)(this + 0x18) = this + 0x30;
  puVar1 = PTR__default_carried_object_identifier__007e6520;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)(this + 0x78) = puVar1;
  *(GameState **)(this + 0x80) = this + 0x98;
  *(GameState **)(this + 0xe0) = this + 0xf8;
  *(undefined4 *)(this + 0x28) = 4;
  *(undefined4 *)(this + 0x90) = 4;
  *(undefined4 *)(this + 0xf0) = 4;
  *(undefined **)(this + 0x50) = PTR__default_current_level__007e5760;
  puVar2 = PTR__default_current_spawn_point__007e6dd0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  puVar1 = PTR__default_current_map_node_name__007e49b8;
  *(undefined **)(this + 0x60) = PTR__default_previous_portal_level__007e7670;
  *(undefined **)(this + 0x58) = puVar2;
  puVar2 = PTR__default_selected_menu_tab__007e6ec0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined **)(this + 0xc0) = puVar2;
  puVar4 = PTR__default_carried_object_template__007e66a8;
  *(undefined2 *)(this + 200) = 0;
  puVar2 = PTR__default_flashing_item_name__007e5158;
  *(undefined **)(this + 0x70) = puVar4;
  *(undefined **)(this + 0x68) = puVar1;
  puVar1 = PTR__default_flashing_skill_name__007e63c0;
  *(undefined **)this = puVar3 + 0x10;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined **)(this + 0xd8) = puVar1;
  *(undefined **)(this + 0xd0) = puVar2;
  return;
}


