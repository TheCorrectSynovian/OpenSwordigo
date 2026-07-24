/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062f420
 * Function: FUN_0062f420
 * Signature: undefined FUN_0062f420(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_0062f420(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_0063c4d0(&DAT_007fbde0);
  bVar1 = false;
  if ((uVar2 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar3 = *(long *)(*(long *)(*param_1 + 8) + uVar2 * 8), lVar3 != 0)) {
                    /* try { // try from 0062f460 to 0072f493 has its CatchHandler @ 0062f460
                       catch(type#1 @ 00000000) { ... } // from try @ 0062f460 with catch @ 0062f460
                       catch(type#1 @ 00000000) { ... } // from try @ 0062f4a8 with catch @ 0062f460
                       catch(type#1 @ 00000000) { ... } // from try @ 0062f560 with catch @ 0062f460
                        */
    lVar3 = __dynamic_cast(lVar3,PTR_PTR_007e7000,&PTR_PTR_007d9fd8,0);
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}


