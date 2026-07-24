/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006138bc
 * Function: PVRTMatrixQuaternionMultiplyF
 * Signature: undefined __cdecl PVRTMatrixQuaternionMultiplyF(PVRTQUATERNIONf * param_1, PVRTQUATERNIONf * param_2, PVRTQUATERNIONf * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTMatrixQuaternionMultiplyF(PVRTQUATERNIONf&, PVRTQUATERNIONf const&, PVRTQUATERNIONf const&)
    */

void PVRTMatrixQuaternionMultiplyF
               (PVRTQUATERNIONf *param_1,PVRTQUATERNIONf *param_2,PVRTQUATERNIONf *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 4);
  fVar5 = *(float *)param_3;
  fVar6 = *(float *)(param_3 + 4);
                    /* try { // try from 006138d4 to 007138db has its CatchHandler @ 006141e0 */
  fVar7 = (float)*(undefined8 *)(param_2 + 8);
  fVar8 = (float)*(undefined8 *)(param_3 + 8);
  fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) *
          (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20) -
          (fVar1 * fVar5 + fVar3 * fVar6 + fVar7 * fVar8);
  *(float *)(param_1 + 0xc) = fVar9;
                    /* try { // try from 00613908 to 0071390f has its CatchHandler @ 006141dc */
  fVar10 = *(float *)(param_2 + 0xc);
  fVar11 = *(float *)(param_3 + 0xc);
                    /* try { // try from 00613910 to 00713923 has its CatchHandler @ 006141d4 */
                    /* try { // try from 00613924 to 0071392f has its CatchHandler @ 006141cc */
                    /* try { // try from 00613930 to 00713943 has its CatchHandler @ 00614174 */
  fVar2 = (fVar3 * fVar8 - fVar6 * fVar7) + fVar5 * fVar10 + fVar1 * fVar11;
  fVar4 = (fVar5 * fVar7 - fVar1 * fVar8) + fVar6 * fVar10 + fVar3 * fVar11;
  *(float *)param_1 = fVar2;
  *(float *)(param_1 + 4) = fVar4;
                    /* try { // try from 0061395c to 0071398f has its CatchHandler @ 00614458 */
  fVar3 = (fVar1 * fVar6 - fVar5 * fVar3) + fVar10 * fVar8 + fVar11 * fVar7;
  fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar9 * fVar9 + fVar2 * fVar2;
  fVar1 = SQRT(fVar2);
  *(float *)(param_1 + 8) = fVar3;
  if (NAN(fVar1)) {
                    /* try { // try from 006139b4 to 007139c7 has its CatchHandler @ 00614004 */
    fVar1 = sqrtf(fVar2);
  }
  if (fVar1 != 0.0) {
                    /* try { // try from 00613990 to 0071399b has its CatchHandler @ 00614118 */
    fVar1 = 1.0 / fVar1;
                    /* try { // try from 0061399c to 007139a7 has its CatchHandler @ 006140bc */
    *(ulong *)(param_1 + 8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * fVar1,
                  (float)*(undefined8 *)(param_1 + 8) * fVar1);
    *(ulong *)param_1 =
         CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) * fVar1,
                  (float)*(undefined8 *)param_1 * fVar1);
  }
                    /* try { // try from 006139a8 to 007139b3 has its CatchHandler @ 00614060 */
  return;
}


