/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668fd4
 * Function: FUN_00668fd4
 * Signature: undefined FUN_00668fd4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00668fd4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
                    /* try { // try from 00668ff8 to 0076901f has its CatchHandler @ 00668ff8
                       catch() { ... } // from try @ 00668ff8 with catch @ 00668ff8
                       catch() { ... } // from try @ 00669044 with catch @ 00668ff8
                       catch() { ... } // from try @ 006690c4 with catch @ 00668ff8
                       catch() { ... } // from try @ 006691b8 with catch @ 00668ff8 */
  FUN_00668cb8(param_1,param_2 - lVar2,1,0);
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + -8) = 0xffffffff;
  return lVar1 + (param_2 - lVar2);
}


