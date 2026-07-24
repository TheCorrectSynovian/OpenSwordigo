/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067253c
 * Function: FUN_0067253c
 * Signature: undefined FUN_0067253c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0067253c(undefined1 *param_1,undefined1 param_2)

{
  long lVar1;
  
                    /* try { // try from 00672540 to 0077254b has its CatchHandler @ 00672830 */
                    /* try { // try from 0067254c to 00772557 has its CatchHandler @ 00672358 */
  lVar1 = *(long *)(param_1 + 0x100);
                    /* try { // try from 00672558 to 0077256b has its CatchHandler @ 006727bc */
  if (lVar1 != 0xff) {
    *(long *)(param_1 + 0x100) = lVar1 + 1;
    param_1[lVar1] = param_2;
    param_1[0x108] = param_2;
                    /* try { // try from 00672570 to 0077257b has its CatchHandler @ 006727c0 */
    return;
  }
  param_1[0xff] = 0;
  (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
  *(undefined8 *)(param_1 + 0x100) = 1;
  *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
  *param_1 = param_2;
  param_1[0x108] = param_2;
  return;
}


