/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064d7e8
 * Function: FUN_0064d7e8
 * Signature: undefined FUN_0064d7e8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064d7e8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[4];
  *param_1 = &PTR_FUN_007b79e0;
  pvVar1 = (void *)FUN_0063be7c();
  if ((pvVar2 != pvVar1) && (pvVar2 != (void *)0x0)) {
    operator_delete__(pvVar2);
  }
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_00670744(param_1 + 3);
  FUN_0063b7bc(param_1);
  return;
}


