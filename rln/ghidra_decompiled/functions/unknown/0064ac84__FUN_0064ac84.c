/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064ac84
 * Function: FUN_0064ac84
 * Signature: undefined FUN_0064ac84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0064ac84(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  if ((int)uVar1 != -1) {
                    /* try { // try from 0064aca8 to 0074accf has its CatchHandler @ 0064adb4 */
    uVar1 = (ulong)*(byte *)param_1[2];
    param_1[2] = (long)((byte *)param_1[2] + 1);
  }
  return uVar1;
}


