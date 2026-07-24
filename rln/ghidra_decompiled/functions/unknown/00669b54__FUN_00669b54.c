/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00669b54
 * Function: FUN_00669b54
 * Signature: undefined FUN_00669b54(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00669b54(long *param_1,ulong param_2,ulong param_3,byte param_4)

{
  if (*(ulong *)(*param_1 + -0x18) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::insert",
                 param_2);
  }
                    /* try { // try from 00669b8c to 00769b8f has its CatchHandler @ 00669cfc */
  if (param_3 <= 0x3ffffffffffffff9 - *(ulong *)(*param_1 + -0x18)) {
    FUN_00668cb8(param_1,param_2,0,param_3);
    if (param_3 != 0) {
      if (param_3 == 1) {
        *(byte *)(*param_1 + param_2) = param_4;
        return param_1;
      }
                    /* try { // try from 00669bb8 to 00769bbf has its CatchHandler @ 00669cf4 */
                    /* try { // try from 00669bc0 to 00769d17 has its CatchHandler @ 00669ac4 */
      memset((void *)(*param_1 + param_2),(uint)param_4,param_3);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066554c("basic_string::_M_replace_aux");
}


