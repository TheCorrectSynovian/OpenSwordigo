/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005acc90
 * Function: Caver::CircleIntersectsPolygon
 * Signature: undefined __cdecl CircleIntersectsPolygon(Circle * param_1, Vector2 * param_2, float param_3, float param_4, Polygon * param_5, Vector2 * param_6, float param_7, float param_8, Vector2 * param_9, float * param_10)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CircleIntersectsPolygon(Caver::Circle const&, Caver::Vector2 const&, float, float,
   Caver::Polygon const&, Caver::Vector2 const&, float, float, Caver::Vector2*, float*) */

void Caver::CircleIntersectsPolygon
               (Circle *param_1,Vector2 *param_2,float param_3,float param_4,Polygon *param_5,
               Vector2 *param_6,float param_7,float param_8,Vector2 *param_9,float *param_10)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_f8;
  undefined8 local_f0;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  Vector2 aVStack_c0 [8];
  float local_b8;
  float fStack_b4;
  float local_b0;
  long local_a8;
  
                    /* try { // try from 005acca8 to 006acd3b has its CatchHandler @ 005ac900 */
  lVar3 = tpidr_el0;
                    /* catch() { ... } // from try @ 005acc80 with catch @ 005accc4 */
  local_a8 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 005ac944 with catch @ 005accc8 */
  Vector2::Transformed((Vector2 *)param_1,param_3,param_4);
  Vector2::InverseTransformed(aVStack_c0,param_7,param_8);
  local_b8 = local_d0;
  fStack_b4 = fStack_cc;
  local_b0 = (*(float *)(param_1 + 8) * param_4) / param_8;
  if (ABS(param_8 + -1.0) <= DAT_00683488) {
    local_b0 = *(float *)(param_1 + 8) * param_4;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005acf44 with catch @ 005acd3c
                        */
  if (0 < (int)(*(int *)param_5 + (uint)(byte)param_5[0x21] + -1)) {
    lVar10 = 0;
    bVar5 = 0;
    bVar4 = 0;
    fVar12 = 0.0;
    fVar11 = 1.0;
    fVar20 = 1.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    uVar8 = 0;
    fVar19 = DAT_0068431c;
    do {
      uVar1 = uVar8 + 1;
      pfVar2 = (float *)(*(long *)(param_5 + 8) + lVar10);
      local_d0 = *pfVar2;
      fStack_cc = pfVar2[1];
      local_c8 = pfVar2[2];
      fStack_c4 = pfVar2[3];
      local_d4 = -(local_c8 - local_d0);
      local_d8 = fStack_c4 - fStack_cc;
                    /* try { // try from 005acde0 to 006acde7 has its CatchHandler @ 005acea4 */
      Vector2::Normalize((Vector2 *)&local_d8);
      uVar7 = Circle::IntersectsLineSegmentOnAxis
                        ((Circle *)&local_b8,(LineSegment *)&local_d0,(Vector2 *)&local_d8,&local_dc
                         ,(float *)0x0);
      if ((uVar7 & 1) != 0) {
        local_f0 = CONCAT44(fStack_cc - fStack_b4,local_d0 - local_b8);
        Vector2::Normalize((Vector2 *)&local_f0);
                    /* try { // try from 005ace28 to 006ace4f has its CatchHandler @ 005acefc */
        local_f8 = CONCAT44(fStack_c4 - fStack_b4,local_c8 - local_b8);
        Vector2::Normalize((Vector2 *)&local_f8);
        fVar17 = (float)((ulong)local_f0 >> 0x20);
        if (local_d8 * (float)local_f0 + local_d4 * fVar17 < 0.0) {
          local_f0 = CONCAT44(-fVar17,-(float)local_f0);
        }
        fVar17 = (float)((ulong)local_f8 >> 0x20);
        if (local_d8 * (float)local_f8 + local_d4 * fVar17 < 0.0) {
          local_f8 = CONCAT44(-fVar17,-(float)local_f8);
                    /* try { // try from 005ace74 to 006ace7b has its CatchHandler @ 005acea4 */
        }
        uVar7 = Circle::IntersectsLineSegmentOnAxis
                          ((Circle *)&local_b8,(LineSegment *)&local_d0,(Vector2 *)&local_f0,
                           &local_e0,(float *)0x0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005acde0 with catch @ 005acea4
                       catch(type#1 @ 00000000) { ... } // from try @ 005ace74 with catch @ 005acea4
                        */
        if (((uVar7 & 1) != 0) &&
           (uVar7 = Circle::IntersectsLineSegmentOnAxis
                              ((Circle *)&local_b8,(LineSegment *)&local_d0,(Vector2 *)&local_f8,
                               &local_e4,(float *)0x0), fVar17 = local_e0, (uVar7 & 1) != 0)) {
                    /* try { // try from 005acec4 to 006acf43 has its CatchHandler @ 005acf4c */
          if ((fVar21 <= 0.5) || (local_d4 <= 0.5)) {
            fVar18 = 0.0 - local_dc * local_d4;
            fVar14 = 0.0 - local_dc * local_d8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005ace28 with catch @ 005acefc
                        */
            fVar13 = 0.0 - fVar19 * fVar20;
            fVar16 = 0.0 - fVar19 * fVar21;
            if (fVar18 * fVar18 + fVar14 * fVar14 < fVar13 * fVar13 + fVar16 * fVar16)
            goto LAB_005acf28;
          }
          else if (local_dc < fVar19) {
LAB_005acf28:
            fVar12 = local_d4;
            fVar11 = local_d8;
            fVar20 = local_d8;
            fVar21 = local_d4;
            fVar22 = local_d4;
            fVar19 = local_dc;
                    /* try { // try from 005acf44 to 006acf4f has its CatchHandler @ 005acd3c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005acec4 with catch @ 005acf4c
                        */
            if ((param_5[0x21] == (Polygon)0x0) && ((uVar8 == 0 || (uVar8 == *(int *)param_5 - 2))))
            {
                    /* try { // try from 005acf50 to 006acf83 has its CatchHandler @ 005acf50
                       catch() { ... } // from try @ 005acf50 with catch @ 005acf50
                       catch() { ... } // from try @ 005acf90 with catch @ 005acf50 */
              bVar5 = 1;
            }
            else {
              bVar5 = 0;
            }
          }
          fVar18 = local_f0._4_4_;
          if ((fVar22 <= 0.5) || (local_f0._4_4_ <= 0.5)) {
                    /* try { // try from 005acf84 to 006acf8f has its CatchHandler @ 005ad05c */
            fVar14 = 0.0 - local_e0 * local_f0._4_4_;
                    /* try { // try from 005acf90 to 006ad0cb has its CatchHandler @ 005acf50 */
            fVar13 = 0.0 - local_e0 * (float)local_f0;
            fVar15 = 0.0 - fVar19 * fVar11;
            fVar16 = 0.0 - fVar19 * fVar22;
            if (fVar14 * fVar14 + fVar13 * fVar13 < fVar15 * fVar15 + fVar16 * fVar16)
            goto LAB_005acfcc;
          }
          else if (local_e0 < fVar19) {
LAB_005acfcc:
            uVar7 = IsCollisionNormalValidForPolygonLineSegment
                              ((Vector2 *)&local_f0,param_5,(int)uVar8);
            if ((uVar7 & 1) != 0) {
              bVar5 = 0;
              fVar12 = fVar18;
              fVar11 = (float)local_f0;
              fVar20 = (float)local_f0;
              fVar21 = fVar18;
              fVar22 = fVar18;
              fVar19 = fVar17;
            }
          }
          fVar18 = local_e4;
          fVar17 = local_f8._4_4_;
          if ((fVar22 <= 0.5) || (local_f8._4_4_ <= 0.5)) {
            fVar14 = 0.0 - local_e4 * local_f8._4_4_;
            fVar13 = 0.0 - local_e4 * (float)local_f8;
            fVar13 = fVar14 * fVar14 + fVar13 * fVar13;
            fVar16 = 0.0 - fVar19 * fVar11;
            fVar14 = 0.0 - fVar19 * fVar22;
            fVar14 = fVar16 * fVar16 + fVar14 * fVar14;
            bVar6 = false;
                    /* catch() { ... } // from try @ 005acf84 with catch @ 005ad05c */
            if (!NAN(fVar13) && !NAN(fVar14)) {
              bVar6 = fVar13 < fVar14;
            }
          }
          else {
            bVar6 = local_e4 < fVar19;
          }
          bVar4 = 1;
          if ((local_e4 < fVar19) && (bVar6)) {
            uVar8 = IsCollisionNormalValidForPolygonLineSegment
                              ((Vector2 *)&local_f8,param_5,(int)uVar8);
            if ((uVar8 & 1) == 0) {
              bVar4 = 1;
            }
            else {
              bVar5 = 0;
              bVar4 = 1;
              fVar12 = fVar17;
              fVar11 = (float)local_f8;
              fVar20 = (float)local_f8;
              fVar22 = fVar17;
              fVar21 = fVar17;
              fVar19 = fVar18;
            }
          }
        }
      }
      lVar10 = lVar10 + 8;
      uVar8 = uVar1;
    } while ((long)uVar1 < (long)((long)*(int *)param_5 + (ulong)(byte)param_5[0x21] + -1));
    if (!(bool)(bVar5 | bVar4 ^ 1)) {
      if (param_9 != (Vector2 *)0x0) {
        local_d0 = fVar11;
        fStack_cc = fVar12;
        Vector2::Rotate((Vector2 *)&local_d0,param_7);
        *(ulong *)param_9 = CONCAT44(fStack_cc,local_d0);
      }
                    /* try { // try from 005ad0fc to 006ad133 has its CatchHandler @ 005ad0fc
                       catch() { ... } // from try @ 005ad0fc with catch @ 005ad0fc
                       catch() { ... } // from try @ 005ad13c with catch @ 005ad0fc */
      if (param_10 != (float *)0x0) {
        *param_10 = fVar19 * param_8;
      }
      uVar9 = 1;
      goto LAB_005ad114;
    }
  }
  uVar9 = 0;
LAB_005ad114:
  if (*(long *)(lVar3 + 0x28) == local_a8) {
                    /* try { // try from 005ad134 to 006ad13b has its CatchHandler @ 005ad1e8 */
                    /* try { // try from 005ad13c to 006ad257 has its CatchHandler @ 005ad0fc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


