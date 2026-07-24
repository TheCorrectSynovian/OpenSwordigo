/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062eff0
 * Function: FUN_0062eff0
 * Signature: undefined FUN_0062eff0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062eff0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_0063c4d0(&DAT_007fbda8);
  if ((uVar1 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar2 = *(long *)(*(long *)(*param_1 + 8) + uVar1 * 8), lVar2 != 0)) {
    lVar2 = __dynamic_cast(lVar2,PTR_PTR_007e7000,&PTR_PTR_007da038,0);
    if (lVar2 != 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __cxa_bad_cast();
  }
                    /* WARNING: Subroutine does not return */
  FUN_006652c8();
}


