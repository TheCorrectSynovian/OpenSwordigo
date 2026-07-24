/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066c36c
 * Function: FUN_0066c36c
 * Signature: undefined FUN_0066c36c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0066c36c(long *param_1,wchar_t *param_2)

{
  size_t __n;
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = *(ulong *)(*param_1 + -0x18);
  sVar2 = wcslen(param_2);
  __n = sVar2;
  if (uVar3 < sVar2) {
    __n = uVar3;
  }
  iVar1 = wmemcmp((wchar_t *)*param_1,param_2,__n);
  if (iVar1 == 0) {
    iVar1 = 0x7fffffff;
    lVar4 = uVar3 - sVar2;
    if (lVar4 < 0x80000000) {
      iVar1 = -0x80000000;
      if (-0x80000001 < lVar4) {
        iVar1 = (int)lVar4;
      }
      return iVar1;
    }
  }
  return iVar1;
}


