/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066c588
 * Function: FUN_0066c588
 * Signature: undefined FUN_0066c588(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066c588(long *param_1,long param_2)

{
  if (param_1 == &DAT_007fd300) {
    return;
  }
                    /* try { // try from 0066c5a0 to 0076c5c7 has its CatchHandler @ 0066c5fc */
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_2;
  *(undefined4 *)((long)param_1 + param_2 * 4 + 0x18) = 0;
  return;
}


