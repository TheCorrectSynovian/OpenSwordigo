/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668b10
 * Function: FUN_00668b10
 * Signature: undefined FUN_00668b10(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_00668b10(long *param_1,ulong param_2,ulong param_3,void *param_4,ulong param_5)

{
  ulong uVar1;
  size_t __n;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(*param_1 + -0x18);
  if (uVar3 < param_2) {
                    /* catch() { ... } // from try @ 00668a94 with catch @ 00668b98
                       catch() { ... } // from try @ 00668b08 with catch @ 00668b98 */
                    /* catch() { ... } // from try @ 00668af0 with catch @ 00668ba4 */
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::compare",
                 param_2,uVar3);
  }
  uVar1 = uVar3 - param_2;
  if (param_3 < uVar3 - param_2) {
    uVar1 = param_3;
  }
  __n = uVar1;
  if (param_5 < uVar1) {
    __n = param_5;
  }
                    /* try { // try from 00668b50 to 00768bc3 has its CatchHandler @ 00668a54 */
  iVar2 = memcmp((void *)(*param_1 + param_2),param_4,__n);
  if (iVar2 == 0) {
    iVar2 = 0x7fffffff;
    lVar4 = uVar1 - param_5;
    if (lVar4 < 0x80000000) {
      iVar2 = -0x80000000;
      if (-0x80000001 < lVar4) {
        iVar2 = (int)lVar4;
      }
      return iVar2;
    }
  }
  return iVar2;
}


