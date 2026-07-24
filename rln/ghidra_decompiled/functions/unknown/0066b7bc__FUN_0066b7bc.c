/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b7bc
 * Function: FUN_0066b7bc
 * Signature: undefined FUN_0066b7bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066b7bc(undefined8 param_1,wchar_t *param_2,undefined8 param_3)

{
  size_t sVar1;
  
                    /* try { // try from 0066b7d4 to 0076b7d7 has its CatchHandler @ 0066b7e8 */
                    /* try { // try from 0066b7d8 to 0076b7eb has its CatchHandler @ 0066b7a4 */
  sVar1 = wcslen(param_2);
                    /* catch() { ... } // from try @ 0066b7d4 with catch @ 0066b7e8 */
                    /* catch() { ... } // from try @ 0066b820 with catch @ 0066b7ec */
  FUN_0066b6dc(param_1,param_2,param_3,sVar1);
  return;
}


