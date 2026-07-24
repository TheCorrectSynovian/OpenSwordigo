/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00670710
 * Function: FUN_00670710
 * Signature: undefined FUN_00670710(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00670710(undefined8 *param_1,char *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  iVar1 = strcmp(param_2,"C");
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00665808(&DAT_0069fcb0);
}


