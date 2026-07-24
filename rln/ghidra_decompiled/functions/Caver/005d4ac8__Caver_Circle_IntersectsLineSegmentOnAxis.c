/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d4ac8
 * Function: Caver::Circle::IntersectsLineSegmentOnAxis
 * Signature: undefined __thiscall IntersectsLineSegmentOnAxis(Circle * this, LineSegment * param_1, Vector2 * param_2, float * param_3, float * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Circle::IntersectsLineSegmentOnAxis(Caver::LineSegment const&, Caver::Vector2 const&,
   float*, float*) const */

void __thiscall
Caver::Circle::IntersectsLineSegmentOnAxis
          (Circle *this,LineSegment *param_1,Vector2 *param_2,float *param_3,float *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar4 = *(float *)(this + 8);
  fVar5 = (float)*(undefined8 *)this * (float)*(undefined8 *)param_2 +
          (float)((ulong)*(undefined8 *)this >> 0x20) *
          (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  fVar3 = fVar4 + fVar5;
  LineSegment::SpanOnAxis(param_1,param_2,&local_4c,&local_50);
  if ((fVar3 + DAT_006837a4 < local_4c) || (fVar5 = fVar5 - fVar4, local_50 < fVar5 + DAT_00683734))
  {
    uVar2 = 0;
  }
  else {
    if (param_3 != (float *)0x0) {
      *param_3 = local_50 - fVar5;
    }
    if (param_4 != (float *)0x0) {
      *param_4 = local_4c - fVar3;
    }
    uVar2 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


