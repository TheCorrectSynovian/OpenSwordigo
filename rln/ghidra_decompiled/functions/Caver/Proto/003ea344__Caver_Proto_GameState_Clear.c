/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ea344
 * Function: Caver::Proto::GameState::Clear
 * Signature: undefined __thiscall Clear(GameState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameState::Clear() */

void __thiscall Caver::Proto::GameState::Clear(GameState *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(uint *)(this + 0x11c);
  if ((uVar2 & 0xff) != 0) {
    if (((uVar2 & 1) != 0) && (*(CharacterState **)(this + 0x10) != (CharacterState *)0x0)) {
      CharacterState::Clear(*(CharacterState **)(this + 0x10));
      uVar2 = *(uint *)(this + 0x11c);
    }
    if (((uVar2 >> 2 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x50), plVar1 != (long *)PTR__default_current_level__007e5760)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x11c);
    }
    if (((uVar2 >> 3 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x58),
       plVar1 != (long *)PTR__default_current_spawn_point__007e6dd0)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x11c);
    }
    if (((uVar2 >> 4 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x60),
       plVar1 != (long *)PTR__default_previous_portal_level__007e7670)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x11c);
    }
    if (((uVar2 >> 5 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x68),
       plVar1 != (long *)PTR__default_current_map_node_name__007e49b8)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x11c);
    }
    if (((uVar2 >> 6 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x70),
       plVar1 != (long *)PTR__default_carried_object_template__007e66a8)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x11c);
    }
    if (((uVar2 >> 7 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x78),
       plVar1 != (long *)PTR__default_carried_object_identifier__007e6520)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x11c);
    }
  }
  if ((uVar2 & 0x1fe00) != 0) {
    if (((uVar2 >> 9 & 1) != 0) && (lVar3 = *(long *)(this + 0xb8), lVar3 != 0)) {
      if (0 < *(int *)(lVar3 + 0x18)) {
        lVar4 = 0;
        do {
          plVar1 = *(long **)(*(long *)(lVar3 + 0x10) + lVar4 * 8);
          FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(lVar3 + 0x18));
      }
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(undefined4 *)(lVar3 + 0x48) = 0;
      uVar2 = *(uint *)(this + 0x11c);
    }
    if (((uVar2 >> 10 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0xc0), plVar1 != (long *)PTR__default_selected_menu_tab__007e6ec0
       )) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x11c);
    }
    *(undefined2 *)(this + 200) = 0;
    if (((uVar2 >> 0xd & 1) != 0) &&
       (plVar1 = *(long **)(this + 0xd0),
       plVar1 != (long *)PTR__default_flashing_item_name__007e5158)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x11c);
    }
    if (((uVar2 >> 0xe & 1) != 0) &&
       (plVar1 = *(long **)(this + 0xd8),
       plVar1 != (long *)PTR__default_flashing_skill_name__007e63c0)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x11c);
    }
  }
  if ((uVar2 & 0xff0000) != 0) {
    *(undefined4 *)(this + 0x118) = 0;
  }
  if (0 < *(int *)(this + 0x20)) {
    lVar3 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x18) + lVar3 * 8) + 0x20))();
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x20));
  }
  *(undefined4 *)(this + 0x20) = 0;
  if (0 < *(int *)(this + 0x88)) {
    lVar3 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x80) + lVar3 * 8) + 0x20))();
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x88));
  }
  *(undefined4 *)(this + 0x88) = 0;
  if (0 < *(int *)(this + 0xe8)) {
    lVar3 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0xe0) + lVar3 * 8) + 0x20))();
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0xe8));
  }
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  return;
}


