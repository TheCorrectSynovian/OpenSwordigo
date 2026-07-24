/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00651778
 * Function: FUN_00651778
 * Signature: undefined FUN_00651778(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_00651778(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
                    /* try { // try from 00651778 to 00751783 has its CatchHandler @ 006518f8 */
  uVar2 = FUN_0063c4d0(&DAT_007fd2a8);
  bVar1 = false;
  if ((uVar2 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar3 = *(long *)(*(long *)(*param_1 + 8) + uVar2 * 8), lVar3 != 0)) {
                    /* try { // try from 006517c4 to 007517cf has its CatchHandler @ 00651910 */
    lVar3 = __dynamic_cast(lVar3,PTR_PTR_007e7000,&PTR_PTR_007dad80,0);
    bVar1 = lVar3 != 0;
  }
                    /* try { // try from 006517d8 to 007517e7 has its CatchHandler @ 0065190c */
  return bVar1;
}


