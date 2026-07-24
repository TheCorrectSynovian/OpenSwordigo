/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d97c
 * Function: FUN_0066d97c
 * Signature: undefined FUN_0066d97c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066d97c(undefined8 *param_1,wchar_t *param_2,undefined8 param_3)

{
  size_t sVar1;
  size_t *psVar2;
  long lVar3;
  
  if (param_2 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00665330("basic_string::_S_construct null not valid");
  }
  sVar1 = wcslen(param_2);
  lVar3 = sVar1 * 4;
  if (lVar3 != 0) {
    sVar1 = lVar3 >> 2;
    psVar2 = (size_t *)FUN_0066c5b8(sVar1,0,param_3);
    if (sVar1 == 1) {
      *(wchar_t *)(psVar2 + 3) = *param_2;
    }
    else {
      wmemcpy((wchar_t *)(psVar2 + 3),param_2,sVar1);
    }
    if (psVar2 != &DAT_007fd300) {
      *(undefined4 *)(psVar2 + 2) = 0;
      *psVar2 = sVar1;
      *(undefined4 *)((long)psVar2 + lVar3 + 0x18) = 0;
    }
    *param_1 = psVar2 + 3;
    return;
  }
  *param_1 = &DAT_007fd318;
  return;
}


