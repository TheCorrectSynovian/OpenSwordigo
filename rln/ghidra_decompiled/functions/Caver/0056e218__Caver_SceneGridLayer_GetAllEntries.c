/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056e218
 * Function: Caver::SceneGridLayer::GetAllEntries
 * Signature: undefined __thiscall GetAllEntries(SceneGridLayer * this, FastVector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGridLayer::GetAllEntries(Caver::FastVector<Caver::SceneGridEntry*>*) */

void __thiscall Caver::SceneGridLayer::GetAllEntries(SceneGridLayer *this,FastVector *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int local_64;
  
                    /* catch() { ... } // from try @ 0056d7fc with catch @ 0056e244 */
                    /* catch() { ... } // from try @ 0056d7f4 with catch @ 0056e248 */
  if (0 < *(int *)(this + 0x2c)) {
                    /* catch() { ... } // from try @ 0056d7a4 with catch @ 0056e24c */
    iVar2 = *(int *)(this + 0x28);
    local_64 = 0;
    do {
      if (0 < iVar2) {
        iVar5 = 0;
        do {
          iVar7 = iVar5 + iVar2 * local_64;
                    /* try { // try from 0056e278 to 0066e463 has its CatchHandler @ 0056d660 */
          piVar6 = (int *)(*(long *)(this + 0x30) + (long)iVar7 * 0x10 + 8);
          iVar2 = *piVar6;
                    /* catch() { ... } // from try @ 0056d77c with catch @ 0056e27c */
                    /* catch() { ... } // from try @ 0056d774 with catch @ 0056e280 */
          if (0 < iVar2) {
                    /* catch() { ... } // from try @ 0056d6c4 with catch @ 0056e284 */
            plVar1 = (long *)(*(long *)(this + 0x30) + (long)iVar7 * 0x10);
            iVar7 = 0;
            do {
              lVar4 = *(long *)(*plVar1 + (long)(iVar7 + (*(int *)((long)plVar1 + 0xc) - iVar2)) * 8
                               );
              if (*(char *)(lVar4 + 0x10) == '\0') {
                iVar3 = *(int *)param_1;
                if (*(int *)(param_1 + 4) <= iVar3) {
                  iVar2 = *(int *)(param_1 + 4) * 2;
                  if (iVar2 < 0xb) {
                    iVar2 = 10;
                  }
                  FastVector<Caver::SceneGridEntry*>::Resize
                            ((FastVector<Caver::SceneGridEntry*> *)param_1,iVar2);
                  iVar3 = *(int *)param_1;
                  iVar2 = *piVar6;
                }
                *(long *)(*(long *)(param_1 + 8) + (long)iVar3 * 8) = lVar4;
                *(int *)param_1 = iVar3 + 1;
                    /* catch() { ... } // from try @ 0056d6b0 with catch @ 0056e2e8 */
                *(undefined1 *)(lVar4 + 0x10) = 1;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar2);
          }
          iVar2 = *(int *)(this + 0x28);
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar2);
      }
      local_64 = local_64 + 1;
    } while (local_64 < *(int *)(this + 0x2c));
  }
  return;
}


