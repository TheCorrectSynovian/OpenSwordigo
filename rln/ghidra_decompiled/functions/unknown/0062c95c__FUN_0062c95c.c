/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062c95c
 * Function: FUN_0062c95c
 * Signature: undefined FUN_0062c95c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062c95c(undefined8 *param_1,undefined8 param_2,char *param_3,long param_4)

{
  int iVar1;
  char *__s2;
  size_t sVar2;
  void *pvVar3;
  
                    /* try { // try from 0062c964 to 0072c977 has its CatchHandler @ 0062cd30 */
  *(uint *)(param_1 + 1) = (uint)(param_4 != 0);
  param_1[2] = 0;
  *param_1 = &PTR_FUN_007b6e20;
  __s2 = (char *)FUN_0063be7c();
  iVar1 = strcmp(param_3,__s2);
  if (iVar1 == 0) {
                    /* try { // try from 0062c9b0 to 0072c9d7 has its CatchHandler @ 0062cc7c */
    param_1[4] = __s2;
  }
  else {
    sVar2 = strlen(param_3);
    pvVar3 = operator_new__(sVar2 + 1);
    pvVar3 = memcpy(pvVar3,param_3,sVar2 + 1);
    param_1[4] = pvVar3;
                    /* try { // try from 0062c9f8 to 0072ca1f has its CatchHandler @ 0062cd30 */
  }
  FUN_0064be60(param_1,param_2);
  return;
}


