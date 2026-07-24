/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668764
 * Function: FUN_00668764
 * Signature: undefined FUN_00668764(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00668764(long *param_1,char param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = 0xffffffffffffffff;
  lVar4 = *(long *)(*param_1 + -0x18);
  if (lVar4 != 0) {
    uVar1 = lVar4 - 1;
                    /* catch() { ... } // from try @ 0066858c with catch @ 00668784 */
    uVar3 = param_3;
    if (uVar1 < param_3) {
      uVar3 = uVar1;
    }
    while (*(char *)(*param_1 + uVar3) == param_2) {
      bVar2 = uVar3 == 0;
      uVar3 = uVar3 - 1;
      if (bVar2) {
                    /* try { // try from 006687a8 to 007687af has its CatchHandler @ 0066881c */
        return 0xffffffffffffffff;
      }
    }
  }
                    /* catch() { ... } // from try @ 0066857c with catch @ 00668778 */
  return uVar3;
}


