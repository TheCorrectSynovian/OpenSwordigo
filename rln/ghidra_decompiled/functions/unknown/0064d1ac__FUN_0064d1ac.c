/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064d1ac
 * Function: FUN_0064d1ac
 * Signature: undefined FUN_0064d1ac(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0064d1ac(undefined8 param_1,long param_2)

{
  undefined1 auStack_8 [8];
  
                    /* try { // try from 0064d1c0 to 0074d1c3 has its CatchHandler @ 0064d260 */
  FUN_0066d97c(param_1,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x38),auStack_8);
                    /* try { // try from 0064d1d8 to 0074d1db has its CatchHandler @ 0064d250 */
  return param_1;
}


