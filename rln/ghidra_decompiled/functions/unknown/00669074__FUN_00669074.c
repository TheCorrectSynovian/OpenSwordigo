/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00669074
 * Function: FUN_00669074
 * Signature: undefined FUN_00669074(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00669074(long *param_1,long param_2,long param_3,ulong param_4,byte param_5)

{
                    /* try { // try from 00669098 to 007690a3 has its CatchHandler @ 00669194 */
  if ((ulong)((0x3ffffffffffffff9 - *(long *)(*param_1 + -0x18)) + param_3) < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_M_replace_aux");
  }
  FUN_00668cb8();
  if (param_4 != 0) {
                    /* try { // try from 006690bc to 007690c3 has its CatchHandler @ 0066922c */
                    /* try { // try from 006690c4 to 007691af has its CatchHandler @ 00668ff8 */
    if (param_4 == 1) {
      *(byte *)(*param_1 + param_2) = param_5;
      return param_1;
    }
    memset((void *)(*param_1 + param_2),(uint)param_5,param_4);
  }
  return param_1;
}


