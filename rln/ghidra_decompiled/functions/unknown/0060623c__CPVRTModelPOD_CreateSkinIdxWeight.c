/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060623c
 * Function: CPVRTModelPOD::CreateSkinIdxWeight
 * Signature: undefined __thiscall CreateSkinIdxWeight(CPVRTModelPOD * this, char * param_1, char * param_2, int param_3, int * param_4, float * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::CreateSkinIdxWeight(char*, char*, int, int const*, float const*) */

void __thiscall
CPVRTModelPOD::CreateSkinIdxWeight
          (CPVRTModelPOD *this,char *param_1,char *param_2,int param_3,int *param_4,float *param_5)

{
  size_t __n;
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint local_68 [4];
  int local_58;
  char local_54;
  char local_50;
  char local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00605724 with catch @ 00606268 */
  if (param_3 < 1) {
    uVar6 = 0;
LAB_006062e4:
    uVar8 = -(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar6 & 0xffffffff) << 2;
    __n = (ulong)(3 - (int)uVar6) * 4 + 4;
    memset((void *)((long)&local_58 + uVar8),0,__n);
                    /* catch() { ... } // from try @ 00605d9c with catch @ 00606318 */
    memset((void *)((long)local_68 + uVar8),0,__n);
  }
  else {
    uVar6 = 0;
    do {
      iVar2 = param_4[uVar6];
      (&local_58)[uVar6] = iVar2;
      uVar7 = (uint)(param_5[uVar6] * DAT_00683ffc);
      local_68[uVar6] = uVar7;
      if (0xff < iVar2) {
        PVRTErrorOutputDebug("Too many bones (highest index is 255).\n");
        goto LAB_006063dc;
      }
      uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
                    /* catch() { ... } // from try @ 00605dfc with catch @ 006062b8 */
      if (0xfe < (int)uVar7) {
        uVar7 = 0xff;
      }
      local_68[uVar6] = uVar7;
                    /* catch() { ... } // from try @ 00605dc8 with catch @ 006062c4 */
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)param_3);
    if ((int)uVar6 < 4) goto LAB_006062e4;
  }
  if (param_3 != 0) {
    iVar2 = local_68[3] + local_68[2] + local_68[1] + local_68[0];
    if (iVar2 == 0) {
LAB_006063dc:
      uVar5 = 1;
      goto LAB_006063e0;
    }
    if (iVar2 < 0xff) {
      iVar4 = 0;
      uVar7 = local_68[0];
      while( true ) {
        while (uVar7 == 0) {
                    /* try { // try from 00606360 to 0070636b has its CatchHandler @ 006056d0 */
          iVar1 = 0;
          if (iVar4 < 3) {
            iVar1 = iVar4 + 1;
          }
                    /* catch() { ... } // from try @ 00605ef4 with catch @ 00606368 */
          iVar4 = iVar1;
          uVar7 = local_68[iVar1];
        }
        local_68[iVar4] = uVar7 + 1;
        iVar1 = 0;
        if (iVar4 < 3) {
          iVar1 = iVar4 + 1;
        }
        if (0xfd < iVar2) break;
        uVar7 = local_68[iVar1];
        iVar2 = iVar2 + 1;
        iVar4 = iVar1;
      }
    }
  }
  uVar5 = 0;
  *param_1 = (char)local_58;
  *param_2 = (char)local_68[0];
  param_1[1] = local_54;
  param_2[1] = (char)local_68[1];
  param_1[2] = local_50;
  param_2[2] = (char)local_68[2];
  param_1[3] = local_4c;
  param_2[3] = (char)local_68[3];
LAB_006063e0:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


