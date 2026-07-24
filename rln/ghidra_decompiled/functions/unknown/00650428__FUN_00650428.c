/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00650428
 * Function: FUN_00650428
 * Signature: undefined FUN_00650428(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00650428(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0063c4d0(&DAT_007fd2a0);
                    /* catch() { ... } // from try @ 00650424 with catch @ 00650454 */
  if ((uVar1 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar2 = *(long *)(*(long *)(*param_1 + 8) + uVar1 * 8), lVar2 != 0)) {
                    /* try { // try from 00650468 to 0075046b has its CatchHandler @ 00650488 */
                    /* try { // try from 0065046c to 0075048b has its CatchHandler @ 006503f4 */
    lVar2 = __dynamic_cast(lVar2,PTR_PTR_007e7000,&PTR_PTR_007dadb0,0);
    if (lVar2 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00650468 with catch @ 00650488 */
  FUN_006652c8();
}


