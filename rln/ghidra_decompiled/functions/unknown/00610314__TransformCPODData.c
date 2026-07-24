/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00610314
 * Function: TransformCPODData
 * Signature: undefined __cdecl TransformCPODData(CPODData * param_1, CPODData * param_2, int param_3, PVRTMATRIXf * param_4, float * param_5, float * param_6, int param_7, bool param_8)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* TransformCPODData(CPODData&, CPODData&, int, PVRTMATRIXf*, float*, float*, int, bool) */

void TransformCPODData(CPODData *param_1,CPODData *param_2,int param_3,PVRTMATRIXf *param_4,
                      float *param_5,float *param_6,int param_7,bool param_8)

{
  PVRTMATRIXf *pPVar1;
  float fVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar7;
  double dVar6;
  float fVar8;
  double __x;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  undefined8 local_80;
  ulong uStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_1 + 4) == 0) goto LAB_00610504;
  PVRTVertexRead(&local_90,
                 *(long *)(param_1 + 0x10) + (ulong)(uint)(*(int *)(param_1 + 8) * param_3),
                 *(undefined4 *)param_1);
  local_80 = 0;
  uStack_78 = 0;
  if (param_7 == 0) {
    fVar7 = (float)((ulong)*(undefined8 *)param_4 >> 0x20) * local_90 +
            (float)((ulong)*(undefined8 *)(param_4 + 0x10) >> 0x20) * fStack_8c +
            (float)((ulong)*(undefined8 *)(param_4 + 0x20) >> 0x20) * local_88 +
            (float)((ulong)*(undefined8 *)(param_4 + 0x30) >> 0x20) * local_84;
    local_80 = CONCAT44(fVar7,(float)*(undefined8 *)param_4 * local_90 +
                              (float)*(undefined8 *)(param_4 + 0x10) * fStack_8c +
                              (float)*(undefined8 *)(param_4 + 0x20) * local_88 +
                              (float)*(undefined8 *)(param_4 + 0x30) * local_84);
    fVar8 = (float)*(undefined8 *)(param_4 + 8) * local_90 +
            (float)*(undefined8 *)(param_4 + 0x18) * fStack_8c +
            (float)*(undefined8 *)(param_4 + 0x28) * local_88 +
            (float)*(undefined8 *)(param_4 + 0x38) * local_84;
    uStack_78 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 8) >> 0x20) * local_90 +
                         (float)((ulong)*(undefined8 *)(param_4 + 0x18) >> 0x20) * fStack_8c +
                         (float)((ulong)*(undefined8 *)(param_4 + 0x28) >> 0x20) * local_88 +
                         (float)((ulong)*(undefined8 *)(param_4 + 0x38) >> 0x20) * local_84,fVar8);
    uVar4 = (ulong)(uint)fVar8;
joined_r0x0061047c:
                    /* try { // try from 0061047c to 00710487 has its CatchHandler @ 006112cc */
    fVar8 = (float)uVar4;
  }
  else {
    if (0 < param_7) {
      fVar8 = *(float *)((ulong)&local_90 | 4);
      uVar5 = (ulong)(uint)param_7;
      local_80 = 0;
      uStack_78 = 0;
      do {
        uVar5 = uVar5 - 1;
        pPVar1 = param_4 + (long)(int)*param_5 * 0x40;
        fVar2 = *param_6;
        param_6 = param_6 + 1;
        fVar7 = (float)((ulong)local_80 >> 0x20) +
                ((float)((ulong)*(undefined8 *)pPVar1 >> 0x20) * local_90 +
                 (float)((ulong)*(undefined8 *)(pPVar1 + 0x10) >> 0x20) * fVar8 +
                 (float)((ulong)*(undefined8 *)(pPVar1 + 0x20) >> 0x20) * local_88 +
                (float)((ulong)*(undefined8 *)(pPVar1 + 0x30) >> 0x20) * local_84) * fVar2;
        local_80 = CONCAT44(fVar7,(float)local_80 +
                                  ((float)*(undefined8 *)pPVar1 * local_90 +
                                   (float)*(undefined8 *)(pPVar1 + 0x10) * fVar8 +
                                   (float)*(undefined8 *)(pPVar1 + 0x20) * local_88 +
                                  (float)*(undefined8 *)(pPVar1 + 0x30) * local_84) * fVar2);
        uStack_78 = CONCAT44((local_90 * (float)((ulong)*(undefined8 *)(pPVar1 + 8) >> 0x20) +
                              fVar8 * (float)((ulong)*(undefined8 *)(pPVar1 + 0x18) >> 0x20) +
                              local_88 * (float)((ulong)*(undefined8 *)(pPVar1 + 0x28) >> 0x20) +
                             local_84 * (float)((ulong)*(undefined8 *)(pPVar1 + 0x38) >> 0x20)) *
                             fVar2 + (float)(uStack_78 >> 0x20),
                             (local_90 * (float)*(undefined8 *)(pPVar1 + 8) +
                              fVar8 * (float)*(undefined8 *)(pPVar1 + 0x18) +
                              local_88 * (float)*(undefined8 *)(pPVar1 + 0x28) +
                             local_84 * (float)*(undefined8 *)(pPVar1 + 0x38)) * fVar2 +
                             (float)uStack_78);
        param_5 = param_5 + 1;
        uVar4 = uStack_78;
      } while (uVar5 != 0);
      goto joined_r0x0061047c;
    }
    fVar8 = 0.0;
                    /* try { // try from 00610488 to 0071048f has its CatchHandler @ 00611148 */
    fVar7 = 0.0;
  }
                    /* try { // try from 00610490 to 0071053b has its CatchHandler @ 006112cc */
  if (param_8) {
    __x = (double)((float)local_80 * (float)local_80 + fVar7 * fVar7 + fVar8 * fVar8);
    dVar6 = SQRT(__x);
    if (NAN(dVar6)) {
      dVar6 = sqrt(__x);
    }
    fVar7 = (float)(1.0 / dVar6);
    local_80 = CONCAT44((float)((ulong)local_80 >> 0x20) * fVar7,(float)local_80 * fVar7);
    uStack_78 = CONCAT44(uStack_78._4_4_,(float)uStack_78 * fVar7);
  }
  PVRTVertexWrite(*(long *)(param_2 + 0x10) + (ulong)(uint)(*(int *)(param_2 + 8) * param_3),
                  *(undefined4 *)param_2,*(undefined4 *)(param_1 + 4),&local_80);
LAB_00610504:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


