/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00651634
 * Function: FUN_00651634
 * Signature: undefined FUN_00651634(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_00651634(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_0063c4d0(PTR_DAT_007e6da0);
  bVar1 = false;
                    /* try { // try from 00651668 to 0075169b has its CatchHandler @ 00651920 */
  if ((uVar2 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar3 = *(long *)(*(long *)(*param_1 + 8) + uVar2 * 8), lVar3 != 0)) {
    lVar3 = __dynamic_cast(lVar3,PTR_PTR_007e7000,PTR_PTR_007e4b58,0);
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}


