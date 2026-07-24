/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d6c0
 * Function: FUN_0066d6c0
 * Signature: undefined FUN_0066d6c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066d6c0(long *param_1,long param_2,ulong param_3,wchar_t param_4)

{
  param_2 = param_2 - *param_1;
  if (0xffffffffffffffeU - *(long *)(*param_1 + -0x18) < param_3) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0066d750 to 0076d757 has its CatchHandler @ 0066d7c0 */
    FUN_0066554c("basic_string::_M_replace_aux",param_2 >> 2);
  }
  FUN_0066c650(param_1,param_2 >> 2,0,param_3);
  if (param_3 != 0) {
    if (param_3 != 1) {
      wmemset((wchar_t *)(*param_1 + param_2),param_4,param_3);
      return;
    }
                    /* catch() { ... } // from try @ 0066d7d4 with catch @ 0066d734 */
    *(wchar_t *)(*param_1 + param_2) = param_4;
  }
  return;
}


