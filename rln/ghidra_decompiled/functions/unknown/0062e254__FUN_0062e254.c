/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062e254
 * Function: FUN_0062e254
 * Signature: undefined FUN_0062e254(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062e254(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
                    /* try { // try from 0062e260 to 0072ec03 has its CatchHandler @ 0062ec0c */
  uVar1 = FUN_0063c4d0(&DAT_007fbde8);
  if ((uVar1 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar2 = *(long *)(*(long *)(*param_1 + 8) + uVar1 * 8), lVar2 != 0)) {
                    /* catch() { ... } // from try @ 0062dbe0 with catch @ 0062e28c */
                    /* catch() { ... } // from try @ 0062da8c with catch @ 0062e290 */
    lVar2 = __dynamic_cast(lVar2,PTR_PTR_007e7000,&PTR_PTR_007d9eb0,0);
    if (lVar2 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


