/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00669c14
 * Function: FUN_00669c14
 * Signature: undefined FUN_00669c14(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00669c14(long *param_1,long param_2,long param_3,ulong param_4,byte param_5)

{
  long lVar1;
  
  lVar1 = param_2 - *param_1;
  if ((ulong)((0x3ffffffffffffff9 - *(long *)(*param_1 + -0x18)) + (param_3 - param_2)) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_M_replace_aux");
  }
  FUN_00668cb8(param_1,lVar1);
  if (param_4 != 0) {
    if (param_4 == 1) {
      *(byte *)(*param_1 + lVar1) = param_5;
      return param_1;
    }
    memset((void *)(*param_1 + lVar1),(uint)param_5,param_4);
  }
                    /* catch() { ... } // from try @ 00669b38 with catch @ 00669c84 */
                    /* catch() { ... } // from try @ 00669b04 with catch @ 00669c88 */
  return param_1;
}


