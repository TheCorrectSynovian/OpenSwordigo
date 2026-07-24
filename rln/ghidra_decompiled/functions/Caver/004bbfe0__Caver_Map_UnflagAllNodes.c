/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bbfe0
 * Function: Caver::Map::UnflagAllNodes
 * Signature: undefined __thiscall UnflagAllNodes(Map * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Map::UnflagAllNodes() */

void __thiscall Caver::Map::UnflagAllNodes(Map *this)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  plVar3 = *(long **)this;
  plVar2 = *(long **)(this + 8);
  if (plVar3 != plVar2) {
    uVar1 = ((ulong)((long)plVar2 + (-0x10 - (long)plVar3)) >> 4) + 1;
    if (2 < uVar1) {
      uVar4 = uVar1 & 0x1ffffffffffffffe;
      plVar5 = plVar3 + 2;
      uVar6 = uVar4;
      do {
        lVar7 = *plVar5;
        uVar6 = uVar6 - 2;
        *(undefined1 *)(plVar5[-2] + 0x5c) = 0;
        *(undefined1 *)(lVar7 + 0x5c) = 0;
        plVar5 = plVar5 + 4;
      } while (uVar6 != 0);
      plVar3 = plVar3 + uVar4 * 2;
      if (uVar1 == uVar4) {
        return;
      }
    }
    do {
      plVar5 = plVar3 + 2;
      *(undefined1 *)(*plVar3 + 0x5c) = 0;
      plVar3 = plVar5;
    } while (plVar2 != plVar5);
  }
  return;
}


