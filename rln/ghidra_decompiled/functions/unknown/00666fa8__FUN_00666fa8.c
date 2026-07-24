/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00666fa8
 * Function: FUN_00666fa8
 * Signature: undefined FUN_00666fa8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00666fa8(long *param_1,long *param_2)

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
  *param_2 = lVar2;
  return;
}


