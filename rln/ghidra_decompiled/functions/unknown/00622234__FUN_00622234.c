/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00622234
 * Function: FUN_00622234
 * Signature: undefined FUN_00622234(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00622234(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_007b6b70;
  FUN_006220f0(param_1,0);
  FUN_00622158(param_1);
  puVar1 = (undefined8 *)param_1[0x19];
                    /* catch() { ... } // from try @ 00621760 with catch @ 0062226c */
  if (puVar1 != param_1 + 8) {
                    /* catch() { ... } // from try @ 006216c8 with catch @ 00622270 */
    if (puVar1 != (undefined8 *)0x0) {
      operator_delete__(puVar1);
    }
    param_1[0x19] = 0;
  }
  FUN_0063c0c8(param_1 + 0x1a);
                    /* catch() { ... } // from try @ 00621698 with catch @ 00622288 */
  operator_delete(param_1);
  return;
}


