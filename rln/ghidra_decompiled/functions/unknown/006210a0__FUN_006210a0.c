/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006210a0
 * Function: FUN_006210a0
 * Signature: undefined FUN_006210a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006210a0(undefined8 *param_1)

{
                    /* try { // try from 006210ac to 007210b3 has its CatchHandler @ 00621ffc */
  FUN_00621e3c();
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *param_1 = &PTR_FUN_007b6b30;
  *(undefined1 *)((long)param_1 + 0xe1) = 0;
                    /* try { // try from 006210cc to 007210d3 has its CatchHandler @ 006223ac */
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
                    /* try { // try from 006210d4 to 007210e7 has its CatchHandler @ 006223a8 */
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return;
}


