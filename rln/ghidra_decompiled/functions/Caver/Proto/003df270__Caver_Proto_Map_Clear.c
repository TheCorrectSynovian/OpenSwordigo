/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003df270
 * Function: Caver::Proto::Map::Clear
 * Signature: undefined __thiscall Clear(Map * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Map::Clear() */

void __thiscall Caver::Proto::Map::Clear(Map *this)

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
  *(undefined4 *)(this + 0x48) = 0;
  return;
}


