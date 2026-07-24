/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ac394
 * Function: Caver::RectangleIntersectsConvexPolygon
 * Signature: undefined __cdecl RectangleIntersectsConvexPolygon(Rectangle * param_1, Vector2 * param_2, float param_3, float param_4, Polygon * param_5, Vector2 * param_6, float param_7, float param_8, Vector2 * param_9, float * param_10)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RectangleIntersectsConvexPolygon(Caver::Rectangle const&, Caver::Vector2 const&, float,
   float, Caver::Polygon const&, Caver::Vector2 const&, float, float, Caver::Vector2*, float*) */

void Caver::RectangleIntersectsConvexPolygon
               (Rectangle *param_1,Vector2 *param_2,float param_3,float param_4,Polygon *param_5,
               Vector2 *param_6,float param_7,float param_8,Vector2 *param_9,float *param_10)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float local_c0;
  float fStack_bc;
  float local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  OrientedRect aOStack_98 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  
                    /* try { // try from 005ac3a8 to 006ac3cb has its CatchHandler @ 005ac6d0 */
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 005ac3cc to 006ac417 has its CatchHandler @ 005ac040 */
  OrientedRect::OBFromTransformedRectangle(param_1,param_2,param_3,param_4,param_6,param_7,param_8);
  uStack_a8 = uStack_88;
  local_b0 = local_90;
  uVar6 = OrientedRect::IntersectsPolygonOnAxis
                    (aOStack_98,param_5,(Vector2 *)&local_b0,&local_c0,&local_b4);
  if ((uVar6 & 1) != 0) {
                    /* try { // try from 005ac418 to 006ac43b has its CatchHandler @ 005ac690 */
    fVar14 = (float)NEON_fminnm(local_c0,DAT_0068431c);
    fVar11 = local_b0._4_4_;
    fVar9 = (float)local_b0;
    if (DAT_0068431c <= local_c0) {
      fVar9 = 0.0;
      fVar11 = 0.0;
    }
                    /* try { // try from 005ac43c to 006ac487 has its CatchHandler @ 005ac040 */
    if (-local_b4 < fVar14) {
      fVar9 = -(float)local_b0;
      fVar11 = -local_b0._4_4_;
      fVar14 = -local_b4;
    }
    uVar6 = OrientedRect::IntersectsPolygonOnAxis
                      (aOStack_98,param_5,(Vector2 *)((ulong)&local_b0 | 8),&local_c0,&local_b4);
    if ((uVar6 & 1) != 0) {
      fVar15 = local_c0;
      if (fVar14 <= local_c0) {
        fVar15 = fVar14;
      }
      fVar12 = uStack_a8._4_4_;
      fVar10 = (float)uStack_a8;
      if (fVar14 <= local_c0) {
        fVar12 = fVar11;
        fVar10 = fVar9;
      }
                    /* try { // try from 005ac488 to 006ac4ab has its CatchHandler @ 005ac650 */
      if (-local_b4 < fVar15) {
        fVar10 = -(float)uStack_a8;
        fVar12 = -uStack_a8._4_4_;
        fVar15 = -local_b4;
      }
      uVar6 = (ulong)*(uint *)param_5;
      if (0 < (int)*(uint *)param_5) {
                    /* try { // try from 005ac4ac to 006ac7ff has its CatchHandler @ 005ac040 */
        lVar13 = 0;
        lVar8 = 0;
        do {
          lVar1 = lVar8 + 1;
          lVar4 = 0;
          if (lVar1 < (int)uVar6) {
            lVar4 = lVar8 + 1;
          }
          pfVar2 = (float *)(*(long *)(param_5 + 8) + lVar13);
          pfVar3 = (float *)(*(long *)(param_5 + 8) + lVar4 * 8);
          local_c0 = pfVar3[1] - pfVar2[1];
          fStack_bc = -(*pfVar3 - *pfVar2);
          Vector2::Normalize((Vector2 *)&local_c0);
          uVar6 = OrientedRect::IntersectsPolygonOnAxis
                            (aOStack_98,param_5,(Vector2 *)&local_c0,&local_b4,(float *)0x0);
          if ((uVar6 & 1) == 0) goto LAB_005ac564;
          uVar6 = (ulong)*(int *)param_5;
          lVar13 = lVar13 + 8;
          fVar9 = local_b4;
          fVar11 = fStack_bc;
          fVar14 = local_c0;
          if (fVar15 <= local_b4) {
            fVar9 = fVar15;
            fVar11 = fVar12;
            fVar14 = fVar10;
          }
          fVar10 = fVar14;
          fVar12 = fVar11;
          fVar15 = fVar9;
          lVar8 = lVar1;
        } while (lVar1 < (long)uVar6);
      }
      if (param_9 != (Vector2 *)0x0) {
        local_c0 = fVar10;
        fStack_bc = fVar12;
        Vector2::Rotate((Vector2 *)&local_c0,param_7);
        *(ulong *)param_9 = CONCAT44(fStack_bc,local_c0);
      }
      if (param_10 != (float *)0x0) {
        *param_10 = fVar15 * param_8;
      }
      uVar7 = 1;
      goto LAB_005ac568;
    }
  }
LAB_005ac564:
  uVar7 = 0;
LAB_005ac568:
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


