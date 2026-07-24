/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062f48c
 * Function: FUN_0062f48c
 * Signature: undefined FUN_0062f48c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_0062f48c(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
                    /* try { // try from 0062f494 to 0072f4a7 has its CatchHandler @ 0062f514 */
  uVar2 = FUN_0063c4d0(&DAT_007fbdb8);
                    /* try { // try from 0062f4a8 to 0072f537 has its CatchHandler @ 0062f460 */
  bVar1 = false;
  if ((uVar2 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar3 = *(long *)(*(long *)(*param_1 + 8) + uVar2 * 8), lVar3 != 0)) {
    lVar3 = __dynamic_cast(lVar3,PTR_PTR_007e7000,&PTR_PTR_007d9e98,0);
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}


