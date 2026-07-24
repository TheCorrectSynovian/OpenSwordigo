/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066cf2c
 * Function: FUN_0066cf2c
 * Signature: undefined FUN_0066cf2c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066cf2c(undefined8 param_1,undefined8 param_2,long *param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(*param_3 + -0x18);
  if (param_4 <= uVar2) {
    uVar1 = uVar2 - param_4;
    if (param_5 < uVar2 - param_4) {
      uVar1 = param_5;
    }
    FUN_0066cd30(param_1,param_2,*param_3 + param_4 * 4,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::insert",
               param_4,uVar2);
}


