/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00671b20
 * Function: FUN_00671b20
 * Signature: undefined FUN_00671b20(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00671b20(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
                    /* try { // try from 00671b2c to 00771b3f has its CatchHandler @ 00672044 */
  lVar1 = param_2[1];
                    /* try { // try from 00671b40 to 00771b4b has its CatchHandler @ 00672050 */
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  param_1[1] = 0;
  FUN_006219c8((long)param_1 + *(long *)(lVar1 + -0x18),param_3);
  lVar1 = param_2[3];
  param_1[2] = lVar1;
  lVar1 = *(long *)(lVar1 + -0x18);
  *(long *)((long)param_1 + lVar1 + 0x10) = param_2[4];
  FUN_006219c8((long)param_1 + lVar1 + 0x10,param_3);
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[5];
  param_1[2] = param_2[6];
  return;
}


