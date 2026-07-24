/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064ecb4
 * Function: FUN_0064ecb4
 * Signature: undefined FUN_0064ecb4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064ecb4(undefined8 *param_1,undefined8 param_2,char *param_3,long param_4)

{
  int iVar1;
  char *__s2;
  size_t sVar2;
  void *pvVar3;
  
  *(uint *)(param_1 + 1) = (uint)(param_4 != 0);
  param_1[2] = 0;
  *param_1 = &PTR_FUN_007b79e0;
  __s2 = (char *)FUN_0063be7c();
  iVar1 = strcmp(param_3,__s2);
  if (iVar1 == 0) {
    param_1[4] = __s2;
  }
  else {
    sVar2 = strlen(param_3);
    pvVar3 = operator_new__(sVar2 + 1);
                    /* try { // try from 0064ed44 to 0074ed6b has its CatchHandler @ 0064edc8 */
    pvVar3 = memcpy(pvVar3,param_3,sVar2 + 1);
    param_1[4] = pvVar3;
  }
  FUN_0064c268(param_1,param_2);
  return;
}


