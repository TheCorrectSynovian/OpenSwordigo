/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006516a0
 * Function: FUN_006516a0
 * Signature: undefined FUN_006516a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_006516a0(long *param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
                    /* try { // try from 006516a4 to 007516af has its CatchHandler @ 00651924 */
  uVar2 = FUN_0063c4d0(PTR_DAT_007e6e20);
  bVar1 = false;
                    /* try { // try from 006516d0 to 007516df has its CatchHandler @ 0065191c */
  if ((uVar2 < *(ulong *)(*param_1 + 0x10)) &&
     (lVar3 = *(long *)(*(long *)(*param_1 + 8) + uVar2 * 8), lVar3 != 0)) {
    lVar3 = __dynamic_cast(lVar3,PTR_PTR_007e7000,PTR_PTR_007e7d88,0);
    bVar1 = lVar3 != 0;
  }
                    /* try { // try from 00651700 to 0075170f has its CatchHandler @ 00651918 */
  return bVar1;
}


