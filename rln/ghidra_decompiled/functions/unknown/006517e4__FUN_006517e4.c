/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006517e4
 * Function: FUN_006517e4
 * Signature: undefined FUN_006517e4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_006517e4(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_0063c4d0(&DAT_007fd298);
                    /* try { // try from 00651800 to 0075180b has its CatchHandler @ 00651908 */
  bVar1 = false;
                    /* try { // try from 00651814 to 00751823 has its CatchHandler @ 00651904 */
  if ((uVar2 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar3 = *(long *)(*(long *)(*param_1 + 8) + uVar2 * 8), lVar3 != 0)) {
                    /* try { // try from 0065182c to 0075185b has its CatchHandler @ 00651914 */
    lVar3 = __dynamic_cast(lVar3,PTR_PTR_007e7000,&PTR_PTR_007dadc8,0);
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}


