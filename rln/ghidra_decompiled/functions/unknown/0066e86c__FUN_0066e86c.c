/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066e86c
 * Function: FUN_0066e86c
 * Signature: undefined FUN_0066e86c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0066e86c(undefined8 *param_1,ulong param_2,wchar_t param_3)

{
  ulong uVar1;
  wchar_t *__s;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = (undefined *)*param_1;
  lVar3 = *(long *)(puVar2 + -0x18);
  if (0xffffffffffffffeU - lVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::append");
  }
  uVar1 = param_2 + lVar3;
  if ((*(ulong *)(puVar2 + -0x10) < uVar1) || (0 < *(int *)(puVar2 + -8))) {
    FUN_0066e318(param_1,uVar1);
    puVar2 = (undefined *)*param_1;
    lVar3 = *(long *)(puVar2 + -0x18);
    __s = (wchar_t *)(puVar2 + lVar3 * 4);
  }
  else {
    __s = (wchar_t *)(puVar2 + lVar3 * 4);
  }
  if (param_2 == 1) {
    *(wchar_t *)(puVar2 + lVar3 * 4) = param_3;
  }
  else {
    wmemset(__s,param_3,param_2);
    puVar2 = (undefined *)*param_1;
  }
  if (puVar2 == &DAT_007fd318) {
    return 0;
  }
  *(ulong *)(puVar2 + -0x18) = uVar1;
  *(undefined4 *)(puVar2 + -8) = 0;
  *(undefined4 *)(puVar2 + uVar1 * 4) = 0;
  return 0;
}


