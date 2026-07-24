/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00603078
 * Function: PVRTModelPODGetAnimArraySize
 * Signature: undefined __cdecl PVRTModelPODGetAnimArraySize(uint * param_1, uint param_2, uint param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODGetAnimArraySize(unsigned int*, unsigned int, unsigned int) */

uint PVRTModelPODGetAnimArraySize(uint *param_1,uint param_2,uint param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_1 == (uint *)0x0) {
                    /* try { // try from 00603098 to 0070309b has its CatchHandler @ 00603bf8 */
    return param_3 * param_2;
  }
  if (param_2 == 0) {
    return param_3;
  }
  uVar3 = (ulong)param_2;
  if (param_2 < 8) {
    uVar5 = 0;
    uVar10 = 0;
  }
  else {
    uVar5 = uVar3 & 0xfffffff8;
    pauVar7 = (undefined1 (*) [16])(param_1 + 4);
    auVar11 = ZEXT816(0);
                    /* try { // try from 006030bc to 007030bf has its CatchHandler @ 00603bf0 */
    auVar12 = ZEXT816(0);
    uVar8 = uVar5;
    do {
                    /* try { // try from 006030c0 to 0070352b has its CatchHandler @ 00601d04 */
      pauVar1 = pauVar7 + -1;
      auVar2 = *pauVar7;
      uVar8 = uVar8 - 8;
      pauVar7 = pauVar7 + 2;
      auVar11 = NEON_umax(auVar11,*pauVar1,4);
      auVar12 = NEON_umax(auVar12,auVar2,4);
    } while (uVar8 != 0);
    auVar11 = NEON_umax(auVar11,auVar12,4);
    uVar10 = NEON_umaxv(auVar11,4);
    if (uVar5 == uVar3) goto LAB_00603108;
  }
  lVar4 = uVar3 - uVar5;
  puVar9 = param_1 + uVar5;
  uVar6 = uVar10;
  do {
    uVar10 = *puVar9;
    if (*puVar9 <= uVar6) {
      uVar10 = uVar6;
    }
    lVar4 = lVar4 + -1;
    puVar9 = puVar9 + 1;
    uVar6 = uVar10;
  } while (lVar4 != 0);
LAB_00603108:
  return uVar10 + param_3;
}


