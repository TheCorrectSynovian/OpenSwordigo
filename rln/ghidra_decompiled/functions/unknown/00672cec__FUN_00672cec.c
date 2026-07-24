/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00672cec
 * Function: FUN_00672cec
 * Signature: undefined FUN_00672cec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00672cec(long param_1)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  byte bVar6;
  char *pcVar7;
  
  pcVar7 = *(char **)(param_1 + 0x18);
  if (*pcVar7 != 'T') {
    return 0;
  }
  pbVar5 = (byte *)(pcVar7 + 1);
  *(byte **)(param_1 + 0x18) = pbVar5;
  bVar6 = pcVar7[1];
  if (bVar6 == 0x5f) {
    lVar4 = 0;
  }
  else {
    if (bVar6 == 0x6e) {
      return 0;
    }
    if (9 < (byte)(bVar6 - 0x30)) {
      return 0;
    }
    lVar3 = 0;
    pbVar2 = (byte *)(pcVar7 + 2);
    do {
      pbVar5 = pbVar2;
      *(byte **)(param_1 + 0x18) = pbVar5;
      lVar4 = lVar3 * 10 + (ulong)bVar6;
      bVar6 = *pbVar5;
      lVar3 = lVar4 + -0x30;
      pbVar2 = pbVar5 + 1;
    } while ((byte)(bVar6 - 0x30) < 10);
    lVar4 = lVar4 + -0x2f;
    if (bVar6 != 0x5f) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x28);
  *(byte **)(param_1 + 0x18) = pbVar5 + 1;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (iVar1 < *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    lVar3 = *(long *)(param_1 + 0x20) + (long)iVar1 * 0x18;
    if (lVar3 != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18) = 5;
      *(long *)(lVar3 + 8) = lVar4;
      return lVar3;
    }
  }
  return 0;
}


