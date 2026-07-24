/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006443b0
 * Function: FUN_006443b0
 * Signature: undefined FUN_006443b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_006443b0(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  
                    /* try { // try from 006443b0 to 007443bf has its CatchHandler @ 00644a54 */
  if ((*(uint *)(param_1 + 0x40) >> 3 & 1) != 0) {
    pbVar1 = *(byte **)(param_1 + 0x28);
    pbVar2 = *(byte **)(param_1 + 0x18);
    if ((pbVar1 != (byte *)0x0) && (pbVar2 < pbVar1)) {
      *(byte **)(param_1 + 0x18) = pbVar1;
      pbVar2 = pbVar1;
    }
    if (*(byte **)(param_1 + 0x10) < pbVar2) {
      return (ulong)**(byte **)(param_1 + 0x10);
    }
  }
  return 0xffffffff;
}


