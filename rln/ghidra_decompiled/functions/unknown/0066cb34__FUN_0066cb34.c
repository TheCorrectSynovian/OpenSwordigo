/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066cb34
 * Function: FUN_0066cb34
 * Signature: undefined FUN_0066cb34(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_0066cb34(undefined8 *param_1,wchar_t *param_2,size_t param_3)

{
  wchar_t *__s1;
  ulong uVar1;
  wchar_t *pwVar2;
  
  __s1 = (wchar_t *)*param_1;
  pwVar2 = __s1 + -6;
  if (0xffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c(&LAB_0069fa60);
  }
  if (((param_2 < __s1) || (__s1 + *(long *)(__s1 + -6) < param_2)) || (L'\0' < __s1[-2])) {
    FUN_0066c650(param_1,0,*(long *)(__s1 + -6),param_3);
    if (param_3 == 0) {
      return param_1;
    }
    if (param_3 != 1) {
                    /* catch() { ... } // from try @ 0066cca0 with catch @ 0066cc30
                       catch() { ... } // from try @ 0066cde0 with catch @ 0066cc30 */
      wmemcpy((wchar_t *)*param_1,param_2,param_3);
      return param_1;
    }
    *(wchar_t *)*param_1 = *param_2;
    return param_1;
  }
  uVar1 = (long)param_2 - (long)__s1 >> 2;
  if (uVar1 < param_3) {
    if (uVar1 == 0) goto LAB_0066cbe4;
    if (param_3 != 1) {
      wmemmove(__s1,param_2,param_3);
      __s1 = (wchar_t *)*param_1;
      pwVar2 = __s1 + -6;
      goto LAB_0066cbe4;
    }
  }
  else if (param_3 != 1) {
    wmemcpy(__s1,param_2,param_3);
    __s1 = (wchar_t *)*param_1;
    pwVar2 = __s1 + -6;
    goto LAB_0066cbe4;
  }
  *__s1 = *param_2;
LAB_0066cbe4:
  if (pwVar2 != (wchar_t *)&DAT_007fd300) {
    __s1[-2] = L'\0';
    *(size_t *)(__s1 + -6) = param_3;
    __s1[param_3] = L'\0';
  }
  return param_1;
}


