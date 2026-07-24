/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00621640
 * Function: FUN_00621640
 * Signature: undefined FUN_00621640(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00621640(ulong param_1,uint param_2)

{
  long lVar1;
  
                    /* try { // try from 00621640 to 00721657 has its CatchHandler @ 006222e4 */
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | param_2;
  if ((param_2 & *(uint *)(param_1 + 0x1c)) == 0) {
    return param_1;
  }
  lVar1 = __cxa_rethrow();
  return (ulong)(*(int *)(lVar1 + 0x20) == 0);
}


