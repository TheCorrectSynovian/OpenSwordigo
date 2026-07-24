/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005afa40
 * Function: C_Matrix4Vector3ArrayMul
 * Signature: undefined __cdecl C_Matrix4Vector3ArrayMul(int param_1, float * param_2, float param_3, int param_4, float * param_5, int param_6, float * param_7)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* C_Matrix4Vector3ArrayMul(int, float const*, float, int, float const*, int, float*) */

void C_Matrix4Vector3ArrayMul
               (int param_1,float *param_2,float param_3,int param_4,float *param_5,int param_6,
               float *param_7)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (0 < param_1) {
    fVar10 = param_2[0xe];
    uVar9 = *(undefined8 *)(param_2 + 0xc);
    uVar3 = *(undefined8 *)param_2;
    fVar4 = param_2[2];
    uVar5 = *(undefined8 *)(param_2 + 4);
    fVar6 = param_2[6];
    uVar7 = *(undefined8 *)(param_2 + 8);
                    /* try { // try from 005afa64 to 006afa73 has its CatchHandler @ 005afd94 */
    fVar8 = param_2[10];
    pfVar1 = param_7 + 2;
                    /* try { // try from 005afa74 to 006afaef has its CatchHandler @ 005af808 */
    pfVar2 = param_5 + 1;
    do {
      fVar11 = pfVar2[-1];
      fVar12 = *pfVar2;
      fVar13 = pfVar2[1];
      param_1 = param_1 + -1;
      pfVar2 = (float *)((long)pfVar2 + (long)param_4);
      *(ulong *)(pfVar1 + -2) =
           CONCAT44((float)((ulong)uVar9 >> 0x20) * param_3 +
                    (float)((ulong)uVar3 >> 0x20) * fVar11 + (float)((ulong)uVar5 >> 0x20) * fVar12
                    + (float)((ulong)uVar7 >> 0x20) * fVar13,
                    (float)uVar9 * param_3 +
                    (float)uVar3 * fVar11 + (float)uVar5 * fVar12 + (float)uVar7 * fVar13);
      *pfVar1 = fVar10 * param_3 + fVar4 * fVar11 + fVar6 * fVar12 + fVar8 * fVar13;
      pfVar1 = (float *)((long)pfVar1 + (long)param_6);
    } while (param_1 != 0);
  }
  return;
}


