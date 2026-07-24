/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ad6d8
 * Function: Caver::LineSegmentIntersectsRectangle
 * Signature: undefined __cdecl LineSegmentIntersectsRectangle(LineSegment * param_1, Rectangle * param_2, Vector2 * param_3, float param_4, float param_5, float * param_6, Vector2 * param_7)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LineSegmentIntersectsRectangle(Caver::LineSegment const&, Caver::Rectangle const&,
   Caver::Vector2 const&, float, float, float*, Caver::Vector2*) */

void Caver::LineSegmentIntersectsRectangle
               (LineSegment *param_1,Rectangle *param_2,Vector2 *param_3,float param_4,float param_5
               ,float *param_6,Vector2 *param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Vector2::InverseTransformed((Vector2 *)param_1,param_4,param_5);
                    /* try { // try from 005ad728 to 006ad763 has its CatchHandler @ 005ad728
                       catch() { ... } // from try @ 005ad728 with catch @ 005ad728
                       catch() { ... } // from try @ 005ad778 with catch @ 005ad728 */
  Vector2::InverseTransformed((Vector2 *)(param_1 + 8),param_4,param_5);
  local_78 = uStack_60;
  uStack_70 = local_68;
  uVar2 = LineSegment::IntersectsRectangle((LineSegment *)&local_78,param_2,&local_7c,(float *)0x0);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    if (param_6 != (float *)0x0) {
                    /* try { // try from 005ad764 to 006ad777 has its CatchHandler @ 005ad820 */
      *param_6 = local_7c;
    }
    if (param_7 != (Vector2 *)0x0) {
      fVar4 = (float)*(undefined8 *)param_1;
                    /* try { // try from 005ad778 to 006ad88f has its CatchHandler @ 005ad728 */
      fVar5 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
      *(ulong *)param_7 =
           CONCAT44(fVar5 + ((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) - fVar5) *
                            local_7c,
                    fVar4 + ((float)*(undefined8 *)(param_1 + 8) - fVar4) * local_7c);
    }
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


