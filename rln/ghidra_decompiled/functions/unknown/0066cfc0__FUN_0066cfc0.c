/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066cfc0
 * Function: FUN_0066cfc0
 * Signature: undefined FUN_0066cfc0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066cfc0(long *param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*param_1 + -0x18) - 1;
  if (uVar1 <= *(ulong *)(*param_1 + -0x18)) {
    FUN_0066c650(param_1,uVar1,1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::erase");
}


