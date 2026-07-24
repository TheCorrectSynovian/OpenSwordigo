/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063f5e8
 * Function: FUN_0063f5e8
 * Signature: undefined FUN_0063f5e8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063f5e8(undefined8 *param_1,undefined8 param_2)

{
                    /* try { // try from 0063f608 to 0073f637 has its CatchHandler @ 0063f640 */
  FUN_00621e3c(param_1 + 1);
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((long)param_1 + 0xe9) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_007b7158;
                    /* try { // try from 0063f638 to 0073f643 has its CatchHandler @ 0063f514 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0063f608 with catch @ 0063f640
                        */
                    /* catch() { ... } // from try @ 0063f658 with catch @ 0063f644 */
  param_1[1] = &PTR_FUN_007b7180;
  FUN_006210e8(param_1 + 1,param_2);
                    /* try { // try from 0063f654 to 0073f657 has its CatchHandler @ 0063f668 */
                    /* try { // try from 0063f658 to 0073f67b has its CatchHandler @ 0063f644 */
  return;
}


