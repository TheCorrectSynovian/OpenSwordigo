/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d390
 * Function: FUN_0066d390
 * Signature: undefined FUN_0066d390(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0066d390(long *param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  
  param_2 = param_2 - *param_1;
                    /* try { // try from 0066d3ac to 0076d3d3 has its CatchHandler @ 0066d3e8 */
  if (*(long *)(*param_1 + -0x18) != 0xffffffffffffffe) {
    FUN_0066c650(param_1,param_2 >> 2,0,1);
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + param_2) = param_3;
    *(undefined4 *)(lVar1 + -8) = 0xffffffff;
                    /* catch() { ... } // from try @ 0066d3ac with catch @ 0066d3e8 */
                    /* catch() { ... } // from try @ 0066d324 with catch @ 0066d3ec */
    return lVar1 + param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066554c("basic_string::_M_replace_aux",param_2 >> 2);
}


