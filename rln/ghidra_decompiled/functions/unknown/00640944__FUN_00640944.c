/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00640944
 * Function: FUN_00640944
 * Signature: undefined FUN_00640944(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00640944(long *param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  
  if (param_2 != (char *)0x0) {
    sVar2 = strlen(param_2);
    FUN_00640490(param_1,param_2,sVar2);
    return param_1;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 1);
  return param_1;
}


