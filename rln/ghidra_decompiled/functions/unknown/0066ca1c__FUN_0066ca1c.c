/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066ca1c
 * Function: FUN_0066ca1c
 * Signature: undefined FUN_0066ca1c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0066ca1c(long *param_1,long param_2,long param_3,ulong param_4,wchar_t param_5)

{
                    /* try { // try from 0066ca20 to 0076cac7 has its CatchHandler @ 0066c880 */
  if ((ulong)((0xffffffffffffffe - *(long *)(*param_1 + -0x18)) + param_3) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_M_replace_aux");
  }
  FUN_0066c650();
  if (param_4 != 0) {
    if (param_4 == 1) {
      *(wchar_t *)(*param_1 + param_2 * 4) = param_5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0066c970 with catch @ 0066caa4
                        */
      return param_1;
    }
    wmemset((wchar_t *)(*param_1 + param_2 * 4),param_5,param_4);
  }
  return param_1;
}


