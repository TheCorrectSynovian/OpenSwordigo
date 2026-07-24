/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b874
 * Function: FUN_0064b874
 * Signature: undefined FUN_0064b874(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0064b874(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = param_1[2];
  if ((ulong)param_1[1] < uVar2) {
    uVar1 = *(uint *)(uVar2 - 4);
    param_1[2] = uVar2 - 4;
    return (ulong)uVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1,0xffffffff);
  return uVar2;
}


