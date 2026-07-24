/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667928
 * Function: FUN_00667928
 * Signature: undefined FUN_00667928(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00667928(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + -8) < 0) {
    *(undefined4 *)(lVar2 + -8) = 0;
  }
  lVar1 = *param_2;
  if (*(int *)(lVar1 + -8) < 0) {
    *(undefined4 *)(lVar1 + -8) = 0;
  }
  *param_1 = lVar1;
                    /* try { // try from 00667948 to 0076794f has its CatchHandler @ 006680b8 */
  *param_2 = lVar2;
  return;
}


