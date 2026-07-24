/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d7f4
 * Function: FUN_0066d7f4
 * Signature: undefined FUN_0066d7f4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066d7f4(undefined8 *param_1,long *param_2,ulong param_3,ulong param_4)

{
  wchar_t *__s2;
  wchar_t *pwVar1;
  ulong uVar2;
  size_t *psVar3;
  ulong uVar4;
  long lVar5;
  size_t __n;
  undefined1 auStack_8 [8];
  
  lVar5 = *param_2;
  uVar4 = *(ulong *)(lVar5 + -0x18);
  if (uVar4 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)",
                 "basic_string::basic_string",param_3,uVar4);
  }
  __s2 = (wchar_t *)(lVar5 + param_3 * 4);
  uVar2 = uVar4 - param_3;
  if (param_4 < uVar4 - param_3) {
    uVar2 = param_4;
  }
  pwVar1 = (wchar_t *)(lVar5 + (uVar2 + param_3) * 4);
  if (__s2 != pwVar1) {
    if ((pwVar1 != (wchar_t *)0x0) && (__s2 == (wchar_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00665330("basic_string::_S_construct null not valid");
    }
    __n = (long)pwVar1 - (long)__s2 >> 2;
    psVar3 = (size_t *)FUN_0066c5b8(__n,0,auStack_8);
    if (__n == 1) {
      *(undefined4 *)(psVar3 + 3) = *(undefined4 *)(lVar5 + param_3 * 4);
    }
    else {
      wmemcpy((wchar_t *)(psVar3 + 3),__s2,__n);
    }
    if (psVar3 != &DAT_007fd300) {
      *(undefined4 *)(psVar3 + 2) = 0;
      *psVar3 = __n;
      *(undefined4 *)((long)psVar3 + ((long)pwVar1 - (long)__s2) + 0x18) = 0;
    }
    *param_1 = psVar3 + 3;
    return;
  }
  *param_1 = &DAT_007fd318;
  return;
}


