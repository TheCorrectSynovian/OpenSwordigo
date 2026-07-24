/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062b380
 * Function: FUN_0062b380
 * Signature: undefined FUN_0062b380(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062b380(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = (void *)param_1[4];
  *param_1 = &PTR_FUN_007b6e20;
  pvVar1 = (void *)FUN_0063be7c();
  if ((pvVar2 != pvVar1) && (pvVar2 != (void *)0x0)) {
    operator_delete__(pvVar2);
  }
                    /* catch() { ... } // from try @ 0062afe0 with catch @ 0062b3b8
                       catch() { ... } // from try @ 0062b298 with catch @ 0062b3b8 */
  if ((long *)param_1[2] != (long *)0x0) {
                    /* catch() { ... } // from try @ 0062b254 with catch @ 0062b3c4 */
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  FUN_00670744(param_1 + 3);
  FUN_0063b7bc(param_1);
  return;
}


