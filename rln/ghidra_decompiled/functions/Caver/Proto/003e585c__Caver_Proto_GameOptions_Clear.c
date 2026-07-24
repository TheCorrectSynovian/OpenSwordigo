/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e585c
 * Function: Caver::Proto::GameOptions::Clear
 * Signature: undefined __thiscall Clear(GameOptions * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameOptions::Clear() */

void __thiscall Caver::Proto::GameOptions::Clear(GameOptions *this)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(this + 0x6c);
  if ((uVar1 & 0x1fe) != 0) {
    uVar3 = NEON_fmov(0x3f800000,4);
    *(undefined2 *)(this + 0x48) = 0x101;
    *(undefined8 *)(this + 0x4c) = uVar3;
    if (((uVar1 >> 5 & 1) != 0) && (*(GUIViewLayout **)(this + 0x58) != (GUIViewLayout *)0x0)) {
      GUIViewLayout::Clear(*(GUIViewLayout **)(this + 0x58));
      uVar1 = *(uint *)(this + 0x6c);
    }
    if (((uVar1 >> 6 & 1) != 0) && (*(GUIViewLayout **)(this + 0x60) != (GUIViewLayout *)0x0)) {
      GUIViewLayout::Clear(*(GUIViewLayout **)(this + 0x60));
      uVar1 = *(uint *)(this + 0x6c);
    }
    this[0x68] = (GameOptions)0x0;
  }
  if ((uVar1 & 0xff00) != 0) {
    *(undefined2 *)(this + 0x69) = 0;
  }
  if (0 < *(int *)(this + 0x18)) {
    lVar2 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x10) + lVar2 * 8) + 0x20))();
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x18));
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  return;
}


