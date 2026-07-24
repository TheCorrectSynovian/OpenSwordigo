/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066c918
 * Function: FUN_0066c918
 * Signature: undefined FUN_0066c918(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0066c918(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  if (param_2 <= *(ulong *)(*param_1 + -0x18)) {
    uVar1 = *(ulong *)(*param_1 + -0x18) - param_2;
    if (param_3 < uVar1) {
      uVar1 = param_3;
    }
    FUN_0066c650(param_1,param_2,uVar1,0);
    return param_1;
  }
                    /* try { // try from 0066c970 to 0076ca1f has its CatchHandler @ 0066caa4 */
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::erase",
               param_2);
}


