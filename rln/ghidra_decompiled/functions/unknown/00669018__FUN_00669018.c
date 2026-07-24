/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00669018
 * Function: FUN_00669018
 * Signature: undefined FUN_00669018(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00669018(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00669020 to 00769033 has its CatchHandler @ 00669228 */
  if (param_3 - param_2 == 0) {
                    /* try { // try from 00669038 to 00769043 has its CatchHandler @ 006691c0 */
    return param_2;
  }
  lVar2 = *param_1;
                    /* try { // try from 00669044 to 0076906f has its CatchHandler @ 00668ff8 */
  FUN_00668cb8(param_1,param_2 - lVar2,param_3 - param_2,0);
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + -8) = 0xffffffff;
                    /* try { // try from 00669070 to 00769077 has its CatchHandler @ 0066922c */
  return lVar1 + (param_2 - lVar2);
}


