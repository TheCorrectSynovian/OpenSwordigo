/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066e9f8
 * Function: FUN_0066e9f8
 * Signature: undefined FUN_0066e9f8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066e9f8(undefined8 *param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = (undefined *)*param_1;
  lVar3 = *(long *)(puVar2 + -0x18);
  uVar1 = lVar3 + 1;
  if ((*(ulong *)(puVar2 + -0x10) < uVar1) || (0 < *(int *)(puVar2 + -8))) {
    FUN_0066e318(param_1,uVar1);
    puVar2 = (undefined *)*param_1;
    lVar3 = *(long *)(puVar2 + -0x18);
  }
  *(undefined4 *)(puVar2 + lVar3 * 4) = param_2;
  if (puVar2 == &DAT_007fd318) {
    return;
  }
  *(ulong *)(puVar2 + -0x18) = uVar1;
  *(undefined4 *)(puVar2 + -8) = 0;
  *(undefined4 *)(puVar2 + uVar1 * 4) = 0;
  return;
}


