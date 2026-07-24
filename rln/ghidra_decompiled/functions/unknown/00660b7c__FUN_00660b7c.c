/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00660b7c
 * Function: FUN_00660b7c
 * Signature: undefined FUN_00660b7c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00660b7c(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_0065f390(param_1 + 2);
  if (lVar1 != 0) {
                    /* try { // try from 00660b9c to 00760ba7 has its CatchHandler @ 00660d80 */
    return;
  }
                    /* try { // try from 00660ba8 to 00760bd7 has its CatchHandler @ 00660b48 */
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}


