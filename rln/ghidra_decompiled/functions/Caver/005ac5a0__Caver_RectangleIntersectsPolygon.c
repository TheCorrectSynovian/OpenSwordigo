/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ac5a0
 * Function: Caver::RectangleIntersectsPolygon
 * Signature: undefined __cdecl RectangleIntersectsPolygon(Rectangle * param_1, Vector2 * param_2, float param_3, float param_4, Polygon * param_5, Vector2 * param_6, float param_7, float param_8, Vector2 * param_9, float * param_10, Vector2 * param_11)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RectangleIntersectsPolygon(Caver::Rectangle const&, Caver::Vector2 const&, float, float,
   Caver::Polygon const&, Caver::Vector2 const&, float, float, Caver::Vector2*, float*,
   Caver::Vector2 const&) */

void Caver::RectangleIntersectsPolygon
               (Rectangle *param_1,Vector2 *param_2,float param_3,float param_4,Polygon *param_5,
               Vector2 *param_6,float param_7,float param_8,Vector2 *param_9,float *param_10,
               Vector2 *param_11)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  OrientedRect aOStack_c8 [8];
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  OrientedRect::OBFromTransformedRectangle(param_1,param_2,param_3,param_4,param_6,param_7,param_8);
  local_e0 = 0;
  Vector2::InverseTransformed(param_11,param_7,param_8);
  if (0 < (int)(*(int *)param_5 + (uint)(byte)param_5[0x21] + -1)) {
    lVar12 = 0;
    bVar5 = 0;
    bVar4 = 0;
                    /* catch() { ... } // from try @ 005ac488 with catch @ 005ac650 */
    fVar14 = 0.0;
    fVar13 = 1.0;
    fVar19 = 1.0;
    fVar20 = 0.0;
    uVar10 = 0;
    fVar21 = DAT_0068431c;
    do {
      uVar1 = uVar10 + 1;
      pfVar2 = (float *)(*(long *)(param_5 + 8) + lVar12);
      local_e0 = *(undefined8 *)pfVar2;
      local_d8 = pfVar2[2];
                    /* catch() { ... } // from try @ 005ac418 with catch @ 005ac690 */
      local_d4 = pfVar2[3];
      local_e4 = -(local_d8 - *pfVar2);
      local_e8 = local_d4 - pfVar2[1];
      Vector2::Normalize((Vector2 *)&local_e8);
      uVar9 = OrientedRect::IntersectsLineSegmentOnAxis
                        (aOStack_c8,(LineSegment *)&local_e0,(Vector2 *)&local_e8,&local_ec,
                         (float *)0x0);
                    /* catch() { ... } // from try @ 005ac3a8 with catch @ 005ac6d0 */
      if ((uVar9 & 1) != 0) {
        local_100 = local_c0;
        local_fc = fStack_bc;
        local_108 = local_b8;
        local_104 = fStack_b4;
        if (local_e8 * local_c0 + local_e4 * fStack_bc < 0.0) {
          local_100 = -local_c0;
                    /* catch() { ... } // from try @ 005ac338 with catch @ 005ac710 */
          local_fc = -fStack_bc;
        }
        if (local_e8 * local_b8 + local_e4 * fStack_b4 < 0.0) {
          local_108 = -local_b8;
          local_104 = -fStack_b4;
        }
        uVar9 = OrientedRect::IntersectsLineSegmentOnAxis
                          (aOStack_c8,(LineSegment *)&local_e0,(Vector2 *)&local_100,&local_f0,
                           (float *)0x0);
                    /* catch() { ... } // from try @ 005ac18c with catch @ 005ac750 */
                    /* catch() { ... } // from try @ 005ac2b8 with catch @ 005ac764 */
        if (((uVar9 & 1) != 0) &&
           (uVar9 = OrientedRect::IntersectsLineSegmentOnAxis
                              (aOStack_c8,(LineSegment *)&local_e0,(Vector2 *)&local_108,&local_f4,
                               (float *)0x0), fVar7 = local_f0, fVar6 = local_fc, (uVar9 & 1) != 0))
        {
          if ((fVar20 <= 0.5) || (local_e4 <= 0.5)) {
            fVar15 = fStack_cc - local_ec * local_e4;
            fVar16 = fStack_cc - fVar21 * fVar20;
            fVar18 = local_d0 - fVar21 * fVar19;
            fVar17 = local_d0 - local_ec * local_e8;
            if (fVar17 * fVar17 + fVar15 * fVar15 < fVar18 * fVar18 + fVar16 * fVar16)
            goto LAB_005ac7ec;
          }
          else if (local_ec < fVar21) {
LAB_005ac7ec:
            fVar14 = local_e4;
            fVar13 = local_e8;
            fVar19 = local_e8;
            fVar20 = local_e4;
            fVar21 = local_ec;
            if ((param_5[0x21] == (Polygon)0x0) &&
               ((uVar10 == 0 || (uVar10 == *(int *)param_5 - 2)))) {
              bVar5 = 1;
            }
            else {
              bVar5 = 0;
            }
          }
          if ((fVar20 <= 0.5) || (local_fc <= 0.5)) {
            fVar17 = fStack_cc - local_f0 * local_fc;
            fVar16 = fStack_cc - fVar21 * fVar20;
            fVar18 = local_d0 - fVar21 * fVar13;
            fVar15 = local_d0 - local_f0 * local_100;
            if (fVar15 * fVar15 + fVar17 * fVar17 < fVar18 * fVar18 + fVar16 * fVar16)
            goto LAB_005ac890;
          }
          else if (local_f0 < fVar21) {
LAB_005ac890:
            uVar9 = IsCollisionNormalValidForPolygonLineSegment
                              ((Vector2 *)&local_100,param_5,(int)uVar10);
            if ((uVar9 & 1) != 0) {
              bVar5 = 0;
              fVar14 = fVar6;
              fVar13 = local_100;
              fVar19 = local_100;
              fVar20 = fVar6;
              fVar21 = fVar7;
            }
          }
          fVar7 = local_f4;
          fVar6 = local_104;
          if ((fVar20 <= 0.5) || (local_104 <= 0.5)) {
            fVar17 = fStack_cc - local_f4 * local_104;
            fVar16 = fStack_cc - fVar21 * fVar20;
                    /* try { // try from 005ac900 to 006ac943 has its CatchHandler @ 005ac900
                       catch() { ... } // from try @ 005ac900 with catch @ 005ac900
                       catch() { ... } // from try @ 005ac954 with catch @ 005ac900
                       catch() { ... } // from try @ 005acaf4 with catch @ 005ac900
                       catch() { ... } // from try @ 005acca8 with catch @ 005ac900 */
            fVar18 = local_d0 - fVar21 * fVar13;
            fVar15 = local_d0 - local_f4 * local_108;
            fVar15 = fVar15 * fVar15 + fVar17 * fVar17;
            fVar16 = fVar18 * fVar18 + fVar16 * fVar16;
            bVar8 = false;
            if (!NAN(fVar15) && !NAN(fVar16)) {
              bVar8 = fVar15 < fVar16;
            }
          }
          else {
            bVar8 = local_f4 < fVar21;
          }
          bVar4 = 1;
          if ((local_f4 < fVar21) && (bVar8)) {
                    /* try { // try from 005ac944 to 006ac953 has its CatchHandler @ 005accc8 */
            uVar10 = IsCollisionNormalValidForPolygonLineSegment
                               ((Vector2 *)&local_108,param_5,(int)uVar10);
            if ((uVar10 & 1) == 0) {
              bVar4 = 1;
            }
            else {
              bVar5 = 0;
                    /* try { // try from 005ac954 to 006aca7f has its CatchHandler @ 005ac900 */
              bVar4 = 1;
              fVar14 = fVar6;
              fVar13 = local_108;
              fVar19 = local_108;
              fVar20 = fVar6;
              fVar21 = fVar7;
            }
          }
        }
      }
      lVar12 = lVar12 + 8;
      uVar10 = uVar1;
    } while ((long)uVar1 < (long)((long)*(int *)param_5 + (ulong)(byte)param_5[0x21] + -1));
    if (!(bool)(bVar5 | bVar4 ^ 1)) {
      if (param_9 != (Vector2 *)0x0) {
        local_e0 = CONCAT44(fVar14,fVar13);
        Vector2::Rotate((Vector2 *)&local_e0,param_7);
        *(undefined8 *)param_9 = local_e0;
      }
      if (param_10 != (float *)0x0) {
        *param_10 = fVar21 * param_8;
      }
      uVar11 = 1;
      goto LAB_005ac9d0;
    }
  }
  uVar11 = 0;
LAB_005ac9d0:
  if (*(long *)(lVar3 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


