/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005affe0
 * Function: Caver::OrientedRect::IntersectsPolygonOnAxis
 * Signature: undefined __thiscall IntersectsPolygonOnAxis(OrientedRect * this, Polygon * param_1, Vector2 * param_2, float * param_3, float * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OrientedRect::IntersectsPolygonOnAxis(Caver::Polygon const&, Caver::Vector2 const&,
   float*, float*) const */

void __thiscall
Caver::OrientedRect::IntersectsPolygonOnAxis
          (OrientedRect *this,Polygon *param_1,Vector2 *param_2,float *param_3,float *param_4)

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
  fVar3 = *(float *)param_2;
  fVar4 = *(float *)(param_2 + 4);
  fVar5 = *(float *)this * fVar3 + *(float *)(this + 4) * fVar4;
  fVar4 = *(float *)(this + 0x18) *
          ABS(fVar3 * *(float *)(this + 8) + fVar4 * *(float *)(this + 0xc)) +
          *(float *)(this + 0x1c) *
          ABS(fVar3 * *(float *)(this + 0x10) + fVar4 * *(float *)(this + 0x14));
  fVar3 = fVar5 + fVar4;
  Polygon::SpanOnAxis(param_1,param_2,&local_4c,&local_50);
                    /* try { // try from 005b0084 to 006b00bf has its CatchHandler @ 005b0084
                       catch() { ... } // from try @ 005b0084 with catch @ 005b0084
                       catch() { ... } // from try @ 005b012c with catch @ 005b0084 */
  if ((fVar3 + DAT_006837a4 < local_4c) || (fVar5 = fVar5 - fVar4, local_50 < fVar5 + DAT_00683734))
  {
    uVar2 = 0;
  }
  else {
    if (param_3 != (float *)0x0) {
      *param_3 = local_50 - fVar5;
    }
                    /* try { // try from 005b00c0 to 006b012b has its CatchHandler @ 005b0208 */
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


