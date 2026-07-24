/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2a24
 * Function: Caver::Vector2::InverseTransformed
 * Signature: undefined __cdecl InverseTransformed(Vector2 * param_1, float param_2, float param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Vector2::InverseTransformed(Caver::Vector2 const&, float, float) const */

void Caver::Vector2::InverseTransformed(Vector2 *param_1,float param_2,float param_3)

{
  float fVar1;
  undefined8 *in_x1;
  float *in_x8;
  float fVar2;
  float fVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = DAT_00683488;
  fVar5 = (float)*(undefined8 *)param_1 - (float)*in_x1;
  fVar6 = (float)((ulong)*(undefined8 *)param_1 >> 0x20) - (float)((ulong)*in_x1 >> 0x20);
  uVar4 = CONCAT44(fVar6,fVar5);
  *(ulong *)in_x8 = uVar4;
  if (fVar1 < ABS(param_2)) {
    if (_LAB_00688900 <= ABS(param_2)) {
                    /* try { // try from 005b2a88 to 006b2aa7 has its CatchHandler @ 005b2a88
                       catch() { ... } // from try @ 005b2a88 with catch @ 005b2a88
                       catch() { ... } // from try @ 005b2ab0 with catch @ 005b2a88
                       catch() { ... } // from try @ 005b2af8 with catch @ 005b2a88 */
      fVar2 = sinf(-param_2);
      fVar3 = cosf(param_2);
                    /* try { // try from 005b2aa8 to 006b2aaf has its CatchHandler @ 005b2ae0 */
      uVar4 = (ulong)(uint)(fVar3 * fVar5 - fVar2 * fVar6);
                    /* try { // try from 005b2ab0 to 006b2aeb has its CatchHandler @ 005b2a88 */
      fVar6 = fVar2 * fVar5 + fVar3 * fVar6;
    }
    *in_x8 = (float)uVar4;
    in_x8[1] = fVar6;
  }
  if (fVar1 < ABS(param_3 + -1.0)) {
                    /* catch() { ... } // from try @ 005b2aa8 with catch @ 005b2ae0 */
    *in_x8 = (1.0 / param_3) * (float)uVar4;
    in_x8[1] = (1.0 / param_3) * fVar6;
  }
                    /* try { // try from 005b2aec to 006b2aef has its CatchHandler @ 005b2af0 */
                    /* catch() { ... } // from try @ 005b2aec with catch @ 005b2af0 */
                    /* try { // try from 005b2af4 to 006b2af7 has its CatchHandler @ 005b2b00 */
                    /* try { // try from 005b2af8 to 006b2b03 has its CatchHandler @ 005b2a88 */
                    /* catch() { ... } // from try @ 005b2af4 with catch @ 005b2b00 */
  return;
}


