/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062cab4
 * Function: FUN_0062cab4
 * Signature: undefined FUN_0062cab4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062cab4(long param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58);
  param_2[1] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60);
  param_2[2] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68);
  param_2[3] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x70);
  param_2[4] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78);
  param_2[5] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x80);
                    /* try { // try from 0062cb00 to 0072cb43 has its CatchHandler @ 0062ce00 */
  param_2[6] = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x88);
  return;
}


