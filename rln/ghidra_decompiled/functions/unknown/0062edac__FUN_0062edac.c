/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062edac
 * Function: FUN_0062edac
 * Signature: undefined FUN_0062edac(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062edac(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
                    /* try { // try from 0062edb8 to 0072eddf has its CatchHandler @ 0062ee90 */
  uVar1 = FUN_0063c4d0(&DAT_007fbde0);
  if ((uVar1 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar2 = *(long *)(*(long *)(*param_1 + 8) + uVar1 * 8), lVar2 != 0)) {
                    /* try { // try from 0062edf4 to 0072ee1b has its CatchHandler @ 0062eee8 */
    lVar2 = __dynamic_cast(lVar2,PTR_PTR_007e7000,&PTR_PTR_007d9fd8,0);
    if (lVar2 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


