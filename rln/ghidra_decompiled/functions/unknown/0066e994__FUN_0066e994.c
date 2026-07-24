/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066e994
 * Function: FUN_0066e994
 * Signature: undefined FUN_0066e994(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066e994(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*param_1 + -0x18);
  if (0xffffffffffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::resize");
  }
  if (uVar1 < param_2) {
    if (param_2 - uVar1 != 0) {
      FUN_0066e86c(param_1,param_2 - uVar1);
      return;
    }
  }
  else if (param_2 < uVar1) {
    FUN_0066c650(param_1,param_2,uVar1 - param_2,0);
    return;
  }
  return;
}


