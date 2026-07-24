/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00671cf8
 * Function: FUN_00671cf8
 * Signature: undefined FUN_00671cf8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00671cf8(long *param_1,long *param_2)

{
  long lVar1;
  
                    /* try { // try from 00671d0c to 00771d13 has its CatchHandler @ 0067222c */
  lVar1 = param_2[1];
                    /* try { // try from 00671d14 to 00771d1f has its CatchHandler @ 00672234 */
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  param_1[1] = 0;
  FUN_006219c8((long)param_1 + *(long *)(lVar1 + -0x18),0);
  lVar1 = param_2[3];
  param_1[2] = lVar1;
  lVar1 = *(long *)(lVar1 + -0x18);
  *(long *)((long)param_1 + lVar1 + 0x10) = param_2[4];
  FUN_006219c8((long)param_1 + lVar1 + 0x10,0);
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[5];
  param_1[2] = param_2[6];
  return;
}


