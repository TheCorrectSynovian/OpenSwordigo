/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006725b4
 * Function: FUN_006725b4
 * Signature: undefined FUN_006725b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_006725b4(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  byte *pbVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  
  pbVar3 = (byte *)*param_1;
  bVar5 = *pbVar3;
  bVar2 = bVar5 == 0x6e;
  if (bVar2) {
    *param_1 = (long)(pbVar3 + 1);
    uVar6 = 0xffffffffffffffff;
    bVar5 = pbVar3[1];
  }
  else {
                    /* try { // try from 006725c4 to 007725d7 has its CatchHandler @ 00672754 */
    uVar6 = 0;
  }
                    /* try { // try from 006725d8 to 007725e3 has its CatchHandler @ 00672714 */
  if ((byte)(bVar5 - 0x30) < 10) {
    pbVar3 = (byte *)*param_1;
    uVar4 = 0;
                    /* try { // try from 006725e4 to 00772833 has its CatchHandler @ 00672358 */
    do {
      pbVar3 = pbVar3 + 1;
      *param_1 = (long)pbVar3;
      uVar1 = (ulong)bVar5;
      bVar5 = *pbVar3;
      uVar4 = (uVar4 * 10 + uVar1) - 0x30;
    } while ((byte)(bVar5 - 0x30) < 10);
  }
  else {
    uVar4 = 0;
  }
  return (uVar4 ^ uVar6) + (ulong)bVar2;
}


