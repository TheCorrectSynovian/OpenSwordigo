/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006518bc
 * Function: FUN_006518bc
 * Signature: undefined FUN_006518bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_006518bc(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_0063c4d0(&DAT_007fd2c8);
  bVar1 = false;
  if ((uVar2 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar3 = *(long *)(*(long *)(*param_1 + 8) + uVar2 * 8), lVar3 != 0)) {
                    /* catch() { ... } // from try @ 00651778 with catch @ 006518f8 */
                    /* catch() { ... } // from try @ 00651764 with catch @ 006518fc */
                    /* catch() { ... } // from try @ 00651740 with catch @ 00651900 */
                    /* catch() { ... } // from try @ 00651814 with catch @ 00651904 */
                    /* catch() { ... } // from try @ 00651800 with catch @ 00651908 */
                    /* catch() { ... } // from try @ 006517d8 with catch @ 0065190c */
    lVar3 = __dynamic_cast(lVar3,PTR_PTR_007e7000,&PTR_PTR_007dae48,0);
                    /* catch() { ... } // from try @ 006517c4 with catch @ 00651910 */
    bVar1 = lVar3 != 0;
                    /* catch() { ... } // from try @ 0065182c with catch @ 00651914 */
  }
                    /* catch() { ... } // from try @ 00651700 with catch @ 00651918 */
                    /* catch() { ... } // from try @ 006516d0 with catch @ 0065191c */
                    /* catch() { ... } // from try @ 00651668 with catch @ 00651920 */
                    /* catch() { ... } // from try @ 006516a4 with catch @ 00651924
                       catch() { ... } // from try @ 00651710 with catch @ 00651924 */
  return bVar1;
}


