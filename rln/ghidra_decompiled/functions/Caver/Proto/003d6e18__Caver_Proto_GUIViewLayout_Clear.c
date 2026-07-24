/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d6e18
 * Function: Caver::Proto::GUIViewLayout::Clear
 * Signature: undefined __thiscall Clear(GUIViewLayout * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GUIViewLayout::Clear() */

void __thiscall Caver::Proto::GUIViewLayout::Clear(GUIViewLayout *this)

{
  GUIViewLayout GVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  GVar1 = this[0x58];
  uVar3 = (uint)(byte)GVar1;
  if (GVar1 != (GUIViewLayout)0x0) {
    if ((((byte)GVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_identifier__007e4ab0)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x58);
    }
    if (((uVar3 >> 2 & 1) != 0) && (lVar4 = *(long *)(this + 0x50), lVar4 != 0)) {
      if (*(char *)(lVar4 + 0x1c) != '\0') {
        *(undefined8 *)(lVar4 + 0x14) = 0;
        *(undefined8 *)(lVar4 + 0xc) = 0;
      }
      *(undefined4 *)(lVar4 + 0x1c) = 0;
    }
  }
  if (0 < *(int *)(this + 0x20)) {
    lVar4 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x18) + lVar4 * 8) + 0x20))();
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0x20));
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  return;
}


