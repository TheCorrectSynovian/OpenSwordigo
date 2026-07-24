/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ad4f8
 * Function: Caver::LineSegmentIntersectsPolygon
 * Signature: undefined __cdecl LineSegmentIntersectsPolygon(LineSegment * param_1, Polygon * param_2, Vector2 * param_3, float param_4, float param_5, float * param_6, Vector2 * param_7, Vector2 * param_8, int * param_9)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LineSegmentIntersectsPolygon(Caver::LineSegment const&, Caver::Polygon const&,
   Caver::Vector2 const&, float, float, float*, Caver::Vector2*, Caver::Vector2*, int*) */

void Caver::LineSegmentIntersectsPolygon
               (LineSegment *param_1,Polygon *param_2,Vector2 *param_3,float param_4,float param_5,
               float *param_6,Vector2 *param_7,Vector2 *param_8,int *param_9)

{
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  float fVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005ad53c to 006ad543 has its CatchHandler @ 005ad6c8 */
                    /* try { // try from 005ad544 to 006ad727 has its CatchHandler @ 005ad4dc */
  Vector2::InverseTransformed((Vector2 *)param_1,param_4,param_5);
  Vector2::InverseTransformed((Vector2 *)(param_1 + 8),param_4,param_5);
  local_98 = uStack_80;
  uStack_90 = local_88;
  if (0 < (int)(*(int *)param_2 + (uint)(byte)param_2[0x21] + -1)) {
    lVar10 = 0;
    bVar4 = false;
    uVar9 = 0xffffffff;
    uVar8 = 0;
    fVar5 = DAT_0068431c;
    do {
      uStack_a8 = ((undefined8 *)(*(long *)(param_2 + 8) + lVar10))[1];
      local_b0 = *(undefined8 *)(*(long *)(param_2 + 8) + lVar10);
      uVar2 = uVar8 + 1;
      uVar6 = LineSegment::IntersectsLineSegment
                        ((LineSegment *)&local_98,(LineSegment *)&local_b0,&local_9c,(float *)0x0);
      if (((uVar6 & 1) != 0) && (local_9c < fVar5)) {
        bVar4 = true;
        uVar9 = uVar8 & 0xffffffff;
        fVar5 = local_9c;
      }
      lVar10 = lVar10 + 8;
      uVar8 = uVar2;
    } while ((long)uVar2 < (long)((long)*(int *)param_2 + (ulong)(byte)param_2[0x21] + -1));
    if (bVar4) {
      if (param_6 != (float *)0x0) {
        *param_6 = fVar5;
      }
      if (param_7 != (Vector2 *)0x0) {
        fVar11 = (float)*(undefined8 *)param_1;
        fVar12 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
        *(ulong *)param_7 =
             CONCAT44(fVar12 + ((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) - fVar12) *
                               fVar5,fVar11 + ((float)*(undefined8 *)(param_1 + 8) - fVar11) * fVar5
                     );
      }
      if (param_8 != (Vector2 *)0x0) {
        pfVar1 = (float *)(*(long *)(param_2 + 8) + (long)(int)uVar9 * 8);
        local_b8 = pfVar1[3] - pfVar1[1];
        fStack_b4 = -(pfVar1[2] - *pfVar1);
        Vector2::Normalize((Vector2 *)&local_b8);
        local_b0 = CONCAT44(fStack_b4,local_b8);
        Vector2::Rotate((Vector2 *)&local_b0,param_4);
        *(undefined8 *)param_8 = local_b0;
      }
      if (param_9 != (int *)0x0) {
        *param_9 = (int)uVar9;
      }
      uVar7 = 1;
      goto LAB_005ad6a0;
    }
  }
  uVar7 = 0;
LAB_005ad6a0:
  if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* catch() { ... } // from try @ 005ad53c with catch @ 005ad6c8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


