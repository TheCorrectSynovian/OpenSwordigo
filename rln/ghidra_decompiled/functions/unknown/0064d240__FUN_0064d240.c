/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064d240
 * Function: FUN_0064d240
 * Signature: undefined FUN_0064d240(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064d240(undefined8 *param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0064d1d8 with catch @ 0064d250
                        */
  *param_1 = &PTR_FUN_007b7c60;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0064d1c0 with catch @ 0064d260
                        */
  if (*(char *)(param_1 + 0x13) != '\0') {
    if ((void *)param_1[2] != (void *)0x0) {
      operator_delete__((void *)param_1[2]);
    }
    if ((void *)param_1[6] != (void *)0x0) {
      operator_delete__((void *)param_1[6]);
    }
                    /* try { // try from 0064d27c to 0074d2f3 has its CatchHandler @ 0064d2fc */
    if ((void *)param_1[8] != (void *)0x0) {
      operator_delete__((void *)param_1[8]);
    }
    if ((void *)param_1[10] != (void *)0x0) {
      operator_delete__((void *)param_1[10]);
    }
  }
  FUN_0063b7bc(param_1);
  return;
}


