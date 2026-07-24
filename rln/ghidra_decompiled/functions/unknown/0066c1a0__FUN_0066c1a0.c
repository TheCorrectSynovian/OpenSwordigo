/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066c1a0
 * Function: FUN_0066c1a0
 * Signature: undefined FUN_0066c1a0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0066c1a0(undefined8 *param_1,undefined8 *param_2)

{
  size_t __n;
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
                    /* catch() { ... } // from try @ 0066c110 with catch @ 0066c1ac */
  uVar4 = *(ulong *)((wchar_t *)*param_2 + -6);
  uVar2 = *(ulong *)((wchar_t *)*param_1 + -6);
  __n = uVar4;
  if (uVar2 < uVar4) {
    __n = uVar2;
  }
  iVar1 = wmemcmp((wchar_t *)*param_1,(wchar_t *)*param_2,__n);
  if (iVar1 == 0) {
    iVar1 = 0x7fffffff;
    lVar3 = uVar2 - uVar4;
    if (lVar3 < 0x80000000) {
      iVar1 = -0x80000000;
      if (-0x80000001 < lVar3) {
        iVar1 = (int)lVar3;
      }
      return iVar1;
    }
  }
  return iVar1;
}


