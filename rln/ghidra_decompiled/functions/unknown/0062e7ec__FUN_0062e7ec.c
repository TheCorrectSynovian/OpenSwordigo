/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062e7ec
 * Function: FUN_0062e7ec
 * Signature: undefined FUN_0062e7ec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062e7ec(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 0062d828 with catch @ 0062e804
                       catch() { ... } // from try @ 0062d8b8 with catch @ 0062e804 */
  uVar1 = FUN_0063c4d0(&DAT_007fbdf0);
  if ((uVar1 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar2 = *(long *)(*(long *)(*param_1 + 8) + uVar1 * 8), lVar2 != 0)) {
    lVar2 = __dynamic_cast(lVar2,PTR_PTR_007e7000,&PTR_PTR_007d9ee8,0);
    if (lVar2 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


