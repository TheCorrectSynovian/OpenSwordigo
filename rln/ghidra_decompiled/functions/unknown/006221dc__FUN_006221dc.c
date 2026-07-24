/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006221dc
 * Function: FUN_006221dc
 * Signature: undefined FUN_006221dc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006221dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 006209ec with catch @ 006221dc */
  *param_1 = &PTR_FUN_007b6b70;
  FUN_006220f0(param_1,0);
  FUN_00622158(param_1);
  puVar1 = (undefined8 *)param_1[0x19];
                    /* catch() { ... } // from try @ 006217bc with catch @ 0062220c */
                    /* catch() { ... } // from try @ 006218c8 with catch @ 00622210 */
                    /* catch() { ... } // from try @ 006217f8 with catch @ 00622214 */
  if (puVar1 != param_1 + 8) {
                    /* catch() { ... } // from try @ 006217f0 with catch @ 00622218 */
    if (puVar1 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 00621790 with catch @ 0062221c */
      operator_delete__(puVar1);
    }
    param_1[0x19] = 0;
  }
  FUN_0063c0c8(param_1 + 0x1a);
  return;
}


