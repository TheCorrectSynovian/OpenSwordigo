/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aca14
 * Function: Caver::RectangleIntersectsRectangle
 * Signature: undefined __cdecl RectangleIntersectsRectangle(Rectangle * param_1, Vector2 * param_2, float param_3, float param_4, Rectangle * param_5, Vector2 * param_6, float param_7, float param_8, Vector2 * param_9, float * param_10, Vector2 * param_11)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RectangleIntersectsRectangle(Caver::Rectangle const&, Caver::Vector2 const&, float, float,
   Caver::Rectangle const&, Caver::Vector2 const&, float, float, Caver::Vector2*, float*,
   Caver::Vector2 const&) */

void Caver::RectangleIntersectsRectangle
               (Rectangle *param_1,Vector2 *param_2,float param_3,float param_4,Rectangle *param_5,
               Vector2 *param_6,float param_7,float param_8,Vector2 *param_9,float *param_10,
               Vector2 *param_11)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  Vector2 *pVVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_108;
  float local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  OrientedRect aOStack_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  fVar14 = 1.0;
                    /* try { // try from 005aca80 to 006aca87 has its CatchHandler @ 005acc10 */
  local_100 = 0;
                    /* try { // try from 005aca88 to 006acaf3 has its CatchHandler @ 005acc1c */
  fVar16 = 0.0;
  OrientedRect::OBFromTransformedRectangle
            (param_1,param_2,param_3,param_4,(Vector2 *)&local_100,0.0,1.0);
  local_c0 = 0;
  OrientedRect::OBFromTransformedRectangle
            (param_5,param_6,param_7,param_8,(Vector2 *)&local_c0,0.0,1.0);
  lVar6 = 0;
  fVar7 = 1.0;
  lVar1 = 4;
  if (ABS(param_3 - param_7) <= DAT_00683734) {
    lVar1 = 2;
  }
  pVVar5 = (Vector2 *)&local_c0;
  uStack_b8 = uStack_d0;
  local_c0 = local_d8;
                    /* try { // try from 005acaf4 to 006acc7f has its CatchHandler @ 005ac900 */
  uStack_a8 = uStack_f0;
  uStack_b0 = local_f8;
  fVar15 = DAT_0068431c;
  do {
    uVar3 = OrientedRect::IntersectsOrientedRectOnAxis
                      (aOStack_e0,(OrientedRect *)&local_100,pVVar5,&local_104,&local_108);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      goto LAB_005acc50;
    }
    fVar8 = *(float *)(pVVar5 + 4);
    if ((fVar16 <= 0.5) || (fVar8 <= 0.5)) {
      fVar9 = *(float *)pVVar5;
      fVar12 = *(float *)(param_11 + 4) - local_104 * fVar8;
      fVar11 = *(float *)(param_11 + 4) - fVar16 * fVar15;
      fVar13 = *(float *)param_11 - fVar14 * fVar15;
      fVar10 = *(float *)param_11 - local_104 * fVar9;
      if (fVar10 * fVar10 + fVar12 * fVar12 < fVar13 * fVar13 + fVar11 * fVar11) goto LAB_005acb94;
    }
    else if (local_104 < fVar15) {
      fVar9 = *(float *)pVVar5;
LAB_005acb94:
      fVar14 = fVar9;
      fVar9 = fVar14;
      fVar15 = local_104;
      fVar7 = fVar14;
      fVar16 = fVar8;
    }
    else {
      fVar9 = *(float *)pVVar5;
    }
    if ((-0.5 <= fVar8) || (fVar16 <= 0.5)) {
      fVar11 = *(float *)param_11 - fVar9 * local_108;
      fVar12 = *(float *)param_11 - fVar15 * fVar7;
      fVar10 = *(float *)(param_11 + 4) - fVar8 * local_108;
      fVar13 = *(float *)(param_11 + 4) - fVar15 * fVar16;
                    /* catch() { ... } // from try @ 005aca80 with catch @ 005acc10 */
      if (fVar11 * fVar11 + fVar10 * fVar10 < fVar12 * fVar12 + fVar13 * fVar13) goto LAB_005acc14;
    }
    else if (-local_108 < fVar15) {
LAB_005acc14:
      fVar14 = -fVar9;
      fVar16 = -fVar8;
                    /* catch() { ... } // from try @ 005aca88 with catch @ 005acc1c */
      fVar15 = -local_108;
      fVar7 = fVar14;
    }
    lVar6 = lVar6 + 1;
    pVVar5 = pVVar5 + 8;
  } while (lVar6 < lVar1);
  if (param_9 != (Vector2 *)0x0) {
    *(float *)param_9 = fVar14;
    *(float *)(param_9 + 4) = fVar16;
  }
  if (param_10 != (float *)0x0) {
    *param_10 = fVar15;
  }
  uVar4 = 1;
LAB_005acc50:
  if (*(long *)(lVar2 + 0x28) == local_98) {
                    /* try { // try from 005acc80 to 006acca7 has its CatchHandler @ 005accc4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


