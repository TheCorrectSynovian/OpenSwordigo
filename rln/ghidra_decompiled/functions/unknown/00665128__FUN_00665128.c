/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00665128
 * Function: FUN_00665128
 * Signature: undefined FUN_00665128(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00665128(long *param_1)

{
  long lVar1;
  
                    /* try { // try from 0066513c to 0076513f has its CatchHandler @ 006651fc */
  lVar1 = FUN_00662f10(param_1 + 3);
                    /* try { // try from 00665140 to 0076529b has its CatchHandler @ 00664f84 */
  if (lVar1 != 0) {
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}


