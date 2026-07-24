/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b71c
 * Function: FUN_0064b71c
 * Signature: undefined FUN_0064b71c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0064b71c(long *param_1)

{
  ulong uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)param_1[2];
  if (puVar2 < (uint *)param_1[3]) {
    uVar1 = (ulong)*puVar2;
    param_1[2] = (long)(puVar2 + 1);
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x50))();
  }
  if ((int)uVar1 != -1) {
                    /* try { // try from 0064b750 to 0074b7b7 has its CatchHandler @ 0064b91c */
    if ((uint *)param_1[2] < (uint *)param_1[3]) {
      uVar1 = (ulong)*(uint *)param_1[2];
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x48))(param_1);
    }
  }
  return uVar1;
}


