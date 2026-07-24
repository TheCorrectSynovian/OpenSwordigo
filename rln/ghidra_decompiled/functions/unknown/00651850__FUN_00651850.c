/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00651850
 * Function: FUN_00651850
 * Signature: undefined FUN_00651850(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_00651850(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
                    /* try { // try from 0065185c to 00751947 has its CatchHandler @ 00651590 */
  uVar2 = FUN_0063c4d0(&DAT_007fd2a0);
  bVar1 = false;
  if ((uVar2 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar3 = *(long *)(*(long *)(*param_1 + 8) + uVar2 * 8), lVar3 != 0)) {
    lVar3 = __dynamic_cast(lVar3,PTR_PTR_007e7000,&PTR_PTR_007dadb0,0);
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}


