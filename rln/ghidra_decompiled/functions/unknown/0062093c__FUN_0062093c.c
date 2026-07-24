/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062093c
 * Function: FUN_0062093c
 * Signature: undefined FUN_0062093c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0062093c(long param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 < param_3) {
    do {
      *(undefined4 *)(param_4 + lVar1 * 4) =
           *(undefined4 *)(param_1 + (ulong)*(byte *)(param_2 + lVar1) * 4 + 0x9c);
                    /* try { // try from 0062095c to 00720967 has its CatchHandler @ 00622404 */
      lVar1 = lVar1 + 1;
    } while (lVar1 != param_3 - param_2);
  }
                    /* try { // try from 00620968 to 0072097b has its CatchHandler @ 00622400 */
  return param_3;
}


