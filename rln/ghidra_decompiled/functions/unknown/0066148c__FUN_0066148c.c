/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066148c
 * Function: FUN_0066148c
 * Signature: undefined FUN_0066148c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066148c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = param_2[2];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  param_1[1] = 0;
  FUN_006210e8((long)param_1 + *(long *)(lVar1 + -0x18),0);
  lVar1 = param_2[4];
  param_1[2] = lVar1;
  lVar1 = *(long *)(lVar1 + -0x18);
  *(long *)((long)param_1 + lVar1 + 0x10) = param_2[5];
  FUN_006210e8((long)param_1 + lVar1 + 0x10,0);
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[6];
  param_1[2] = param_2[7];
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[8];
  param_1[2] = param_2[9];
  FUN_0065edec(param_1 + 3);
  FUN_006210e8((long)param_1 + *(long *)(*param_1 + -0x18),param_1 + 3);
  return;
}


