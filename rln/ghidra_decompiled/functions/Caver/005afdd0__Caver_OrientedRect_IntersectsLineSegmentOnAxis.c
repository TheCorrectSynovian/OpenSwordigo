/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005afdd0
 * Function: Caver::OrientedRect::IntersectsLineSegmentOnAxis
 * Signature: undefined __thiscall IntersectsLineSegmentOnAxis(OrientedRect * this, LineSegment * param_1, Vector2 * param_2, float * param_3, float * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OrientedRect::IntersectsLineSegmentOnAxis(Caver::LineSegment const&, Caver::Vector2
   const&, float*, float*) const */

void __thiscall
Caver::OrientedRect::IntersectsLineSegmentOnAxis
          (OrientedRect *this,LineSegment *param_1,Vector2 *param_2,float *param_3,float *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_50;
  float local_4c;
  long local_48;
  
                    /* try { // try from 005afde0 to 006afe1b has its CatchHandler @ 005af808 */
                    /* catch() { ... } // from try @ 005af85c with catch @ 005afde4 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 005af968 with catch @ 005afdf8 */
  fVar3 = *(float *)param_2;
  fVar4 = *(float *)(param_2 + 4);
                    /* try { // try from 005afe1c to 006afe93 has its CatchHandler @ 005afe9c */
  fVar5 = *(float *)this * fVar3 + *(float *)(this + 4) * fVar4;
                    /* catch() { ... } // from try @ 005af88c with catch @ 005afe48 */
  fVar4 = *(float *)(this + 0x18) *
          ABS(fVar3 * *(float *)(this + 8) + fVar4 * *(float *)(this + 0xc)) +
          *(float *)(this + 0x1c) *
          ABS(fVar3 * *(float *)(this + 0x10) + fVar4 * *(float *)(this + 0x14));
  fVar3 = fVar5 + fVar4;
  LineSegment::SpanOnAxis(param_1,param_2,&local_4c,&local_50);
                    /* try { // try from 005afe94 to 006afe9f has its CatchHandler @ 005af808 */
  if ((fVar3 + DAT_006837a4 < local_4c) || (fVar5 = fVar5 - fVar4, local_50 < fVar5 + DAT_00683734))
  {
                    /* catch() { ... } // from try @ 005afd14 with catch @ 005afe9c
                       catch() { ... } // from try @ 005afe1c with catch @ 005afe9c */
    uVar2 = 0;
                    /* try { // try from 005afea0 to 006afed7 has its CatchHandler @ 005afea0
                       catch() { ... } // from try @ 005afea0 with catch @ 005afea0
                       catch() { ... } // from try @ 005aff44 with catch @ 005afea0 */
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
                    /* try { // try from 005afed8 to 006aff43 has its CatchHandler @ 005affc8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


