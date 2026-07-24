/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00613484
 * Function: PVRTMatrixQuaternionNormalizeF
 * Signature: undefined __cdecl PVRTMatrixQuaternionNormalizeF(PVRTQUATERNIONf * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixQuaternionNormalizeF(PVRTQUATERNIONf&) */

void PVRTMatrixQuaternionNormalizeF(PVRTQUATERNIONf *param_1)

{
  float fVar1;
  float __x;
  
                    /* try { // try from 00613484 to 0071348b has its CatchHandler @ 00614454 */
                    /* try { // try from 0061348c to 0071349f has its CatchHandler @ 006142f4 */
                    /* try { // try from 006134a0 to 007134b3 has its CatchHandler @ 006142bc */
  __x = *(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc) +
        *(float *)param_1 * *(float *)param_1 + *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
        *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
  fVar1 = SQRT(__x);
  if (NAN(fVar1)) {
                    /* try { // try from 006134f0 to 00713503 has its CatchHandler @ 006141ec */
    fVar1 = sqrtf(__x);
  }
                    /* try { // try from 006134c4 to 007134cb has its CatchHandler @ 00614444 */
  if (fVar1 != 0.0) {
                    /* try { // try from 006134d4 to 007134db has its CatchHandler @ 006142b8 */
    fVar1 = 1.0 / fVar1;
                    /* try { // try from 006134dc to 007134ef has its CatchHandler @ 00614248 */
    *(ulong *)(param_1 + 8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * fVar1,
                  (float)*(undefined8 *)(param_1 + 8) * fVar1);
    *(ulong *)param_1 =
         CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar1,
                  (float)*(undefined8 *)param_1 * fVar1);
  }
  return;
}


