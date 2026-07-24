/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00669ac0
 * Function: FUN_00669ac0
 * Signature: undefined FUN_00669ac0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00669ac0(long *param_1,size_t param_2,byte param_3)

{
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 00669978 with catch @ 00669ac0 */
                    /* try { // try from 00669ac4 to 00769aeb has its CatchHandler @ 00669ac4
                       catch() { ... } // from try @ 00669ac4 with catch @ 00669ac4
                       catch() { ... } // from try @ 00669b10 with catch @ 00669ac4
                       catch() { ... } // from try @ 00669bc0 with catch @ 00669ac4
                       catch() { ... } // from try @ 00669d20 with catch @ 00669ac4 */
                    /* try { // try from 00669aec to 00769aff has its CatchHandler @ 00669cf0 */
  uVar1 = *(undefined8 *)(*param_1 + -0x18);
  if (0x3ffffffffffffff9 < param_2) {
                    /* try { // try from 00669b48 to 00769b5b has its CatchHandler @ 00669cf4 */
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_M_replace_aux",*param_1,uVar1);
  }
  FUN_00668cb8(param_1,0,uVar1,param_2);
  if (param_2 != 0) {
                    /* try { // try from 00669b04 to 00769b0f has its CatchHandler @ 00669c88 */
    if (param_2 == 1) {
      *(byte *)*param_1 = param_3;
                    /* try { // try from 00669b38 to 00769b47 has its CatchHandler @ 00669c84 */
      return param_1;
    }
                    /* try { // try from 00669b10 to 00769b37 has its CatchHandler @ 00669ac4 */
    memset((byte *)*param_1,(uint)param_3,param_2);
  }
  return param_1;
}


