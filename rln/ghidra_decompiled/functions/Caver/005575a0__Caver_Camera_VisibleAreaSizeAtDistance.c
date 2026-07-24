/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005575a0
 * Function: Caver::Camera::VisibleAreaSizeAtDistance
 * Signature: undefined __cdecl VisibleAreaSizeAtDistance(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Camera::VisibleAreaSizeAtDistance(float) */

void Caver::Camera::VisibleAreaSizeAtDistance(float param_1)

{
  long in_x0;
  float *in_x8;
  float fVar1;
  
                    /* try { // try from 005575b0 to 006575d7 has its CatchHandler @ 00557700 */
  fVar1 = tanf(*(float *)(in_x0 + 0xf4));
  *in_x8 = *(float *)(in_x0 + 0xf0) * fVar1 * param_1;
  in_x8[1] = fVar1 * param_1;
                    /* try { // try from 005575d8 to 00657747 has its CatchHandler @ 00557478 */
  return;
}


