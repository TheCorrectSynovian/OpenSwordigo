/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00663ee4
 * Function: FUN_00663ee4
 * Signature: undefined FUN_00663ee4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00663ee4(long *param_1)

{
  long lVar1;
  
                    /* try { // try from 00663eec to 00763f0b has its CatchHandler @ 00664014 */
  lVar1 = FUN_00663bdc(param_1 + 3);
  if (lVar1 != 0) {
                    /* try { // try from 00663f0c to 00763f13 has its CatchHandler @ 00663ff4 */
    FUN_006215c0((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00663f28 to 00763f33 has its CatchHandler @ 00664014 */
                    /* try { // try from 00663f34 to 00763f8f has its CatchHandler @ 00663d0c */
  FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}


