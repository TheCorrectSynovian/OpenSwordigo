/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062e1ec
 * Function: FUN_0062e1ec
 * Signature: undefined FUN_0062e1ec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062e1ec(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0063c4d0(&DAT_007fbdc8);
  if ((uVar1 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar2 = *(long *)(*(long *)(*param_1 + 8) + uVar1 * 8), lVar2 != 0)) {
                    /* catch() { ... } // from try @ 0062dd14 with catch @ 0062e224 */
                    /* catch() { ... } // from try @ 0062dfe0 with catch @ 0062e234 */
                    /* catch() { ... } // from try @ 0062de80 with catch @ 0062e238 */
    lVar2 = __dynamic_cast(lVar2,PTR_PTR_007e7000,&PTR_PTR_007d9e50,0);
                    /* catch() { ... } // from try @ 0062dc84 with catch @ 0062e23c */
    if (lVar2 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


