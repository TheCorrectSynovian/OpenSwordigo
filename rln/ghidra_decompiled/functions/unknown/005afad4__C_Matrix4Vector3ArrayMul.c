/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005afad4
 * Function: C_Matrix4Vector3ArrayMul
 * Signature: undefined __cdecl C_Matrix4Vector3ArrayMul(int param_1, float * param_2, int param_3, float * param_4, int param_5, float * param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* C_Matrix4Vector3ArrayMul(int, float const*, int, float const*, int, float*) */

void C_Matrix4Vector3ArrayMul
               (int param_1,float *param_2,int param_3,float *param_4,int param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (0 < param_1) {
    uVar3 = *(undefined8 *)param_2;
    fVar4 = param_2[2];
    uVar5 = *(undefined8 *)(param_2 + 4);
    fVar6 = param_2[6];
    uVar7 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 005afaf0 to 006afaf3 has its CatchHandler @ 005afcec */
    fVar8 = param_2[10];
                    /* try { // try from 005afaf4 to 006afb1f has its CatchHandler @ 005af808 */
    fVar9 = param_2[0xe];
    uVar10 = *(undefined8 *)(param_2 + 0xc);
    pfVar1 = param_6 + 2;
    pfVar2 = param_4 + 2;
    do {
      fVar11 = pfVar2[-2];
      fVar12 = pfVar2[-1];
      fVar13 = *pfVar2;
      param_1 = param_1 + -1;
      pfVar2 = (float *)((long)pfVar2 + (long)param_3);
                    /* try { // try from 005afb20 to 006afb2f has its CatchHandler @ 005afd40 */
                    /* try { // try from 005afb30 to 006afc13 has its CatchHandler @ 005af808 */
      *(ulong *)(pfVar1 + -2) =
           CONCAT44((float)((ulong)uVar10 >> 0x20) +
                    (float)((ulong)uVar3 >> 0x20) * fVar11 + (float)((ulong)uVar5 >> 0x20) * fVar12
                    + (float)((ulong)uVar7 >> 0x20) * fVar13,
                    (float)uVar10 +
                    (float)uVar3 * fVar11 + (float)uVar5 * fVar12 + (float)uVar7 * fVar13);
      *pfVar1 = fVar9 + fVar4 * fVar11 + fVar6 * fVar12 + fVar8 * fVar13;
      pfVar1 = (float *)((long)pfVar1 + (long)param_5);
    } while (param_1 != 0);
  }
  return;
}


