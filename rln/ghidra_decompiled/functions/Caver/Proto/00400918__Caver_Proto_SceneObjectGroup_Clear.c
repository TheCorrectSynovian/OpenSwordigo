/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00400918
 * Function: Caver::Proto::SceneObjectGroup::Clear
 * Signature: undefined __thiscall Clear(SceneObjectGroup * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObjectGroup::Clear() */

void __thiscall Caver::Proto::SceneObjectGroup::Clear(SceneObjectGroup *this)

{
  SceneObjectGroup SVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  SVar1 = this[0x60];
  uVar3 = (uint)(byte)SVar1;
  if (SVar1 != (SceneObjectGroup)0x0) {
    if ((((byte)SVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_identifier__007e5218)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x60);
    }
    *(undefined2 *)(this + 0x50) = 0;
    this[0x52] = (SceneObjectGroup)0x0;
    if (((uVar3 >> 5 & 1) != 0) && (*(Program **)(this + 0x58) != (Program *)0x0)) {
      Program::Clear(*(Program **)(this + 0x58));
    }
  }
  if (0 < *(int *)(this + 0x20)) {
    lVar4 = 0;
    do {
      plVar2 = *(long **)(*(long *)(this + 0x18) + lVar4 * 8);
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0x20));
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  return;
}


