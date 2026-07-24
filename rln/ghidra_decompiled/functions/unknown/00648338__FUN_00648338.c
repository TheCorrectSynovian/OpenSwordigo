/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00648338
 * Function: FUN_00648338
 * Signature: undefined FUN_00648338(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00648338(long param_1,long param_2,undefined8 param_3,long param_4)

{
                    /* try { // try from 0064833c to 00748343 has its CatchHandler @ 00648420 */
  *(long *)(param_1 + 0x28) = param_2;
                    /* try { // try from 00648344 to 0074835f has its CatchHandler @ 00648428 */
  *(long *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  for (; 0x7fffffff < param_4; param_4 = param_4 + -0x7fffffff) {
    param_2 = param_2 + 0x1fffffffc;
  }
  *(long *)(param_1 + 0x28) = param_2 + (long)(int)param_4 * 4;
  return;
}


