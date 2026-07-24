/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006602e0
 * Function: FUN_006602e0
 * Signature: undefined FUN_006602e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006602e0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1];
                    /* try { // try from 00660304 to 0076033f has its CatchHandler @ 006607c4 */
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  param_1[1] = 0;
  FUN_006210e8((long)param_1 + *(long *)(lVar1 + -0x18),0);
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  FUN_0065edec(param_1 + 2);
  FUN_006210e8((long)param_1 + *(long *)(*param_1 + -0x18),param_1 + 2);
  return;
}


