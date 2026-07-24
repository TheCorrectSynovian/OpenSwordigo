/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b3bc
 * Function: FUN_0064b3bc
 * Signature: undefined FUN_0064b3bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0064b3bc(long *param_1)

{
  ulong uVar1;
  
  uVar1 = param_1[2];
  if ((ulong)param_1[1] < uVar1) {
    param_1[2] = uVar1 - 1;
    return (ulong)*(byte *)(uVar1 - 1);
  }
                    /* try { // try from 0064b3ec to 0074b413 has its CatchHandler @ 0064b430 */
  uVar1 = (**(code **)(*param_1 + 0x58))(param_1,0xffffffff);
  return uVar1;
}


