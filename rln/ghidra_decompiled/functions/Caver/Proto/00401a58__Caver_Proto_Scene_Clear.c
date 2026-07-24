/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00401a58
 * Function: Caver::Proto::Scene::Clear
 * Signature: undefined __thiscall Clear(Scene * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Scene::Clear() */

void __thiscall Caver::Proto::Scene::Clear(Scene *this)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(this + 0x98);
  if ((uVar1 & 0x3fc) != 0) {
    if (((uVar1 >> 2 & 1) != 0) && (*(ObjectLibrary **)(this + 0x80) != (ObjectLibrary *)0x0)) {
      ObjectLibrary::Clear(*(ObjectLibrary **)(this + 0x80));
      uVar1 = *(uint *)(this + 0x98);
    }
    if (((uVar1 >> 3 & 1) != 0) && (*(Rectangle **)(this + 0x88) != (Rectangle *)0x0)) {
      Rectangle::Clear(*(Rectangle **)(this + 0x88));
      uVar1 = *(uint *)(this + 0x98);
    }
    if (((uVar1 >> 4 & 1) != 0) && (*(Program **)(this + 0x90) != (Program *)0x0)) {
      Program::Clear(*(Program **)(this + 0x90));
    }
  }
  if (0 < *(int *)(this + 0x18)) {
    lVar2 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x10) + lVar2 * 8) + 0x20))();
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x18));
  }
  *(undefined4 *)(this + 0x18) = 0;
  if (0 < *(int *)(this + 0x50)) {
    lVar2 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x48) + lVar2 * 8) + 0x20))();
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(this + 0x50));
  }
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  return;
}


