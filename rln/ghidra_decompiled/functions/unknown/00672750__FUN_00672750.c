/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00672750
 * Function: FUN_00672750
 * Signature: undefined FUN_00672750(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00672750(void *param_1,size_t param_2,long *param_3)

{
  ulong uVar1;
  void *pvVar2;
  size_t __size;
  
                    /* catch() { ... } // from try @ 006725c4 with catch @ 00672754 */
                    /* catch() { ... } // from try @ 00672470 with catch @ 00672758
                       catch() { ... } // from try @ 006724d0 with catch @ 00672758 */
  __size = param_3[2];
  uVar1 = param_3[1] + 1 + param_2;
  if (__size < uVar1) {
    if ((int)param_3[3] != 0) {
      return;
    }
    if ((__size != 0) || (__size = 2, 2 < uVar1)) {
      do {
        __size = __size * 2;
      } while (__size < uVar1);
    }
    pvVar2 = realloc((void *)*param_3,__size);
    if (pvVar2 == (void *)0x0) {
      free((void *)*param_3);
      *param_3 = 0;
                    /* catch() { ... } // from try @ 00672540 with catch @ 00672830 */
      param_3[1] = 0;
                    /* try { // try from 00672834 to 0077283b has its CatchHandler @ 00672844 */
      param_3[2] = 0;
      *(undefined4 *)(param_3 + 3) = 1;
      return;
                    /* try { // try from 0067283c to 00772847 has its CatchHandler @ 00672358 */
    }
    *param_3 = (long)pvVar2;
    param_3[2] = __size;
  }
  if ((int)param_3[3] != 0) {
    return;
  }
  memcpy((void *)(*param_3 + param_3[1]),param_1,param_2);
                    /* catch() { ... } // from try @ 00672558 with catch @ 006727bc */
                    /* catch() { ... } // from try @ 00672570 with catch @ 006727c0 */
  *(undefined1 *)(*param_3 + param_2 + param_3[1]) = 0;
  param_3[1] = param_3[1] + param_2;
  return;
}


