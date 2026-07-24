/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ed900
 * Function: Caver::Proto::GameState::SharedCtor
 * Signature: undefined __thiscall SharedCtor(GameState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameState::SharedCtor() */

void __thiscall Caver::Proto::GameState::SharedCtor(GameState *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__default_current_level__007e5760;
  *(undefined4 *)(this + 8) = 0;
  puVar4 = PTR__default_previous_portal_level__007e7670;
  *(undefined8 *)(this + 0x10) = 0;
  puVar3 = PTR__default_carried_object_template__007e66a8;
  puVar1 = PTR__default_current_map_node_name__007e49b8;
  *(undefined **)(this + 0x58) = PTR__default_current_spawn_point__007e6dd0;
  *(undefined **)(this + 0x50) = puVar2;
  *(undefined **)(this + 0x68) = puVar1;
  *(undefined **)(this + 0x60) = puVar4;
  puVar1 = PTR__default_selected_menu_tab__007e6ec0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined **)(this + 0xc0) = puVar1;
  puVar2 = PTR__default_carried_object_identifier__007e6520;
  *(undefined2 *)(this + 200) = 0;
  puVar1 = PTR__default_flashing_item_name__007e5158;
  *(undefined **)(this + 0x78) = puVar2;
  *(undefined **)(this + 0x70) = puVar3;
  puVar2 = PTR__default_flashing_skill_name__007e63c0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined **)(this + 0xd8) = puVar2;
  *(undefined **)(this + 0xd0) = puVar1;
  return;
}


