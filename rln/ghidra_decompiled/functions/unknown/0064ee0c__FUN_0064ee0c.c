/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064ee0c
 * Function: FUN_0064ee0c
 * Signature: undefined FUN_0064ee0c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064ee0c(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58);
  param_2[1] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60);
                    /* try { // try from 0064ee28 to 0074eeb7 has its CatchHandler @ 0064e4fc */
                    /* catch() { ... } // from try @ 0064ee00 with catch @ 0064ee2c */
  param_2[2] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68);
                    /* catch() { ... } // from try @ 0064e6d4 with catch @ 0064ee30 */
                    /* catch() { ... } // from try @ 0064e6f8 with catch @ 0064ee34 */
  param_2[3] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70);
  param_2[4] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78);
  param_2[5] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x80);
  param_2[6] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x88);
  return;
}


