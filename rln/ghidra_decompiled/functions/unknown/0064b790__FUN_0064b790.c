/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b790
 * Function: FUN_0064b790
 * Signature: undefined FUN_0064b790(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0064b790(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)param_1[2];
  if (puVar3 < (uint *)param_1[3]) {
    uVar1 = *puVar3;
    param_1[2] = (long)(puVar3 + 1);
    return (ulong)uVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0x50))();
  return uVar2;
}


