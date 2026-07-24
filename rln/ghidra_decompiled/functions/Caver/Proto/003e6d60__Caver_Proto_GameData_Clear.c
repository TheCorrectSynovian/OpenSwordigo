/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e6d60
 * Function: Caver::Proto::GameData::Clear
 * Signature: undefined __thiscall Clear(GameData * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameData::Clear() */

void __thiscall Caver::Proto::GameData::Clear(GameData *this)

{
  long lVar1;
  
  if (0 < *(int *)(this + 0x18)) {
    lVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x10) + lVar1 * 8) + 0x20))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x18));
  }
  *(undefined4 *)(this + 0x18) = 0;
  if (0 < *(int *)(this + 0x50)) {
    lVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x48) + lVar1 * 8) + 0x20))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x50));
  }
  *(undefined4 *)(this + 0x50) = 0;
  if (0 < *(int *)(this + 0x88)) {
    lVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x80) + lVar1 * 8) + 0x20))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0x88));
  }
  *(undefined4 *)(this + 0x88) = 0;
  if (0 < *(int *)(this + 0xc0)) {
    lVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0xb8) + lVar1 * 8) + 0x20))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0xc0));
  }
  *(undefined4 *)(this + 0xc0) = 0;
  if (0 < *(int *)(this + 0xf8)) {
    lVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0xf0) + lVar1 * 8) + 0x20))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(this + 0xf8));
  }
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  return;
}


