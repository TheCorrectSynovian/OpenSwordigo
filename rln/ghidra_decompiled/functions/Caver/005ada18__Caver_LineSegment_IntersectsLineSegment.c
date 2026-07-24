/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ada18
 * Function: Caver::LineSegment::IntersectsLineSegment
 * Signature: undefined __thiscall IntersectsLineSegment(LineSegment * this, LineSegment * param_1, float * param_2, float * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::LineSegment::IntersectsLineSegment(Caver::LineSegment const&, float*, float*) const */

undefined8 __thiscall
Caver::LineSegment::IntersectsLineSegment
          (LineSegment *this,LineSegment *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* try { // try from 005ada28 to 006ada4f has its CatchHandler @ 005ada58 */
  fVar6 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 4);
  fVar3 = *(float *)(this + 8) - *(float *)this;
  fVar8 = *(float *)(param_1 + 8) - *(float *)param_1;
  fVar4 = *(float *)(this + 0xc) - *(float *)(this + 4);
  fVar2 = fVar6 * fVar3 - fVar8 * fVar4;
                    /* try { // try from 005ada50 to 006ada5b has its CatchHandler @ 005ad908 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005ada28 with catch @ 005ada58
                        */
                    /* try { // try from 005ada5c to 006ada93 has its CatchHandler @ 005ada5c
                       catch() { ... } // from try @ 005ada5c with catch @ 005ada5c
                       catch() { ... } // from try @ 005adaa4 with catch @ 005ada5c
                       catch() { ... } // from try @ 005adae4 with catch @ 005ada5c */
  if ((DAT_00689310 < fVar2) && ((double)fVar2 < _LAB_006972f8)) {
    return 0;
  }
  fVar5 = *(float *)(this + 4) - *(float *)(param_1 + 4);
  fVar7 = *(float *)this - *(float *)param_1;
  fVar6 = (fVar8 * fVar5 - fVar6 * fVar7) / fVar2;
                    /* try { // try from 005ada94 to 006adaa3 has its CatchHandler @ 005adc00 */
  uVar1 = 0;
                    /* try { // try from 005adaa4 to 006adacf has its CatchHandler @ 005ada5c */
  if ((_LAB_00688900 <= fVar6) && (fVar6 <= DAT_006972e0)) {
    fVar2 = (fVar3 * fVar5 - fVar7 * fVar4) / fVar2;
    uVar1 = 0;
    if ((_LAB_00688900 <= fVar2) && (fVar2 <= DAT_006972e0)) {
                    /* try { // try from 005adad0 to 006adae3 has its CatchHandler @ 005adbc8 */
      if (param_2 != (float *)0x0) {
        *param_2 = fVar6;
      }
      if (param_3 != (float *)0x0) {
        *param_3 = fVar2;
      }
      uVar1 = 1;
    }
  }
                    /* try { // try from 005adae4 to 006adc6f has its CatchHandler @ 005ada5c */
  return uVar1;
}


