/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066c2a4
 * Function: FUN_0066c2a4
 * Signature: undefined FUN_0066c2a4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0066c2a4(long *param_1,ulong param_2,ulong param_3,long *param_4,ulong param_5,ulong param_6
                )

{
  ulong uVar1;
  size_t __n;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(*param_1 + -0x18);
  if (uVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::compare",
                 param_2,uVar4);
  }
  uVar3 = *(ulong *)(*param_4 + -0x18);
  if (param_5 <= uVar3) {
                    /* try { // try from 0066c2d4 to 0076c2d7 has its CatchHandler @ 0066c4e0 */
    uVar3 = uVar3 - param_5;
    uVar1 = uVar4 - param_2;
    if (param_3 < uVar4 - param_2) {
      uVar1 = param_3;
    }
    if (param_6 < uVar3) {
      uVar3 = param_6;
    }
    __n = uVar1;
    if (uVar3 < uVar1) {
      __n = uVar3;
    }
    iVar2 = wmemcmp((wchar_t *)(*param_1 + param_2 * 4),(wchar_t *)(*param_4 + param_5 * 4),__n);
    if (iVar2 == 0) {
      iVar2 = 0x7fffffff;
      lVar5 = uVar1 - uVar3;
      if (lVar5 < 0x80000000) {
                    /* try { // try from 0066c320 to 0076c4ff has its CatchHandler @ 0066c21c */
        iVar2 = -0x80000000;
        if (-0x80000001 < lVar5) {
          iVar2 = (int)lVar5;
        }
        return iVar2;
      }
    }
                    /* try { // try from 0066c31c to 0076c31f has its CatchHandler @ 0066c4d4 */
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::compare",
               param_5);
}


