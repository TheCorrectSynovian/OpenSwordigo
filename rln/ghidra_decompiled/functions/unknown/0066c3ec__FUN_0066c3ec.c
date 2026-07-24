/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066c3ec
 * Function: FUN_0066c3ec
 * Signature: undefined FUN_0066c3ec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0066c3ec(long *param_1,ulong param_2,ulong param_3,wchar_t *param_4)

{
  ulong uVar1;
  size_t __n;
  int iVar2;
  size_t sVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)(*param_1 + -0x18);
  if (uVar4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::compare",
                 param_2,uVar4);
  }
  uVar1 = uVar4 - param_2;
  if (param_3 < uVar4 - param_2) {
    uVar1 = param_3;
  }
  sVar3 = wcslen(param_4);
  __n = sVar3;
  if (uVar1 < sVar3) {
    __n = uVar1;
  }
  iVar2 = wmemcmp((wchar_t *)(*param_1 + param_2 * 4),param_4,__n);
  if (iVar2 == 0) {
    iVar2 = 0x7fffffff;
    lVar5 = uVar1 - sVar3;
    if (lVar5 < 0x80000000) {
      iVar2 = -0x80000000;
      if (-0x80000001 < lVar5) {
        iVar2 = (int)lVar5;
      }
      return iVar2;
    }
  }
  return iVar2;
}


