/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b318
 * Function: FUN_0064b318
 * Signature: undefined FUN_0064b318(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0064b318(long *param_1)

{
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 0064b2e4 with catch @ 0064b31c */
  if ((byte *)param_1[2] < (byte *)param_1[3]) {
    return (ulong)*(byte *)param_1[2];
  }
  uVar1 = (**(code **)(*param_1 + 0x48))();
  return uVar1;
}


