/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003dcef0
 * Function: Caver::Proto::MapNode::Clear
 * Signature: undefined __thiscall Clear(MapNode * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MapNode::Clear() */

void __thiscall Caver::Proto::MapNode::Clear(MapNode *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(this + 0x84);
  if ((uVar2 & 0xff) != 0) {
    if (((uVar2 & 1) != 0) && (*(Vector2 **)(this + 0x10) != (Vector2 *)0x0)) {
      Vector2::Clear(*(Vector2 **)(this + 0x10));
      uVar2 = *(uint *)(this + 0x84);
    }
    if (((uVar2 >> 1 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x18), plVar1 != (long *)PTR__default_level_name__007e5878)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x84);
    }
    if (((uVar2 >> 2 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x20), plVar1 != (long *)PTR__default_title__007e6348)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x84);
    }
    *(undefined4 *)(this + 0x60) = 0;
    this[100] = (MapNode)0x0;
    *(undefined4 *)(this + 0x68) = 0;
    if (((uVar2 >> 7 & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x70), plVar1 != (long *)PTR__default_music__007e7748)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
      uVar2 = *(uint *)(this + 0x84);
    }
  }
  if ((uVar2 & 0xff00) != 0) {
    this[0x78] = (MapNode)0x0;
    *(undefined4 *)(this + 0x7c) = 0;
    this[0x80] = (MapNode)0x0;
  }
  if (0 < *(int *)(this + 0x30)) {
    lVar3 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x28) + lVar3 * 8) + 0x20))();
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0x30));
  }
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  return;
}


