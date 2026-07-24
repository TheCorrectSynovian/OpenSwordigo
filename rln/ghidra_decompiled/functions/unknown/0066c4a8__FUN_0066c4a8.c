/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066c4a8
 * Function: FUN_0066c4a8
 * Signature: undefined FUN_0066c4a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0066c4a8(long *param_1,ulong param_2,ulong param_3,wchar_t *param_4,ulong param_5)

{
  ulong uVar1;
  size_t __n;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(*param_1 + -0x18);
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::compare",
                 param_2,uVar3);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0066c31c with catch @ 0066c4d4
                        */
  uVar1 = uVar3 - param_2;
  if (param_3 < uVar3 - param_2) {
    uVar1 = param_3;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0066c2d4 with catch @ 0066c4e0
                        */
  __n = uVar1;
  if (param_5 < uVar1) {
    __n = param_5;
  }
  iVar2 = wmemcmp((wchar_t *)(*param_1 + param_2 * 4),param_4,__n);
  if (iVar2 == 0) {
    iVar2 = 0x7fffffff;
    lVar4 = uVar1 - param_5;
                    /* try { // try from 0066c500 to 0076c507 has its CatchHandler @ 0066c510 */
    if (lVar4 < 0x80000000) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0066c500 with catch @ 0066c510
                        */
      iVar2 = -0x80000000;
      if (-0x80000001 < lVar4) {
        iVar2 = (int)lVar4;
      }
      return iVar2;
    }
  }
                    /* try { // try from 0066c508 to 0076c513 has its CatchHandler @ 0066c21c */
  return iVar2;
}


