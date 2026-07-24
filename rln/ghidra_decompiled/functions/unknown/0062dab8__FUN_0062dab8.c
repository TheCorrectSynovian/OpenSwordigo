/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062dab8
 * Function: FUN_0062dab8
 * Signature: undefined FUN_0062dab8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062dab8(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0063c4d0(PTR_DAT_007e7560);
                    /* try { // try from 0062dad4 to 0072dafb has its CatchHandler @ 0062e728 */
  if ((uVar1 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar2 = *(long *)(*(long *)(*param_1 + 8) + uVar1 * 8), lVar2 != 0)) {
    lVar2 = __dynamic_cast(lVar2,PTR_PTR_007e7000,PTR_PTR_007e54a8,0);
    if (lVar2 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0062db1c to 0072db1f has its CatchHandler @ 0062e688 */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


