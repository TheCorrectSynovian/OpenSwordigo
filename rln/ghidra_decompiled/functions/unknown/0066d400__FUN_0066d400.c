/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d400
 * Function: FUN_0066d400
 * Signature: undefined FUN_0066d400(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0066d400(long *param_1,size_t param_2,wchar_t param_3)

{
  undefined8 uVar1;
  
                    /* try { // try from 0066d41c to 0076d443 has its CatchHandler @ 0066d460 */
  uVar1 = *(undefined8 *)(*param_1 + -0x18);
  if (0xffffffffffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_M_replace_aux",*param_1,uVar1);
  }
  FUN_0066c650(param_1,0,uVar1,param_2);
  if (param_2 != 0) {
                    /* try { // try from 0066d444 to 0076d463 has its CatchHandler @ 0066d144 */
    if (param_2 == 1) {
      *(wchar_t *)*param_1 = param_3;
      return param_1;
    }
    wmemset((wchar_t *)*param_1,param_3,param_2);
  }
                    /* catch() { ... } // from try @ 0066d41c with catch @ 0066d460 */
  return param_1;
}


