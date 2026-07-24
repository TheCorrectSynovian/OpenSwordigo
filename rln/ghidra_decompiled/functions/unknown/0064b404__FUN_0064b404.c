/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b404
 * Function: FUN_0064b404
 * Signature: undefined FUN_0064b404(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0064b404(long *param_1,byte param_2)

{
  ulong uVar1;
  
                    /* try { // try from 0064b414 to 0074b443 has its CatchHandler @ 0064b3ac */
  if ((byte *)param_1[5] < (byte *)param_1[6]) {
    *(byte *)param_1[5] = param_2;
                    /* catch() { ... } // from try @ 0064b3ec with catch @ 0064b430 */
    param_1[5] = param_1[5] + 1;
    return (ulong)param_2;
  }
  uVar1 = (**(code **)(*param_1 + 0x68))();
  return uVar1;
}


