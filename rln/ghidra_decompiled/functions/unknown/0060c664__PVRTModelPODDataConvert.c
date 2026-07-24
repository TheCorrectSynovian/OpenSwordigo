/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060c664
 * Function: PVRTModelPODDataConvert
 * Signature: undefined __cdecl PVRTModelPODDataConvert(CPODData * param_1, uint param_2, EPVRTDataType param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODDataConvert(CPODData&, unsigned int, EPVRTDataType) */

void PVRTModelPODDataConvert(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  void *__ptr;
  uint uVar8;
  ulong uVar9;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  __ptr = *(void **)(param_1 + 4);
                    /* try { // try from 0060c6a8 to 0070c6cf has its CatchHandler @ 0060ccfc */
  if ((__ptr == (void *)0x0) || (uVar3 = *param_1, uVar3 == param_3)) goto LAB_0060c7ec;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar8 = uVar1;
  if (param_3 < 0xf) {
    uVar7 = 1;
    if ((1 << (ulong)(param_3 & 0x1f) & 0x7e0eU) == 0) {
      if ((1 << (ulong)(param_3 & 0x1f) & 0x1f0U) == 0) goto LAB_0060c718;
    }
    else {
                    /* try { // try from 0060c6d4 to 0070c6df has its CatchHandler @ 0060ccf8 */
      if (uVar3 - 1 < 0xe) {
        iVar6 = *(int *)(&DAT_0069b7f0 + (long)(int)(uVar3 - 1) * 4);
      }
      else {
        iVar6 = 0;
      }
      uVar7 = iVar6 * uVar1;
    }
    param_1[1] = uVar7;
    uVar8 = uVar7;
  }
LAB_0060c718:
                    /* try { // try from 0060c720 to 0070c747 has its CatchHandler @ 0060caf8 */
  *param_1 = param_3;
  if (param_3 - 1 < 0xe) {
    iVar6 = *(int *)(&DAT_0069b7b0 + (long)(int)(param_3 - 1) * 4);
  }
  else {
    iVar6 = 0;
  }
  uVar8 = uVar8 * iVar6;
  param_1[2] = uVar8;
  if (uVar2 != uVar8) {
    pvVar5 = malloc((ulong)(uVar8 * param_2));
    *(void **)(param_1 + 4) = pvVar5;
  }
  if (param_2 != 0) {
    uVar8 = 0;
                    /* try { // try from 0060c768 to 0070c78f has its CatchHandler @ 0060ccf8 */
    uVar9 = 0;
    do {
      PVRTVertexRead(auStack_78,(long)__ptr + (ulong)uVar8,uVar3,uVar1);
      if (*param_1 - 1 < 0xe) {
        iVar6 = *(int *)(&DAT_0069b7f0 + (long)(int)(*param_1 - 1) * 4);
      }
      else {
        iVar6 = 0;
      }
      PVRTVertexWrite(*(long *)(param_1 + 4) + (ulong)(param_1[2] * (int)uVar9),param_3,
                      iVar6 * param_1[1],auStack_78);
      uVar9 = uVar9 + 1;
      uVar8 = uVar8 + uVar2;
    } while (param_2 != uVar9);
    uVar8 = param_1[2];
  }
  if (uVar2 != uVar8) {
    free(__ptr);
  }
LAB_0060c7ec:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


