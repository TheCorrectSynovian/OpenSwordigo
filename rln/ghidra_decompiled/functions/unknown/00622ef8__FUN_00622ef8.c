/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00622ef8
 * Function: FUN_00622ef8
 * Signature: undefined FUN_00622ef8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00622ef8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
                    /* try { // try from 00622f04 to 00722f7b has its CatchHandler @ 00622f84 */
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[1];
  return;
}


