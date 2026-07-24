/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00669390
 * Function: FUN_00669390
 * Signature: undefined FUN_00669390(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00669390(long *param_1,ulong param_2,undefined1 *param_3,ulong param_4)

{
  undefined1 *__src;
  long lVar1;
  undefined1 *__dest;
  ulong uVar2;
  undefined1 *puVar3;
  size_t __n;
  
                    /* try { // try from 00669390 to 0076940f has its CatchHandler @ 0066968c */
  puVar3 = (undefined1 *)*param_1;
  uVar2 = *(ulong *)(puVar3 + -0x18);
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::insert",
                 param_2,uVar2);
  }
  if (param_4 <= 0x3ffffffffffffff9 - uVar2) {
    if (((param_3 < puVar3) || (puVar3 + uVar2 < param_3)) || (0 < *(int *)(puVar3 + -8))) {
      FUN_00668cb8(param_1,param_2,0,param_4);
      if (param_4 != 0) {
        if (param_4 == 1) {
          *(undefined1 *)(*param_1 + param_2) = *param_3;
        }
        else {
          memcpy((void *)(*param_1 + param_2),param_3,param_4);
        }
      }
    }
    else {
      FUN_00668cb8(param_1,param_2,0);
      lVar1 = *param_1;
      __src = param_3 + (lVar1 - (long)puVar3);
                    /* try { // try from 0066943c to 00769447 has its CatchHandler @ 006695c0 */
      __dest = (undefined1 *)(lVar1 + param_2);
      if (__src + param_4 <= __dest) {
        if (param_4 != 1) {
          memcpy(__dest,__src,param_4);
                    /* try { // try from 00669468 to 0076946b has its CatchHandler @ 006695bc */
                    /* try { // try from 0066946c to 00769477 has its CatchHandler @ 0066968c */
          return param_1;
        }
        *(undefined1 *)(lVar1 + param_2) = param_3[lVar1 - (long)puVar3];
        return param_1;
      }
      if (__src < __dest) {
        __n = (long)__dest - (long)__src;
        if (__n == 1) {
          *(undefined1 *)(lVar1 + param_2) = param_3[lVar1 - (long)puVar3];
        }
        else {
          __dest = memcpy(__dest,__src,__n);
        }
                    /* try { // try from 00669498 to 0076949b has its CatchHandler @ 00669680 */
                    /* try { // try from 0066949c to 007695e3 has its CatchHandler @ 00669290 */
        if (param_4 - __n == 1) {
          __dest[__n] = __dest[param_4];
        }
        else {
          memcpy(__dest + __n,__dest + param_4,param_4 - __n);
        }
      }
      else if (param_4 == 1) {
        *(undefined1 *)(lVar1 + param_2) = __src[1];
      }
      else {
        memcpy(__dest,__src + param_4,param_4);
      }
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066554c("basic_string::insert");
}


