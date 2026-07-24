/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00669a48
 * Function: FUN_00669a48
 * Signature: undefined FUN_00669a48(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00669a48(long *param_1,long param_2,undefined1 param_3)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 00669990 with catch @ 00669a50 */
  param_2 = param_2 - *param_1;
  if (*(long *)(*param_1 + -0x18) != 0x3ffffffffffffff9) {
    FUN_00668cb8(param_1,param_2,0,1);
    *(undefined1 *)(*param_1 + param_2) = param_3;
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + -8) = 0xffffffff;
    return lVar1 + param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066554c("basic_string::_M_replace_aux");
}


