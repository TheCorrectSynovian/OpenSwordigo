/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ea15c
 * Function: Caver::Proto::PlayerProfile::Clear
 * Signature: undefined __thiscall Clear(PlayerProfile * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile::Clear() */

void __thiscall Caver::Proto::PlayerProfile::Clear(PlayerProfile *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(this + 0xa8);
  if ((uVar2 & 0xff) != 0) {
    if (((uVar2 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)PTR__default_name__007e7d58)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0xa8);
    }
    if (((uVar2 >> 1 & 1) != 0) && (*(DateTime **)(this + 0x18) != (DateTime *)0x0)) {
      DateTime::Clear(*(DateTime **)(this + 0x18));
      uVar2 = *(uint *)(this + 0xa8);
    }
    if (((uVar2 >> 2 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x20),
       plVar1 != (long *)PTR__default_current_level_title__007e50a0)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0xa8);
    }
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    if (((uVar2 >> 6 & 1) != 0) && (*(GameState **)(this + 0x38) != (GameState *)0x0)) {
      GameState::Clear(*(GameState **)(this + 0x38));
      uVar2 = *(uint *)(this + 0xa8);
    }
    if (((uVar2 >> 7 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x40),
       plVar1 != (long *)PTR__default_equipped_weapon_name__007e59b0)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0xa8);
    }
  }
  if ((uVar2 & 0xff00) != 0) {
    if (((uVar2 >> 8 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x48),
       plVar1 != (long *)PTR__default_equipped_armor_name__007e6ea0)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0xa8);
    }
    if (((uVar2 >> 9 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x50),
       plVar1 != (long *)PTR__default_weapon_trinket_name__007e6df0)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0xa8);
    }
    if (((uVar2 >> 10 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x58),
       plVar1 != (long *)PTR__default_armor_trinket_name__007e7ba0)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0xa8);
    }
    this[0x98] = (PlayerProfile)0x0;
    if (((uVar2 >> 0xd & 1) != 0) &&
       (plVar1 = *(long **)(this + 0xa0), plVar1 != (long *)PTR__default_identifier__007e5ce8)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
    }
  }
  if (0 < *(int *)(this + 0x68)) {
    lVar3 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x60) + lVar3 * 8) + 0x20))();
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x68));
  }
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  return;
}


