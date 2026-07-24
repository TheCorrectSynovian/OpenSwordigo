/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066e534
 * Function: thunk_FUN_0066e474
 * Signature: undefined thunk_FUN_0066e474(void)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * thunk_FUN_0066e474(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  wchar_t *__s2;
  long lVar2;
  undefined *puVar3;
  size_t __n;
  
  __s2 = (wchar_t *)*param_2;
  __n = *(size_t *)(__s2 + -6);
  if (__n != 0) {
    puVar3 = (undefined *)*param_1;
    lVar2 = *(long *)(puVar3 + -0x18);
    uVar1 = lVar2 + __n;
    if ((*(ulong *)(puVar3 + -0x10) < uVar1) || (0 < *(int *)(puVar3 + -8))) {
      FUN_0066e318(param_1,uVar1);
      puVar3 = (undefined *)*param_1;
      __s2 = (wchar_t *)*param_2;
      lVar2 = *(long *)(puVar3 + -0x18);
    }
    if (__n == 1) {
      *(wchar_t *)(puVar3 + lVar2 * 4) = *__s2;
    }
    else {
      wmemcpy((wchar_t *)(puVar3 + lVar2 * 4),__s2,__n);
      puVar3 = (undefined *)*param_1;
    }
    if (puVar3 != &DAT_007fd318) {
      *(undefined4 *)(puVar3 + -8) = 0;
      *(ulong *)(puVar3 + -0x18) = uVar1;
      *(undefined4 *)(puVar3 + uVar1 * 4) = 0;
    }
  }
  return param_1;
}


