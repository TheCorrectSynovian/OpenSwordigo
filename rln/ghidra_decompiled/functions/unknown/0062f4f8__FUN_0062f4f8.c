/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062f4f8
 * Function: FUN_0062f4f8
 * Signature: undefined FUN_0062f4f8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_0062f4f8(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_0063c4d0(&DAT_007fbdb0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0062f494 with catch @ 0062f514
                        */
  bVar1 = false;
  if ((uVar2 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar3 = *(long *)(*(long *)(*param_1 + 8) + uVar2 * 8), lVar3 != 0)) {
                    /* try { // try from 0062f538 to 0072f55f has its CatchHandler @ 0062f568 */
    lVar3 = __dynamic_cast(lVar3,PTR_PTR_007e7000,&PTR_PTR_007da008,0);
    bVar1 = lVar3 != 0;
  }
                    /* try { // try from 0062f560 to 0072f56b has its CatchHandler @ 0062f460 */
  return bVar1;
}


