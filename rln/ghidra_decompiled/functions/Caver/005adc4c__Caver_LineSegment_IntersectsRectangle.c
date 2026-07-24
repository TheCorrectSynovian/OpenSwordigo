/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005adc4c
 * Function: Caver::LineSegment::IntersectsRectangle
 * Signature: undefined __thiscall IntersectsRectangle(LineSegment * this, Rectangle * param_1, float * param_2, float * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::LineSegment::IntersectsRectangle(Caver::Rectangle const&, float*, float*) const */

undefined8 __thiscall
Caver::LineSegment::IntersectsRectangle
          (LineSegment *this,Rectangle *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)param_1;
  fVar6 = *(float *)(this + 8) - fVar1;
                    /* try { // try from 005adc70 to 006adc9b has its CatchHandler @ 005adc70
                       catch(type#1 @ 00000000) { ... } // from try @ 005adc70 with catch @ 005adc70
                       catch(type#1 @ 00000000) { ... } // from try @ 005adca8 with catch @ 005adc70
                       catch(type#1 @ 00000000) { ... } // from try @ 005add68 with catch @ 005adc70
                        */
  if (_LAB_00688900 <= ABS(fVar6)) {
                    /* try { // try from 005adc9c to 006adca7 has its CatchHandler @ 005add1c */
    fVar3 = (fVar2 - fVar1) / fVar6;
                    /* try { // try from 005adca8 to 006add3f has its CatchHandler @ 005adc70 */
    fVar6 = ((fVar2 + *(float *)(param_1 + 8)) - fVar1) / fVar6;
    fVar1 = fVar3;
    if (fVar3 <= fVar6) {
      fVar1 = fVar6;
      fVar6 = fVar3;
    }
    fVar2 = 1.0;
    if (1.0 < fVar6) {
      return 0;
    }
    if (fVar1 < 0.0) {
      return 0;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    if (fVar1 < 1.0) {
      fVar2 = fVar1;
    }
  }
  else {
    if (fVar1 < fVar2) {
      return 0;
    }
    if (fVar2 + *(float *)(param_1 + 8) < fVar1) {
      return 0;
    }
    fVar6 = 0.0;
    fVar2 = 1.0;
  }
  fVar3 = *(float *)(this + 4);
  fVar4 = *(float *)(param_1 + 4);
  fVar1 = *(float *)(this + 0xc) - fVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005adc9c with catch @ 005add1c
                        */
  if (ABS(fVar1) < _LAB_00688900) {
    if ((fVar3 < fVar4) || (fVar1 = fVar6, fVar4 + *(float *)(param_1 + 0xc) < fVar3)) {
      return 0;
    }
  }
  else {
                    /* try { // try from 005add40 to 006add67 has its CatchHandler @ 005add70 */
    fVar5 = (fVar4 - fVar3) / fVar1;
    fVar1 = ((fVar4 + *(float *)(param_1 + 0xc)) - fVar3) / fVar1;
    fVar3 = fVar5;
    if (fVar5 <= fVar1) {
      fVar3 = fVar1;
      fVar1 = fVar5;
    }
    if (fVar2 < fVar1) {
                    /* try { // try from 005add68 to 006add73 has its CatchHandler @ 005adc70 */
      return 0;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005add40 with catch @ 005add70
                        */
    if (fVar3 < fVar6) {
      return 0;
    }
    if (fVar1 <= fVar6) {
      fVar1 = fVar6;
    }
    if (fVar3 < fVar2) {
      fVar2 = fVar3;
    }
  }
  if (param_2 != (float *)0x0) {
    *param_2 = fVar1;
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar2;
  }
  return 1;
}


