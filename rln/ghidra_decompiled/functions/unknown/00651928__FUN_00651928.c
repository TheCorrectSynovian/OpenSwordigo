/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00651928
 * Function: FUN_00651928
 * Signature: undefined FUN_00651928(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_00651928(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_0063c4d0(&DAT_007fd2b0);
                    /* try { // try from 00651948 to 0075196f has its CatchHandler @ 00651978 */
  bVar1 = false;
  if ((uVar2 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar3 = *(long *)(*(long *)(*param_1 + 8) + uVar2 * 8), lVar3 != 0)) {
                    /* try { // try from 00651970 to 0075197b has its CatchHandler @ 00651590 */
                    /* catch() { ... } // from try @ 00651948 with catch @ 00651978 */
    lVar3 = __dynamic_cast(lVar3,PTR_PTR_007e7000,&PTR_PTR_007daf50,0);
                    /* try { // try from 0065197c to 00751c53 has its CatchHandler @ 0065197c
                       catch(type#1 @ 00000000) { ... } // from try @ 0065197c with catch @ 0065197c
                       catch(type#1 @ 00000000) { ... } // from try @ 00651c5c with catch @ 0065197c
                       catch(type#1 @ 00000000) { ... } // from try @ 00651d8c with catch @ 0065197c
                        */
    bVar1 = lVar3 != 0;
  }
  return bVar1;
}


