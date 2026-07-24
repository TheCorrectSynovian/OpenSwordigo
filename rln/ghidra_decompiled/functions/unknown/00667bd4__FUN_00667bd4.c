/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00667bd4
 * Function: FUN_00667bd4
 * Signature: undefined FUN_00667bd4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00667bd4(long *param_1,long *param_2)

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
                    /* try { // try from 00667bf0 to 00767bf7 has its CatchHandler @ 00668038 */
  *param_1 = lVar1;
  *param_2 = lVar2;
                    /* try { // try from 00667bf8 to 00767c07 has its CatchHandler @ 0066803c */
  return;
}


