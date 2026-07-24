/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063bd84
 * Function: FUN_0063bd84
 * Signature: undefined FUN_0063bd84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063bd84(uint param_1)

{
                    /* try { // try from 0063bd84 to 0073bd97 has its CatchHandler @ 0063ca88 */
  if ((param_1 != 0) && (((param_1 & 0x3f) == 0 || ((param_1 & 0xffffffc0) != 0)))) {
                    /* try { // try from 0063bdc4 to 0073bdd3 has its CatchHandler @ 0063caa8 */
    if (param_1 - 1 < 6) {
                    /* try { // try from 0063bdd4 to 0073bed3 has its CatchHandler @ 0063bacc */
                    /* WARNING: Could not recover jumptable at 0x0063bde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_0063bde8 + (long)(char)(&DAT_0069e394)[param_1 - 1] * 4))();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00665808(&DAT_0069e3d0);
  }
  return;
}


