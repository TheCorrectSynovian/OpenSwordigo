/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00646020
 * Function: FUN_00646020
 * Signature: undefined FUN_00646020(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00646020(long param_1,long param_2,undefined8 param_3,long param_4)

{
  *(long *)(param_1 + 0x28) = param_2;
  *(long *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  for (; 0x7fffffff < param_4; param_4 = param_4 + -0x7fffffff) {
    param_2 = param_2 + 0x7fffffff;
                    /* catch() { ... } // from try @ 00646134 with catch @ 0064604c
                       catch() { ... } // from try @ 00646810 with catch @ 0064604c */
  }
  *(long *)(param_1 + 0x28) = param_2 + (int)param_4;
  return;
}


