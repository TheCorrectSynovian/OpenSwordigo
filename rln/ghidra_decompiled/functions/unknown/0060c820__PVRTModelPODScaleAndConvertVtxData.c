/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060c820
 * Function: PVRTModelPODScaleAndConvertVtxData
 * Signature: undefined __cdecl PVRTModelPODScaleAndConvertVtxData(SPODMesh * param_1, EPVRTDataType param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODScaleAndConvertVtxData(SPODMesh&, EPVRTDataType) */

void PVRTModelPODScaleAndConvertVtxData(uint *param_1,int param_2)

{
  PVRTMATRIXf *pPVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_168;
  float local_160;
  undefined4 local_15c;
  undefined1 local_158 [8];
  float local_150;
  PVRTMATRIXf aPStack_148 [64];
  PVRTMATRIXf aPStack_108 [64];
  PVRTBOUNDINGBOX_TAG local_c8 [8];
  float local_c0;
  undefined8 local_74;
  float local_6c;
  long local_68;
  
                    /* try { // try from 0060c840 to 0070c847 has its CatchHandler @ 0060cac4 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pPVar1 = (PVRTMATRIXf *)(param_1 + 0x45);
  PVRTMatrixIdentityF(pPVar1);
  if (*param_1 == 0) {
LAB_0060ca48:
    uVar3 = 0;
  }
  else {
    if (param_1[0xe] == 1) {
      if (param_2 != 1) goto LAB_0060c89c;
    }
    else {
      uVar3 = 1;
      if ((param_2 == 1) || (*(long *)(param_1 + 0x3a) != 0)) goto LAB_0060ca4c;
LAB_0060c89c:
                    /* try { // try from 0060c8a0 to 0070c8b7 has its CatchHandler @ 0060cbb8 */
      local_15c = 0x3f800000;
      PVRTBoundingBoxComputeInterleaved
                (local_c8,*(uchar **)(param_1 + 0x12),*param_1,0,param_1[0x10]);
      uVar4 = param_2 - 2;
      if (uVar4 < 0xd) {
        uVar5 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
                    /* try { // try from 0060c8d8 to 0070c8e3 has its CatchHandler @ 0060ca80 */
        fVar11 = *(float *)(&DAT_0069b770 + uVar5);
        fVar8 = *(float *)(&DAT_0069b730 + uVar5) - fVar11;
        fVar14 = fVar8 / (local_6c - local_c0);
        fVar12 = local_c8._0_4_;
        fVar13 = local_c8._4_4_;
        fVar9 = fVar8 / ((float)local_74 - fVar12);
        fVar8 = fVar8 / ((float)((ulong)local_74 >> 0x20) - fVar13);
                    /* try { // try from 0060c908 to 0070c90b has its CatchHandler @ 0060cab4 */
        fVar10 = -fVar11;
        PVRTMatrixTranslationF(aPStack_108,fVar10,fVar10,fVar10);
                    /* try { // try from 0060c92c to 0070c937 has its CatchHandler @ 0060ca78 */
        PVRTMatrixScalingF(aPStack_148,1.0 / fVar9,1.0 / fVar8,1.0 / fVar14);
        PVRTMatrixMultiplyF(pPVar1,aPStack_108,aPStack_148);
                    /* try { // try from 0060c954 to 0070c97b has its CatchHandler @ 0060cb9c */
        PVRTMatrixTranslationF(aPStack_108,fVar12,fVar13,local_c0);
        PVRTMatrixMultiplyF(pPVar1,pPVar1,aPStack_108);
        if (*param_1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar7 = 0;
          do {
                    /* try { // try from 0060c994 to 0070c9bb has its CatchHandler @ 0060cb98 */
            PVRTVertexRead(local_158,*(long *)(param_1 + 0x12) + (ulong)(param_1[0x10] * uVar7),
                           param_1[0xe],param_1[0xf]);
                    /* try { // try from 0060c9c0 to 0070c9d3 has its CatchHandler @ 0060cd00 */
            local_168 = CONCAT44(fVar11 + fVar8 * (local_158._4_4_ - fVar13),
                                 fVar11 + fVar9 * (local_158._0_4_ - fVar12));
                    /* try { // try from 0060c9d4 to 0070ca53 has its CatchHandler @ 0060c508 */
            local_160 = fVar11 + fVar14 * (local_150 - local_c0);
            uVar4 = param_1[0xe] - 1;
            if (uVar4 < 0xe) {
              iVar6 = *(int *)(&DAT_0069b7f0 + (long)(int)uVar4 * 4);
            }
            else {
              iVar6 = 0;
            }
            PVRTVertexWrite(*(long *)(param_1 + 0x12) + (ulong)(param_1[0x10] * uVar7),param_1[0xe],
                            iVar6 * param_1[0xf],&local_168);
            uVar4 = *param_1;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar4);
        }
        PVRTModelPODDataConvert(param_1 + 0xe,uVar4,param_2);
        goto LAB_0060ca48;
      }
    }
    uVar3 = 1;
  }
LAB_0060ca4c:
                    /* try { // try from 0060ca54 to 0070ca5b has its CatchHandler @ 0060ca60 */
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0060c8d8 with catch @ 0060ca80 */
    __stack_chk_fail(uVar3);
  }
                    /* try { // try from 0060ca5c to 0070caa3 has its CatchHandler @ 0060c508 */
                    /* catch() { ... } // from try @ 0060ca54 with catch @ 0060ca60 */
                    /* catch() { ... } // from try @ 0060c92c with catch @ 0060ca78 */
  return;
}


