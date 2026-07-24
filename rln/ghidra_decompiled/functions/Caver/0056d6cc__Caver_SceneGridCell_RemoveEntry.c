/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056d6cc
 * Function: Caver::SceneGridCell::RemoveEntry
 * Signature: undefined __thiscall RemoveEntry(SceneGridCell * this, SceneGridEntry * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGridCell::RemoveEntry(Caver::SceneGridEntry*) */

void __thiscall Caver::SceneGridCell::RemoveEntry(SceneGridCell *this,SceneGridEntry *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  SceneGridEntry *pSVar5;
  SceneGridEntry *pSVar6;
  
  iVar1 = *(int *)(this + 8);
  if (0 < iVar1) {
    iVar2 = *(int *)(this + 0xc);
    iVar3 = iVar2 - iVar1;
    puVar4 = (undefined8 *)(*(long *)this + (long)iVar3 * 8);
    pSVar5 = (SceneGridEntry *)0x0;
    do {
      pSVar6 = (SceneGridEntry *)*puVar4;
      *puVar4 = pSVar5;
      if (pSVar6 == param_1) {
        *(int *)(this + 8) = iVar1 + -1;
        return;
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
      pSVar5 = pSVar6;
    } while (iVar3 < iVar2);
  }
  return;
}


