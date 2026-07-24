/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063ca8c
 * Function: FUN_0063ca8c
 * Signature: undefined FUN_0063ca8c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_0063ca8c(long param_1,long param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  ulong uVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  
  pbVar9 = (byte *)*param_3;
                    /* catch() { ... } // from try @ 0063bb78 with catch @ 0063ca94 */
  uVar7 = *(long *)(pbVar9 + -0x18) - 1;
  uVar4 = param_2 - 1U;
  if (uVar7 < param_2 - 1U) {
    uVar4 = uVar7;
  }
  if (uVar4 == 0) {
                    /* catch() { ... } // from try @ 0063c6f4 with catch @ 0063cb18 */
    bVar6 = true;
                    /* catch() { ... } // from try @ 0063c658 with catch @ 0063cb1c */
  }
  else {
                    /* catch() { ... } // from try @ 0063bdc4 with catch @ 0063caa8 */
    uVar8 = 0;
    do {
      pbVar1 = (byte *)(param_1 + uVar8);
      uVar8 = uVar8 + 1;
      pbVar2 = pbVar9 + uVar7;
      uVar7 = uVar7 - 1;
      bVar6 = *pbVar2 == *pbVar1;
      if (uVar4 <= uVar8) break;
    } while (bVar6);
  }
  bVar5 = *(byte *)(param_1 + uVar4);
  while ((uVar7 != 0 && (bVar3 = bVar6 != false, bVar6 = false, bVar3))) {
    pbVar1 = pbVar9 + uVar7;
    uVar7 = uVar7 - 1;
    bVar6 = *pbVar1 == bVar5;
  }
  if ('\0' < (char)bVar5) {
    bVar6 = (bool)(bVar6 & *pbVar9 <= bVar5);
  }
  return bVar6;
}


