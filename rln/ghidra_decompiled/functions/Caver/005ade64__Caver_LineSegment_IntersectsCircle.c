/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ade64
 * Function: Caver::LineSegment::IntersectsCircle
 * Signature: undefined __thiscall IntersectsCircle(LineSegment * this, Circle * param_1, float * param_2, float * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LineSegment::IntersectsCircle(Caver::Circle const&, float*, float*) const */

undefined8 __thiscall
Caver::LineSegment::IntersectsCircle
          (LineSegment *this,Circle *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = DAT_00683488;
                    /* try { // try from 005ade70 to 006adeab has its CatchHandler @ 005ade70
                       catch() { ... } // from try @ 005ade70 with catch @ 005ade70
                       catch() { ... } // from try @ 005adebc with catch @ 005ade70
                       catch() { ... } // from try @ 005adef8 with catch @ 005ade70
                       catch() { ... } // from try @ 005ae09c with catch @ 005ade70 */
  fVar2 = (float)*(undefined8 *)this;
  fVar4 = (float)*(undefined8 *)(this + 8) - fVar2;
  fVar3 = (float)((ulong)*(undefined8 *)this >> 0x20);
  fVar5 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20) - fVar3;
  fVar2 = fVar2 - (float)*(undefined8 *)param_1;
  fVar3 = fVar3 - (float)((ulong)*(undefined8 *)param_1 >> 0x20);
                    /* try { // try from 005adeac to 006adebb has its CatchHandler @ 005ae150 */
  fVar6 = fVar4 * fVar4 + fVar5 * fVar5;
                    /* try { // try from 005adebc to 006adee7 has its CatchHandler @ 005ade70 */
  fVar4 = (fVar4 + fVar4) * fVar2 + (fVar5 + fVar5) * fVar3;
  fVar2 = fVar4 * fVar4 +
          fVar6 * -4.0 *
          ((fVar2 * fVar2 + fVar3 * fVar3) - *(float *)(param_1 + 8) * *(float *)(param_1 + 8));
  if (DAT_00683488 <= fVar2) {
    fVar3 = SQRT(fVar2);
                    /* try { // try from 005adee8 to 006adef7 has its CatchHandler @ 005ae118 */
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar2);
    }
                    /* try { // try from 005adef8 to 006adf1b has its CatchHandler @ 005ade70 */
    fVar3 = (-fVar4 - fVar3) / (fVar6 + fVar6);
    if (fVar3 <= DAT_00697218) {
      fVar5 = SQRT(fVar2);
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar2);
      }
      fVar2 = (fVar5 - fVar4) / (fVar6 + fVar6);
      if (fVar1 <= fVar2) {
        if (param_2 != (float *)0x0) {
                    /* try { // try from 005adf5c to 006adf6f has its CatchHandler @ 005ae10c */
          *param_2 = fVar3;
        }
        if (param_3 != (float *)0x0) {
          if (1.0 < fVar2) {
            fVar2 = 1.0;
          }
          *param_3 = fVar2;
        }
        return 1;
      }
    }
  }
                    /* try { // try from 005adf44 to 006adf57 has its CatchHandler @ 005ae0cc */
  return 0;
}


