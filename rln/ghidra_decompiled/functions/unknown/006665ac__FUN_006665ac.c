/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006665ac
 * Function: FUN_006665ac
 * Signature: undefined FUN_006665ac(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006665ac(long *param_1,ulong param_2,undefined8 param_3)

{
  if (param_2 <= *(ulong *)(*param_1 + -0x18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)",param_3,param_2);
}


