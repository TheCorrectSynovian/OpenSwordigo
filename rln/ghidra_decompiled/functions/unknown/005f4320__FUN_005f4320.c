/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f4320
 * Function: FUN_005f4320
 * Signature: undefined FUN_005f4320(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f4320(undefined8 param_1,long param_2,double *param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  
  puVar1 = (undefined8 *)FUN_005f4118(param_2,param_3);
  *(undefined1 *)(param_2 + 10) = 0;
  if (puVar1 != &DAT_00699bc8) {
    return;
  }
  if (*(int *)(param_3 + 1) == 3) {
    if (!NAN(*param_3)) goto LAB_005f43a4;
    pcVar2 = "table index is NaN";
  }
  else {
    if (*(int *)(param_3 + 1) != 0) goto LAB_005f43a4;
    pcVar2 = "table index is nil";
  }
  FUN_005eb320(param_1,pcVar2);
LAB_005f43a4:
  FUN_005f43c0(param_1,param_2,param_3);
  return;
}


