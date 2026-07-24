/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066918c
 * Function: FUN_0066918c
 * Signature: undefined FUN_0066918c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_0066918c(undefined8 *param_1,undefined1 *param_2,size_t param_3)

{
  undefined1 *__dest;
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 00669098 with catch @ 00669194 */
                    /* try { // try from 006691b0 to 007691b7 has its CatchHandler @ 006691bc */
  __dest = (undefined1 *)*param_1;
                    /* try { // try from 006691b8 to 0076928f has its CatchHandler @ 00668ff8 */
  puVar1 = (undefined8 *)(__dest + -0x18);
                    /* catch() { ... } // from try @ 006691b0 with catch @ 006691bc */
                    /* catch() { ... } // from try @ 00669038 with catch @ 006691c0 */
  if (0x3ffffffffffffff9 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c(&LAB_0069fa60);
  }
  if (((param_2 < __dest) || (__dest + *(long *)(__dest + -0x18) < param_2)) ||
     (0 < *(int *)(__dest + -8))) {
    FUN_00668cb8(param_1,0,*(long *)(__dest + -0x18),param_3);
    if (param_3 == 0) {
      return param_1;
    }
    if (param_3 != 1) {
                    /* try { // try from 00669290 to 007692bf has its CatchHandler @ 00669290
                       catch() { ... } // from try @ 00669290 with catch @ 00669290
                       catch() { ... } // from try @ 006692e4 with catch @ 00669290
                       catch() { ... } // from try @ 0066949c with catch @ 00669290
                       catch() { ... } // from try @ 006695ec with catch @ 00669290
                       catch() { ... } // from try @ 006696b4 with catch @ 00669290 */
      memcpy((undefined1 *)*param_1,param_2,param_3);
      return param_1;
    }
    *(undefined1 *)*param_1 = *param_2;
    return param_1;
  }
  if ((ulong)((long)param_2 - (long)__dest) < param_3) {
    if (param_2 == __dest) goto LAB_00669244;
    if (param_3 != 1) {
      memmove(__dest,param_2,param_3);
      __dest = (undefined1 *)*param_1;
      puVar1 = (undefined8 *)(__dest + -0x18);
      goto LAB_00669244;
    }
  }
  else if (param_3 != 1) {
    memcpy(__dest,param_2,param_3);
                    /* catch() { ... } // from try @ 00669020 with catch @ 00669228 */
    __dest = (undefined1 *)*param_1;
                    /* catch() { ... } // from try @ 00669070 with catch @ 0066922c
                       catch() { ... } // from try @ 006690bc with catch @ 0066922c */
    puVar1 = (undefined8 *)(__dest + -0x18);
    goto LAB_00669244;
  }
  *__dest = *param_2;
  __dest = (undefined1 *)*param_1;
  puVar1 = (undefined8 *)(__dest + -0x18);
LAB_00669244:
  if (puVar1 != &DAT_007fd2e0) {
    *(undefined4 *)(__dest + -8) = 0;
    *(size_t *)(__dest + -0x18) = param_3;
    __dest[param_3] = 0;
  }
  return param_1;
}


