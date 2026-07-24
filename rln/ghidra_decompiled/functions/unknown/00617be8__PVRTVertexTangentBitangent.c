/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00617be8
 * Function: PVRTVertexTangentBitangent
 * Signature: undefined __cdecl PVRTVertexTangentBitangent(PVRTVECTOR3f * param_1, PVRTVECTOR3f * param_2, PVRTVECTOR3f * param_3, float * param_4, float * param_5, float * param_6, float * param_7, float * param_8, float * param_9)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTVertexTangentBitangent(PVRTVECTOR3f*, PVRTVECTOR3f*, PVRTVECTOR3f const*, float const*, float
   const*, float const*, float const*, float const*, float const*) */

void PVRTVertexTangentBitangent
               (PVRTVECTOR3f *param_1,PVRTVECTOR3f *param_2,PVRTVECTOR3f *param_3,float *param_4,
               float *param_5,float *param_6,float *param_7,float *param_8,float *param_9)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00616d3c with catch @ 00617c2c */
  fVar2 = (float)PVRTMatrixVec3DotProductF(param_3,param_3);
  if (fVar2 == 0.0) {
LAB_00617c48:
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)param_2 = 0;
    *(undefined4 *)(param_2 + 8) = 0;
                    /* try { // try from 00617c5c to 00717dd3 has its CatchHandler @ 00616bd0 */
  }
  else {
                    /* catch() { ... } // from try @ 00616ce4 with catch @ 00617c6c */
                    /* catch() { ... } // from try @ 00616c50 with catch @ 00617c70 */
    fVar7 = *param_7;
    fVar8 = *param_9;
    fVar5 = (float)*(undefined8 *)param_4;
    fVar2 = (float)*(undefined8 *)param_5 - fVar5;
    fVar6 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
    fVar4 = (float)((ulong)*(undefined8 *)param_5 >> 0x20) - fVar6;
                    /* catch() { ... } // from try @ 00616c18 with catch @ 00617c88 */
    fVar3 = param_5[2] - param_4[2];
    if (*param_8 == fVar7) {
      if (fVar8 == fVar7) goto LAB_00617c48;
      local_78 = CONCAT44(fVar4,fVar2);
      fVar5 = param_8[1] - param_7[1];
      local_70 = fVar3;
joined_r0x00617d48:
      if (fVar5 < 0.0) {
        local_70 = -local_70;
        local_78 = CONCAT44(-fVar4,-fVar2);
      }
    }
    else {
      fVar5 = (float)*(undefined8 *)param_6 - fVar5;
      fVar6 = (float)((ulong)*(undefined8 *)param_6 >> 0x20) - fVar6;
      local_78 = CONCAT44(fVar6,fVar5);
      local_70 = param_6[2] - param_4[2];
      if (fVar8 != fVar7) {
        fVar7 = -(*param_8 - fVar7) / (fVar8 - fVar7);
        fVar2 = fVar2 + fVar5 * fVar7;
        fVar4 = fVar4 + fVar6 * fVar7;
        local_78 = CONCAT44(fVar4,fVar2);
                    /* catch() { ... } // from try @ 00616e98 with catch @ 00617d34
                       catch() { ... } // from try @ 00616edc with catch @ 00617d34 */
        fVar5 = (param_8[1] - param_7[1]) + fVar7 * (param_9[1] - param_7[1]);
        local_70 = fVar3 + local_70 * fVar7;
        goto joined_r0x00617d48;
      }
      if (param_9[1] - param_7[1] < 0.0) {
        local_78 = CONCAT44(-fVar6,-fVar5);
        local_70 = -local_70;
                    /* catch() { ... } // from try @ 00616c04 with catch @ 00617cf8 */
                    /* catch() { ... } // from try @ 00617420 with catch @ 00617cfc
                       catch() { ... } // from try @ 00617464 with catch @ 00617cfc */
      }
    }
    PVRTMatrixVec3NormalizeF((PVRTVECTOR3f *)&local_78,(PVRTVECTOR3f *)&local_78);
    PVRTMatrixVec3CrossProductF(param_1,param_3,(PVRTVECTOR3f *)&local_78);
    PVRTMatrixVec3CrossProductF(param_2,param_1,param_3);
                    /* catch() { ... } // from try @ 0061758c with catch @ 00617d9c
                       catch() { ... } // from try @ 00617630 with catch @ 00617d9c */
                    /* catch() { ... } // from try @ 00617004 with catch @ 00617da0
                       catch() { ... } // from try @ 006170a8 with catch @ 00617da0 */
                    /* catch() { ... } // from try @ 00616c44 with catch @ 00617db0
                       catch() { ... } // from try @ 00616c5c with catch @ 00617db0
                       catch() { ... } // from try @ 00616dfc with catch @ 00617db0
                       catch() { ... } // from try @ 00616e10 with catch @ 00617db0
                       catch() { ... } // from try @ 00616f84 with catch @ 00617db0
                       catch() { ... } // from try @ 00616f98 with catch @ 00617db0
                       catch() { ... } // from try @ 00617130 with catch @ 00617db0
                       catch() { ... } // from try @ 00617230 with catch @ 00617db0
                       catch() { ... } // from try @ 00617244 with catch @ 00617db0
                       catch() { ... } // from try @ 00617384 with catch @ 00617db0
                       catch() { ... } // from try @ 00617398 with catch @ 00617db0
                       catch() { ... } // from try @ 0061750c with catch @ 00617db0
                       catch() { ... } // from try @ 00617520 with catch @ 00617db0
                       catch() { ... } // from try @ 006176bc with catch @ 00617db0
                       catch() { ... } // from try @ 00617718 with catch @ 00617db0 */
    if ((*param_9 - *param_7) * (param_8[1] - param_7[1]) <
        (param_9[1] - param_7[1]) * (*param_8 - *param_7)) {
      *(ulong *)param_1 =
           CONCAT44(-(float)((ulong)*(undefined8 *)param_1 >> 0x20),-(float)*(undefined8 *)param_1);
      *(float *)(param_1 + 8) = -*(float *)(param_1 + 8);
    }
                    /* try { // try from 00617dd4 to 00717dd7 has its CatchHandler @ 00617de0 */
    PVRTMatrixVec3NormalizeF(param_1,param_1);
                    /* try { // try from 00617dd8 to 00717de3 has its CatchHandler @ 00616bd0 */
                    /* catch() { ... } // from try @ 00617930 with catch @ 00617de0
                       catch() { ... } // from try @ 00617dd4 with catch @ 00617de0 */
    PVRTMatrixVec3NormalizeF(param_2,param_2);
  }
                    /* catch() { ... } // from try @ 00617ec8 with catch @ 00617de4 */
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


