/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b7d0
 * Function: FUN_0064b7d0
 * Signature: undefined FUN_0064b7d0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0064b7d0(long *param_1)

{
  ulong uVar1;
  
                    /* try { // try from 0064b7d8 to 0074b7ff has its CatchHandler @ 0064b920 */
  if ((uint *)param_1[2] < (uint *)param_1[3]) {
    return (ulong)*(uint *)param_1[2];
  }
  uVar1 = (**(code **)(*param_1 + 0x48))();
                    /* try { // try from 0064b800 to 0074b947 has its CatchHandler @ 0064b5c4 */
  return uVar1;
}


