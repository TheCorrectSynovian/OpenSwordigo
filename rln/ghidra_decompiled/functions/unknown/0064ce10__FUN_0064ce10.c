/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064ce10
 * Function: FUN_0064ce10
 * Signature: undefined FUN_0064ce10(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0064ce10(int *param_1,int *param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = 0;
    while( true ) {
      if (*param_1 == 1) {
        iVar1 = iVar1 + 1;
      }
      if (param_1 == param_2) break;
      param_1 = *(int **)(param_1 + 2);
    }
    return iVar1;
  }
  return 0;
}


