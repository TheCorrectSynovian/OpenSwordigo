/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00660bc8
 * Function: FUN_00660bc8
 * Signature: undefined FUN_00660bc8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00660bc8(long *param_1,long *param_2)

{
  long lVar1;
  
                    /* try { // try from 00660bd8 to 00760bdf has its CatchHandler @ 00660d94 */
                    /* try { // try from 00660be4 to 00760bf7 has its CatchHandler @ 00660d7c */
  lVar1 = param_2[1];
  *param_1 = lVar1;
  lVar1 = *(long *)(lVar1 + -0x18);
  *(long *)((long)param_1 + lVar1) = param_2[2];
  FUN_006210e8((long)param_1 + lVar1,0);
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[3];
  FUN_0065edec(param_1 + 1);
  FUN_006210e8((long)param_1 + *(long *)(*param_1 + -0x18),param_1 + 1);
  return;
}


