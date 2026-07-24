/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00672c48
 * Function: FUN_00672c48
 * Signature: undefined FUN_00672c48(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00672c48(long param_1)

{
  long lVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  byte *pbVar5;
  byte bVar6;
  
  pcVar3 = *(char **)(param_1 + 0x18);
                    /* try { // try from 00672c50 to 00772c57 has its CatchHandler @ 00672e8c */
  if (*pcVar3 == '_') {
    pbVar5 = (byte *)(pcVar3 + 1);
    *(byte **)(param_1 + 0x18) = pbVar5;
    bVar6 = pcVar3[1];
    if (bVar6 == 0x6e) {
      pbVar5 = (byte *)(pcVar3 + 2);
      *(byte **)(param_1 + 0x18) = pbVar5;
      bVar6 = pcVar3[2];
      if (9 < (byte)(bVar6 - 0x30)) {
        return 1;
      }
      bVar2 = true;
    }
    else {
      if (9 < (byte)(bVar6 - 0x30)) {
        return 1;
      }
      bVar2 = false;
    }
    lVar4 = 0;
    do {
      pbVar5 = pbVar5 + 1;
      *(byte **)(param_1 + 0x18) = pbVar5;
      lVar1 = lVar4 * 10 + (ulong)bVar6;
      bVar6 = *pbVar5;
      lVar4 = lVar1 + -0x30;
    } while ((byte)(bVar6 - 0x30) < 10);
    if (bVar2) {
      return lVar1 - 0x31U >> 0x3f;
    }
  }
                    /* try { // try from 00672c58 to 00772eb7 has its CatchHandler @ 00672850 */
  return 1;
}


