/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00672bbc
 * Function: FUN_00672bbc
 * Signature: undefined FUN_00672bbc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00672bbc(long param_1)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar3 = *(byte **)(param_1 + 0x18);
  bVar4 = *pbVar3;
  if (bVar4 != 0x5f) {
    if ((bVar4 != 0x6e) && ((byte)(bVar4 - 0x30) < 10)) {
      lVar1 = 0;
      do {
        pbVar3 = pbVar3 + 1;
        *(byte **)(param_1 + 0x18) = pbVar3;
        lVar2 = lVar1 * 10 + (ulong)bVar4;
        bVar4 = *pbVar3;
                    /* try { // try from 00672c04 to 00772c0b has its CatchHandler @ 00672e88 */
        lVar1 = lVar2 + -0x30;
      } while ((byte)(bVar4 - 0x30) < 10);
      lVar2 = lVar2 + -0x2f;
      if (bVar4 == 0x5f) goto LAB_00672c38;
    }
    return -1;
  }
  lVar2 = 0;
LAB_00672c38:
  *(byte **)(param_1 + 0x18) = pbVar3 + 1;
  return lVar2;
}


