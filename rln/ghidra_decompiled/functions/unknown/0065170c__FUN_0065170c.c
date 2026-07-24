/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065170c
 * Function: FUN_0065170c
 * Signature: undefined FUN_0065170c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_0065170c(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
                    /* try { // try from 00651710 to 00751727 has its CatchHandler @ 00651924 */
  uVar2 = FUN_0063c4d0(&DAT_007fd270);
  bVar1 = false;
                    /* try { // try from 00651740 to 0075174b has its CatchHandler @ 00651900 */
  if ((uVar2 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar3 = *(long *)(*(long *)(*param_1 + 8) + uVar2 * 8), lVar3 != 0)) {
    lVar3 = __dynamic_cast(lVar3,PTR_PTR_007e7000,&PTR_PTR_007dad18,0);
    bVar1 = lVar3 != 0;
                    /* try { // try from 00651764 to 0075176f has its CatchHandler @ 006518fc */
  }
  return bVar1;
}


