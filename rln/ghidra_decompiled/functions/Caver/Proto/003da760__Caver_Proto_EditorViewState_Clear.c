/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003da760
 * Function: Caver::Proto::EditorViewState::Clear
 * Signature: undefined __thiscall Clear(EditorViewState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EditorViewState::Clear() */

void __thiscall Caver::Proto::EditorViewState::Clear(EditorViewState *this)

{
  EditorViewState EVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  EVar1 = this[0x78];
  uVar3 = (uint)(byte)EVar1;
  if (EVar1 != (EditorViewState)0x0) {
    if ((((byte)EVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_file_path__007e4ba8)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x78);
    }
    if (((uVar3 >> 2 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x50),
       plVar2 != (long *)PTR__default_inspected_object_identifier__007e7f88)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x78);
    }
    if (((uVar3 >> 3 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x58),
       plVar2 != (long *)PTR__default_inspected_template_identifier__007e4d40)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x78);
    }
    *(undefined4 *)(this + 0x60) = 1;
    if (((uVar3 >> 5 & 1) != 0) && (*(Vector3 **)(this + 0x68) != (Vector3 *)0x0)) {
      Vector3::Clear(*(Vector3 **)(this + 0x68));
      uVar3 = *(uint *)(this + 0x78);
    }
    if (((uVar3 >> 6 & 1) != 0) && (*(Vector3 **)(this + 0x70) != (Vector3 *)0x0)) {
      Vector3::Clear(*(Vector3 **)(this + 0x70));
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
  *(undefined4 *)(this + 0x78) = 0;
  return;
}


