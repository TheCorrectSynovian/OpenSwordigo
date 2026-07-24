/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eee84
 * Function: FUN_005eee84
 * Signature: undefined FUN_005eee84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_005eee84(double *param_1,double *param_2)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 1) == *(int *)(param_2 + 1)) {
    bVar1 = true;
    switch(*(int *)(param_1 + 1)) {
    case 0:
      break;
    case 1:
      bVar1 = *(int *)param_1 == *(int *)param_2;
      break;
    default:
      bVar1 = *param_1 == *param_2;
      break;
    case 3:
      bVar1 = false;
      if (!NAN(*param_1) && !NAN(*param_2)) {
        bVar1 = *param_1 == *param_2;
      }
    }
    return bVar1;
  }
  return false;
}


