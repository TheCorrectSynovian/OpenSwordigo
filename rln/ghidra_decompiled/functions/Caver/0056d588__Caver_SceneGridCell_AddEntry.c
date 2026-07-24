/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056d588
 * Function: Caver::SceneGridCell::AddEntry
 * Signature: undefined __thiscall AddEntry(SceneGridCell * this, SceneGridEntry * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGridCell::AddEntry(Caver::SceneGridEntry*) */

void __thiscall Caver::SceneGridCell::AddEntry(SceneGridCell *this,SceneGridEntry *param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(this + 8);
  uVar4 = *(uint *)(this + 0xc);
                    /* catch() { ... } // from try @ 0056ce30 with catch @ 0056d5a8
                       catch() { ... } // from try @ 0056ce44 with catch @ 0056d5a8
                       catch() { ... } // from try @ 0056cfe8 with catch @ 0056d5a8 */
  iVar1 = uVar4 - iVar5;
  if (iVar1 == 0 || (int)uVar4 < iVar5) {
    uVar4 = uVar4 * 2;
    if ((int)uVar4 < 0x15) {
      uVar4 = 0x14;
    }
    pvVar2 = malloc((ulong)uVar4 << 3);
    if (iVar5 < 1) {
      pvVar3 = *(void **)this;
      *(void **)this = pvVar2;
    }
    else {
      pvVar3 = *(void **)this;
      memcpy((void *)((long)pvVar2 + (long)(int)(uVar4 - iVar5) * 8),
             (void *)((long)pvVar3 + (long)iVar1 * 8),(long)iVar5 << 3);
                    /* try { // try from 0056d5f4 to 0066d65f has its CatchHandler @ 0056cbdc */
      *(void **)this = pvVar2;
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
      iVar5 = *(int *)(this + 8);
    }
    *(uint *)(this + 0xc) = uVar4;
  }
  *(int *)(this + 8) = iVar5 + 1;
  *(SceneGridEntry **)(*(long *)this + (long)(int)(uVar4 - (iVar5 + 1)) * 8) = param_1;
  return;
}


