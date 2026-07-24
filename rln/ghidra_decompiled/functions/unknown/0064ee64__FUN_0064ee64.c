/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064ee64
 * Function: FUN_0064ee64
 * Signature: undefined FUN_0064ee64(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064ee64(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x90);
  param_2[1] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x98);
  param_2[2] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa0);
  param_2[3] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa8);
  param_2[4] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb0);
                    /* catch() { ... } // from try @ 0064e6ec with catch @ 0064eea0 */
                    /* catch() { ... } // from try @ 0064e644 with catch @ 0064eea4 */
  param_2[5] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb8);
  param_2[6] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xc0);
                    /* try { // try from 0064eeb8 to 0074eefb has its CatchHandler @ 0064eeb8
                       catch() { ... } // from try @ 0064eeb8 with catch @ 0064eeb8
                       catch() { ... } // from try @ 0064ef00 with catch @ 0064eeb8
                       catch() { ... } // from try @ 0064f0d0 with catch @ 0064eeb8
                       catch() { ... } // from try @ 0064f3f8 with catch @ 0064eeb8
                       catch() { ... } // from try @ 0064f4d4 with catch @ 0064eeb8
                       catch() { ... } // from try @ 0064f6dc with catch @ 0064eeb8
                       catch() { ... } // from try @ 0064f80c with catch @ 0064eeb8
                       catch() { ... } // from try @ 0064f980 with catch @ 0064eeb8 */
  return;
}


