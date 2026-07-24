/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056e074
 * Function: Caver::SceneGridLayer::GetEntriesInBounds
 * Signature: undefined __thiscall GetEntriesInBounds(SceneGridLayer * this, Rectangle * param_1, FastVector * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGridLayer::GetEntriesInBounds(Caver::Rectangle const&,
   Caver::FastVector<Caver::SceneGridEntry*>*) */

void __thiscall
Caver::SceneGridLayer::GetEntriesInBounds
          (SceneGridLayer *this,Rectangle *param_1,FastVector *param_2)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  short sVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  ulong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 0056dbb4 with catch @ 0056e0a8 */
                    /* catch() { ... } // from try @ 0056d940 with catch @ 0056e0ac */
  if ((*(int *)(this + 0x28) != 0) && (*(int *)(this + 0x2c) != 0)) {
    lVar6 = GridRectForAABB(this,param_1);
    local_88 = (lVar6 << 0x10) >> 0x30;
                    /* try { // try from 0056e0d0 to 0066e277 has its CatchHandler @ 0056e540 */
    sVar5 = (short)((ulong)lVar6 >> 0x30);
    if ((short)((ulong)lVar6 >> 0x20) <= sVar5) {
      iVar3 = (int)lVar6 >> 0x10;
      do {
                    /* catch() { ... } // from try @ 0056dc50 with catch @ 0056e0fc */
        iVar9 = (int)local_88;
        iVar10 = (int)(short)lVar6;
        if ((short)lVar6 <= iVar3) {
          do {
            iVar13 = iVar10 + *(int *)(this + 0x28) * iVar9;
            piVar12 = (int *)(*(long *)(this + 0x30) + (long)iVar13 * 0x10 + 8);
            iVar8 = *piVar12;
            if (0 < iVar8) {
              plVar2 = (long *)(*(long *)(this + 0x30) + (long)iVar13 * 0x10);
              iVar13 = 0;
              do {
                    /* catch() { ... } // from try @ 0056da9c with catch @ 0056e148 */
                lVar11 = *(long *)(*plVar2 +
                                  (long)(iVar13 + (*(int *)((long)plVar2 + 0xc) - iVar8)) * 8);
                if (*(char *)(lVar11 + 0x10) == '\0') {
                  uStack_78 = *(undefined8 *)(lVar11 + 0x1c);
                  local_80 = *(undefined8 *)(lVar11 + 0x14);
                  uVar7 = Rectangle::IntersectsWithRect((Rectangle *)&local_80,param_1);
                  if ((uVar7 & 1) != 0) {
                    iVar8 = *(int *)param_2;
                    if (*(int *)(param_2 + 4) <= iVar8) {
                      iVar8 = *(int *)(param_2 + 4) * 2;
                    /* catch() { ... } // from try @ 0056da88 with catch @ 0056e180 */
                    /* catch() { ... } // from try @ 0056da68 with catch @ 0056e184 */
                      if (iVar8 < 0xb) {
                        iVar8 = 10;
                      }
                      FastVector<Caver::SceneGridEntry*>::Resize
                                ((FastVector<Caver::SceneGridEntry*> *)param_2,iVar8);
                      iVar8 = *(int *)param_2;
                    }
                    *(long *)(*(long *)(param_2 + 8) + (long)iVar8 * 8) = lVar11;
                    *(int *)param_2 = iVar8 + 1;
                    *(undefined1 *)(lVar11 + 0x10) = 1;
                  }
                }
                iVar8 = *piVar12;
                iVar13 = iVar13 + 1;
              } while (iVar13 < iVar8);
            }
            bVar1 = iVar10 < iVar3;
            iVar10 = iVar10 + 1;
          } while (bVar1);
        }
        local_88 = (ulong)(iVar9 + 1);
                    /* catch() { ... } // from try @ 0056d8a4 with catch @ 0056e1dc */
      } while (iVar9 < sVar5);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 0056d87c with catch @ 0056e20c */
                    /* catch() { ... } // from try @ 0056d874 with catch @ 0056e210 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0056d824 with catch @ 0056e214 */
  __stack_chk_fail();
}


