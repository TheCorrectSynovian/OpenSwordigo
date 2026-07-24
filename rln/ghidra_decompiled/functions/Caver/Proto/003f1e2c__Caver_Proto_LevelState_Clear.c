/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f1e2c
 * Function: Caver::Proto::LevelState::Clear
 * Signature: undefined __thiscall Clear(LevelState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LevelState::Clear() */

void __thiscall Caver::Proto::LevelState::Clear(LevelState *this)

{
  LevelState LVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  LVar1 = this[0x30];
  uVar3 = (uint)(byte)LVar1;
  if (LVar1 != (LevelState)0x0) {
    if ((((byte)LVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_level_name__007e5098)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x30);
    }
    this[0x18] = (LevelState)0x0;
    if (((uVar3 >> 2 & 1) != 0) && (lVar4 = *(long *)(this + 0x20), lVar4 != 0)) {
      if (0 < *(int *)(lVar4 + 0x18)) {
        lVar5 = 0;
        do {
          plVar2 = *(long **)(*(long *)(lVar4 + 0x10) + lVar5 * 8);
          FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(lVar4 + 0x18));
      }
      *(undefined4 *)(lVar4 + 0x18) = 0;
      *(undefined4 *)(lVar4 + 0x48) = 0;
    }
    *(undefined8 *)(this + 0x28) = 0xffffffff;
  }
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


