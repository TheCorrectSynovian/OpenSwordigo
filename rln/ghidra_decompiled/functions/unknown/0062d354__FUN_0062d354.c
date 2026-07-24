/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062d354
 * Function: FUN_0062d354
 * Signature: undefined FUN_0062d354(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062d354(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0063c4d0(PTR_DAT_007e7e50);
  if ((uVar1 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar2 = *(long *)(*(long *)(*param_1 + 8) + uVar1 * 8), lVar2 != 0)) {
                    /* try { // try from 0062d394 to 0072d39f has its CatchHandler @ 0062e970 */
                    /* try { // try from 0062d3a0 to 0072d3a7 has its CatchHandler @ 0062e668 */
    lVar2 = __dynamic_cast(lVar2,PTR_PTR_007e7000,PTR_PTR_007e5e20,0);
    if (lVar2 != 0) {
                    /* try { // try from 0062d3a8 to 0072d40f has its CatchHandler @ 0062e970 */
      return;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


