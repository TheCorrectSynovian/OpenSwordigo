/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062f564
 * Function: FUN_0062f564
 * Signature: undefined FUN_0062f564(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_0062f564(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0062f538 with catch @ 0062f568
                        */
                    /* try { // try from 0062f56c to 0072f5b7 has its CatchHandler @ 0062f56c
                       catch() { ... } // from try @ 0062f56c with catch @ 0062f56c
                       catch() { ... } // from try @ 0062f5cc with catch @ 0062f56c
                       catch() { ... } // from try @ 0062f640 with catch @ 0062f56c
                       catch() { ... } // from try @ 0062f6e8 with catch @ 0062f56c
                       catch() { ... } // from try @ 0062f760 with catch @ 0062f56c
                       catch() { ... } // from try @ 0062f90c with catch @ 0062f56c */
  uVar2 = FUN_0063c4d0(&DAT_007fbda8);
  bVar1 = false;
  if ((uVar2 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar3 = *(long *)(*(long *)(*param_1 + 8) + uVar2 * 8), lVar3 != 0)) {
    lVar3 = __dynamic_cast(lVar3,PTR_PTR_007e7000,&PTR_PTR_007da038,0);
                    /* try { // try from 0062f5b8 to 0072f5cb has its CatchHandler @ 0062f870 */
    bVar1 = lVar3 != 0;
  }
                    /* try { // try from 0062f5cc to 0072f62b has its CatchHandler @ 0062f56c */
  return bVar1;
}


