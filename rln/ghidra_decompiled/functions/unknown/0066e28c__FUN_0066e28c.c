/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066e28c
 * Function: FUN_0066e28c
 * Signature: undefined FUN_0066e28c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


wchar_t * FUN_0066e28c(size_t param_1,wchar_t param_2)

{
  size_t *psVar1;
  wchar_t *__s;
  
  if (param_1 == 0) {
    __s = (wchar_t *)&DAT_007fd318;
  }
  else {
    psVar1 = (size_t *)FUN_0066c5b8(param_1,0);
    __s = (wchar_t *)(psVar1 + 3);
    if (param_1 == 1) {
      *(wchar_t *)(psVar1 + 3) = param_2;
    }
    else {
      wmemset(__s,param_2,param_1);
    }
    if (psVar1 != &DAT_007fd300) {
      *(undefined4 *)(psVar1 + 2) = 0;
      *psVar1 = param_1;
      *(undefined4 *)((long)psVar1 + param_1 * 4 + 0x18) = 0;
    }
  }
  return __s;
}


