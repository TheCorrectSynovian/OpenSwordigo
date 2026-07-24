/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620c94
 * Function: FUN_00620c94
 * Signature: undefined FUN_00620c94(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00620c94(ulong param_1,uint param_2)

{
  long lVar1;
  
                    /* try { // try from 00620ca4 to 00720cab has its CatchHandler @ 0062211c */
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | param_2;
  if ((param_2 & *(uint *)(param_1 + 0x1c)) == 0) {
    return param_1;
  }
  lVar1 = __cxa_rethrow();
  return (ulong)(*(int *)(lVar1 + 0x20) == 0);
}


