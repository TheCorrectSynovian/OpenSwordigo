/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00669d84
 * Function: FUN_00669d84
 * Signature: undefined FUN_00669d84(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00669d84(long *param_1,long param_2,ulong param_3,byte param_4)

{
                    /* try { // try from 00669d84 to 00769daf has its CatchHandler @ 00669d84
                       catch() { ... } // from try @ 00669d84 with catch @ 00669d84
                       catch() { ... } // from try @ 00669dd4 with catch @ 00669d84 */
  param_2 = param_2 - *param_1;
                    /* try { // try from 00669db0 to 00769dc3 has its CatchHandler @ 00669f18 */
  if (0x3ffffffffffffff9U - *(long *)(*param_1 + -0x18) < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_M_replace_aux");
  }
                    /* try { // try from 00669dc8 to 00769dd3 has its CatchHandler @ 00669ea8 */
  FUN_00668cb8(param_1,param_2,0,param_3);
  if (param_3 != 0) {
                    /* try { // try from 00669dd4 to 00769f1b has its CatchHandler @ 00669d84 */
    if (param_3 != 1) {
      memset((void *)(*param_1 + param_2),(uint)param_4,param_3);
      return;
    }
    *(byte *)(*param_1 + param_2) = param_4;
  }
  return;
}


