/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00654b08
 * Function: FUN_00654b08
 * Signature: undefined FUN_00654b08(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00654b08(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    return 0xffffffff;
  }
  if (*(uint *)(param_1 + 1) != 0xffffffff) {
    return (ulong)*(uint *)(param_1 + 1);
  }
  if ((uint *)plVar2[2] < (uint *)plVar2[3]) {
    uVar1 = (ulong)*(uint *)plVar2[2];
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
  }
  if ((int)uVar1 != -1) {
    *(int *)(param_1 + 1) = (int)uVar1;
    return uVar1;
  }
  *param_1 = 0;
  return uVar1;
}


