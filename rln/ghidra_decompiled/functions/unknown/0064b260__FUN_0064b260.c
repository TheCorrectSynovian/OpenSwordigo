/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b260
 * Function: FUN_0064b260
 * Signature: undefined FUN_0064b260(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0064b260(long *param_1)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)param_1[3];
  if ((byte *)param_1[2] < pbVar4) {
    pbVar3 = (byte *)param_1[2] + 1;
    param_1[2] = (long)pbVar3;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x50))();
    if (iVar1 == -1) {
      return 0xffffffff;
    }
    pbVar3 = (byte *)param_1[2];
    pbVar4 = (byte *)param_1[3];
  }
  if (pbVar3 < pbVar4) {
    uVar2 = (ulong)*pbVar3;
  }
  else {
                    /* catch() { ... } // from try @ 0064b2ec with catch @ 0064b2cc
                       catch() { ... } // from try @ 0064b39c with catch @ 0064b2cc */
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  }
  return uVar2;
}


