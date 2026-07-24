/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066df24
 * Function: FUN_0066df24
 * Signature: undefined FUN_0066df24(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066df24(undefined8 *param_1,wchar_t *param_2,long param_3,undefined8 param_4)

{
  size_t *psVar1;
  size_t __n;
  
  if (param_2 == param_2 + param_3) {
    *param_1 = &DAT_007fd318;
    return;
  }
  if ((param_2 + param_3 != (wchar_t *)0x0) && (param_2 == (wchar_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00665330("basic_string::_S_construct null not valid");
  }
  __n = param_3 * 4 >> 2;
  psVar1 = (size_t *)FUN_0066c5b8(__n,0,param_4);
  if (__n == 1) {
    *(wchar_t *)(psVar1 + 3) = *param_2;
  }
  else {
    wmemcpy((wchar_t *)(psVar1 + 3),param_2,__n);
  }
  if (psVar1 != &DAT_007fd300) {
    *(undefined4 *)(psVar1 + 2) = 0;
    *psVar1 = __n;
    *(undefined4 *)((long)psVar1 + param_3 * 4 + 0x18) = 0;
  }
  *param_1 = psVar1 + 3;
  return;
}


