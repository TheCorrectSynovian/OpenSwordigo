/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ef47c
 * Function: Caver::Proto::CharacterState::Clear
 * Signature: undefined __thiscall Clear(CharacterState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState::Clear() */

void __thiscall Caver::Proto::CharacterState::Clear(CharacterState *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(this + 0xcc);
  if ((uVar2 & 0xff) != 0) {
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
    if (((uVar2 >> 6 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x58), plVar1 != (long *)PTR__default_equipped_weapon__007e56f0))
    {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0xcc);
    }
    if (((uVar2 >> 7 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x60), plVar1 != (long *)PTR__default_equipped_armor__007e6790))
    {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0xcc);
    }
  }
  if ((uVar2 & 0x1fe00) != 0) {
    if (((uVar2 >> 9 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0xa0), plVar1 != (long *)PTR__default_current_skill__007e50e8)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0xcc);
    }
    if (((uVar2 >> 10 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0xa8), plVar1 != (long *)PTR__default_weapon_trinket__007e5d70))
    {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0xcc);
    }
    if (((uVar2 >> 0xb & 1) != 0) &&
       (plVar1 = *(long **)(this + 0xb0), plVar1 != (long *)PTR__default_armor_trinket__007e5360)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0xcc);
    }
    if (((uVar2 >> 0xc & 1) != 0) &&
       (plVar1 = *(long **)(this + 0xb8), plVar1 != (long *)PTR__default_skill_trinket__007e61b0)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
    }
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined4 *)(this + 200) = 0;
  }
  if (0 < *(int *)(this + 0x28)) {
    lVar3 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x20) + lVar3 * 8) + 0x20))();
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x28));
  }
  *(undefined4 *)(this + 0x28) = 0;
  if (0 < *(int *)(this + 0x70)) {
    lVar3 = 0;
    do {
      plVar1 = *(long **)(*(long *)(this + 0x68) + lVar3 * 8);
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x70));
  }
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  return;
}


