/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00527a3c
 * Function: Caver::MapView::NearestNodeInDirection
 * Signature: undefined __thiscall NearestNodeInDirection(MapView * this, MapViewNode * param_1, Vector2 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::NearestNodeInDirection(Caver::MapViewNode*, Caver::Vector2 const&) */

MapViewNode * __thiscall
Caver::MapView::NearestNodeInDirection(MapView *this,MapViewNode *param_1,Vector2 *param_2)

{
  long lVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  MapViewNode *pMVar5;
  MapViewNode *pMVar6;
  long lVar7;
  ulong uVar8;
  MapViewNode *pMVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_80;
  long local_78;
  
  fVar2 = DAT_00683944;
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0x118);
  lVar4 = *(long *)(this + 0x120);
  if (lVar4 == lVar3) {
    pMVar5 = (MapViewNode *)0x0;
  }
  else {
    lVar7 = 0;
    uVar8 = 0;
    pMVar6 = (MapViewNode *)0x0;
    fVar12 = DAT_0068431c;
    do {
      pMVar9 = *(MapViewNode **)(lVar3 + lVar7);
      pMVar5 = pMVar6;
      if ((pMVar9 != param_1) && (pMVar9[0x19] != (MapViewNode)0x0)) {
        local_80 = CONCAT44((float)((ulong)*(undefined8 *)(*(long *)pMVar9 + 8) >> 0x20) -
                            (float)((ulong)*(undefined8 *)(*(long *)param_1 + 8) >> 0x20),
                            (float)*(undefined8 *)(*(long *)pMVar9 + 8) -
                            (float)*(undefined8 *)(*(long *)param_1 + 8));
        fVar10 = (float)Vector2::Angle(param_2);
        fVar11 = (float)Vector2::Angle((Vector2 *)&local_80);
        fVar11 = (float)AngleDifference(fVar10,fVar11);
        fVar10 = fVar12;
        if (ABS(fVar11) < fVar2) {
          fVar11 = (float)local_80 * (float)local_80 + local_80._4_4_ * local_80._4_4_;
                    /* catch() { ... } // from try @ 00527b40 with catch @ 00527b10 */
          fVar10 = SQRT(fVar11);
          if (NAN(fVar10)) {
            fVar10 = sqrtf(fVar11);
          }
          pMVar5 = pMVar9;
          if (fVar12 <= fVar10) {
                    /* try { // try from 00527b2c to 00627b3f has its CatchHandler @ 00527b64 */
            pMVar5 = pMVar6;
            fVar10 = fVar12;
          }
        }
        lVar3 = *(long *)(this + 0x118);
        lVar4 = *(long *)(this + 0x120);
        fVar12 = fVar10;
      }
      uVar8 = uVar8 + 1;
                    /* try { // try from 00527b40 to 00627b67 has its CatchHandler @ 00527b10 */
      lVar7 = lVar7 + 0x10;
      pMVar6 = pMVar5;
    } while (uVar8 < (ulong)(lVar4 - lVar3 >> 4));
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* catch() { ... } // from try @ 00527b2c with catch @ 00527b64 */
    return pMVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


