/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006503c0
 * Function: FUN_006503c0
 * Signature: undefined FUN_006503c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006503c0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
                    /* try { // try from 006503c4 to 007503c7 has its CatchHandler @ 006503ec */
  uVar1 = FUN_0063c4d0(&DAT_007fd298);
                    /* try { // try from 006503dc to 007503df has its CatchHandler @ 006503e8 */
                    /* try { // try from 006503e0 to 007503ef has its CatchHandler @ 00650318 */
                    /* catch() { ... } // from try @ 006503dc with catch @ 006503e8 */
                    /* catch() { ... } // from try @ 006503c4 with catch @ 006503ec */
                    /* catch() { ... } // from try @ 0065046c with catch @ 006503f4 */
  if ((uVar1 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar2 = *(long *)(*(long *)(*param_1 + 8) + uVar1 * 8), lVar2 != 0)) {
    lVar2 = __dynamic_cast(lVar2,PTR_PTR_007e7000,&PTR_PTR_007dadc8,0);
    if (lVar2 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00650424 to 00750427 has its CatchHandler @ 00650454 */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


