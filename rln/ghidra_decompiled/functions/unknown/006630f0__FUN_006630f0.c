/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006630f0
 * Function: FUN_006630f0
 * Signature: undefined FUN_006630f0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006630f0(long *param_1,long *param_2)

{
  long lVar1;
  
                    /* try { // try from 0066310c to 0076310f has its CatchHandler @ 00663528 */
  lVar1 = param_2[1];
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[2];
  param_1[1] = 0;
  FUN_006219c8((long)param_1 + *(long *)(lVar1 + -0x18),0);
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  FUN_00662010(param_1 + 2);
                    /* try { // try from 00663158 to 0076315b has its CatchHandler @ 00663520 */
  FUN_006219c8((long)param_1 + *(long *)(*param_1 + -0x18),param_1 + 2);
  return;
}


