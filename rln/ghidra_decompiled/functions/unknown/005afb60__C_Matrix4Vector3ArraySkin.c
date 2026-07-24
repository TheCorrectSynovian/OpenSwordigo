/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005afb60
 * Function: C_Matrix4Vector3ArraySkin
 * Signature: undefined __cdecl C_Matrix4Vector3ArraySkin(int param_1, float * param_2, float param_3, int param_4, int * param_5, int param_6, float * param_7, int param_8, float * param_9)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* C_Matrix4Vector3ArraySkin(int, float const*, float, int, int const*, int, float const*, int,
   float*) */

void C_Matrix4Vector3ArraySkin
               (int param_1,float *param_2,float param_3,int param_4,int *param_5,int param_6,
               float *param_7,int param_8,float *param_9)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0 < param_1) {
    pfVar3 = param_7 + 1;
    pfVar4 = param_9 + 2;
    do {
      iVar2 = *param_5;
      fVar5 = pfVar3[-1];
      fVar6 = *pfVar3;
      fVar7 = pfVar3[1];
      param_5 = (int *)((long)param_5 + (long)param_4);
      pfVar1 = param_2 + (long)iVar2 * 0x10;
      fVar9 = pfVar1[2];
      fVar11 = pfVar1[6];
      fVar10 = pfVar1[10];
      fVar8 = pfVar1[0xe];
      pfVar3 = (float *)((long)pfVar3 + (long)param_6);
      param_1 = param_1 + -1;
      *(ulong *)(pfVar4 + -2) =
           CONCAT44((float)((ulong)*(undefined8 *)pfVar1 >> 0x20) * fVar5 +
                    (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20) * fVar6 +
                    (float)((ulong)*(undefined8 *)(pfVar1 + 8) >> 0x20) * fVar7 +
                    param_3 * (float)((ulong)*(undefined8 *)(pfVar1 + 0xc) >> 0x20),
                    (float)*(undefined8 *)pfVar1 * fVar5 +
                    (float)*(undefined8 *)(pfVar1 + 4) * fVar6 +
                    (float)*(undefined8 *)(pfVar1 + 8) * fVar7 +
                    param_3 * (float)*(undefined8 *)(pfVar1 + 0xc));
      *pfVar4 = fVar5 * fVar9 + fVar6 * fVar11 + fVar7 * fVar10 + fVar8 * param_3;
      pfVar4 = (float *)((long)pfVar4 + (long)param_8);
    } while (param_1 != 0);
  }
  return;
}


