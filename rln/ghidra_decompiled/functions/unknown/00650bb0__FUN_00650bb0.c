/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00650bb0
 * Function: FUN_00650bb0
 * Signature: undefined FUN_00650bb0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00650bb0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0063c4d0(&DAT_007fd2c8);
  if ((uVar1 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar2 = *(long *)(*(long *)(*param_1 + 8) + uVar1 * 8), lVar2 != 0)) {
                    /* catch() { ... } // from try @ 00650b58 with catch @ 00650be8 */
                    /* try { // try from 00650bec to 00750bef has its CatchHandler @ 00650bf8 */
                    /* try { // try from 00650bf0 to 00750bfb has its CatchHandler @ 00650a38 */
                    /* catch() { ... } // from try @ 00650bec with catch @ 00650bf8 */
    lVar2 = __dynamic_cast(lVar2,PTR_PTR_007e7000,&PTR_PTR_007dae48,0);
                    /* catch() { ... } // from try @ 00650c70 with catch @ 00650c00 */
    if (lVar2 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


