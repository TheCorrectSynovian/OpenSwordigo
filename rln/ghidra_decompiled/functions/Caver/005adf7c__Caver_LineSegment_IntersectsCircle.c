/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005adf7c
 * Function: Caver::LineSegment::IntersectsCircle
 * Signature: undefined __thiscall IntersectsCircle(LineSegment * this, Circle * param_1, Vector2 * param_2, Vector2 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LineSegment::IntersectsCircle(Caver::Circle const&, Caver::Vector2*, Caver::Vector2*)
   const */

undefined8 __thiscall
Caver::LineSegment::IntersectsCircle
          (LineSegment *this,Circle *param_1,Vector2 *param_2,Vector2 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = DAT_00683488;
  fVar1 = (float)*(undefined8 *)this;
  fVar3 = (float)*(undefined8 *)(this + 8) - fVar1;
  fVar2 = (float)((ulong)*(undefined8 *)this >> 0x20);
  fVar5 = (float)((ulong)*(undefined8 *)(this + 8) >> 0x20) - fVar2;
  fVar1 = fVar1 - (float)*(undefined8 *)param_1;
  fVar2 = fVar2 - (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  fVar6 = fVar3 * fVar3 + fVar5 * fVar5;
  fVar3 = (fVar3 + fVar3) * fVar1 + (fVar5 + fVar5) * fVar2;
                    /* try { // try from 005adfe8 to 006adffb has its CatchHandler @ 005ae0d0 */
  fVar1 = fVar3 * fVar3 +
          fVar6 * -4.0 *
          ((fVar1 * fVar1 + fVar2 * fVar2) - *(float *)(param_1 + 8) * *(float *)(param_1 + 8));
  if (DAT_00683488 <= fVar1) {
    fVar2 = SQRT(fVar1);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(fVar1);
    }
    fVar2 = (-fVar3 - fVar2) / (fVar6 + fVar6);
    if (fVar2 <= DAT_00697218) {
      fVar5 = SQRT(fVar1);
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar1);
      }
      fVar1 = (fVar5 - fVar3) / (fVar6 + fVar6);
                    /* try { // try from 005ae050 to 006ae063 has its CatchHandler @ 005ae0c8 */
      if (fVar4 <= fVar1) {
        if (param_2 != (Vector2 *)0x0) {
          fVar4 = (float)*(undefined8 *)this;
                    /* try { // try from 005ae088 to 006ae09b has its CatchHandler @ 005ae0c4 */
          fVar3 = (float)((ulong)*(undefined8 *)this >> 0x20);
          *(ulong *)param_2 =
               CONCAT44(fVar3 + ((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) - fVar3) * fVar2,
                        fVar4 + ((float)*(undefined8 *)(this + 8) - fVar4) * fVar2);
        }
        if (param_3 != (Vector2 *)0x0) {
                    /* try { // try from 005ae09c to 006ae1c3 has its CatchHandler @ 005ade70 */
          if (1.0 < fVar1) {
            fVar1 = 1.0;
          }
          fVar4 = (float)*(undefined8 *)this;
          fVar2 = (float)((ulong)*(undefined8 *)this >> 0x20);
          *(ulong *)param_3 =
               CONCAT44(fVar2 + ((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) - fVar2) * fVar1,
                        fVar4 + ((float)*(undefined8 *)(this + 8) - fVar4) * fVar1);
        }
        return 1;
      }
    }
  }
  return 0;
}


