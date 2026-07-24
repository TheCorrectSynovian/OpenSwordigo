/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00669cb8
 * Function: FUN_00669cb8
 * Signature: undefined FUN_00669cb8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00669cb8(long *param_1,ulong param_2,ulong param_3,ulong param_4,byte param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(*param_1 + -0x18);
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00669d18 with catch @ 00669d80 */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
                 param_2,uVar2);
  }
                    /* catch() { ... } // from try @ 00669aec with catch @ 00669cf0 */
                    /* catch() { ... } // from try @ 00669b48 with catch @ 00669cf4
                       catch() { ... } // from try @ 00669bb8 with catch @ 00669cf4 */
  uVar1 = uVar2 - param_2;
  if (param_3 < uVar2 - param_2) {
    uVar1 = param_3;
  }
                    /* catch() { ... } // from try @ 00669b8c with catch @ 00669cfc */
  if (param_4 <= (0x3ffffffffffffff9 - uVar2) + uVar1) {
    FUN_00668cb8();
    if (param_4 != 0) {
                    /* try { // try from 00669d18 to 00769d1f has its CatchHandler @ 00669d80 */
                    /* try { // try from 00669d20 to 00769d83 has its CatchHandler @ 00669ac4 */
      if (param_4 == 1) {
        *(byte *)(*param_1 + param_2) = param_5;
        return param_1;
      }
      memset((void *)(*param_1 + param_2),(uint)param_5,param_4);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066554c("basic_string::_M_replace_aux");
}


