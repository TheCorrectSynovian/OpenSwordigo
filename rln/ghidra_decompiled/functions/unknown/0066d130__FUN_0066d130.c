/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d130
 * Function: FUN_0066d130
 * Signature: undefined FUN_0066d130(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined * FUN_0066d130(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_1;
                    /* try { // try from 0066d144 to 0076d2a3 has its CatchHandler @ 0066d144
                       catch() { ... } // from try @ 0066d144 with catch @ 0066d144
                       catch() { ... } // from try @ 0066d444 with catch @ 0066d144 */
  if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd318)) {
    if (*(int *)(puVar1 + -8) != 0) {
      FUN_0066c650(param_1,0,0,0);
      puVar1 = (undefined *)*param_1;
    }
    *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  }
  return puVar1 + param_2 * 4;
}


