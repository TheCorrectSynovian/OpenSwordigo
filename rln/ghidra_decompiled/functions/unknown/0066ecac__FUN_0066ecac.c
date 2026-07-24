/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066ecac
 * Function: FUN_0066ecac
 * Signature: undefined FUN_0066ecac(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


size_t * FUN_0066ecac(size_t *param_1,undefined8 param_2,long param_3)

{
  size_t *psVar1;
  size_t __n;
  
  psVar1 = (size_t *)FUN_0066c5b8(param_3 + *param_1,param_1[1],param_2);
  __n = *param_1;
  if (__n != 0) {
    if (__n == 1) {
      *(int *)(psVar1 + 3) = (int)param_1[3];
    }
    else {
      wmemcpy((wchar_t *)(psVar1 + 3),(wchar_t *)(param_1 + 3),__n);
      __n = *param_1;
    }
  }
  if (psVar1 != &DAT_007fd300) {
    *(undefined4 *)(psVar1 + 2) = 0;
    *psVar1 = __n;
    *(undefined4 *)((long)psVar1 + __n * 4 + 0x18) = 0;
    return psVar1 + 3;
  }
  return (size_t *)&DAT_007fd318;
}


