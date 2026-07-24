/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b608
 * Function: FUN_0066b608
 * Signature: undefined FUN_0066b608(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


size_t FUN_0066b608(long *param_1,wchar_t *param_2,ulong param_3,ulong param_4)

{
  size_t __n;
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = *(ulong *)(lVar2 + -0x18);
  if (uVar1 < param_4) {
                    /* try { // try from 0066b678 to 0076b67b has its CatchHandler @ 0066b698 */
                    /* try { // try from 0066b67c to 0076b69b has its CatchHandler @ 0066b648 */
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::copy",
                 param_4,uVar1);
  }
  __n = uVar1 - param_4;
  if (param_3 < uVar1 - param_4) {
    __n = param_3;
  }
                    /* try { // try from 0066b630 to 0076b633 has its CatchHandler @ 0066b644 */
  if (__n != 0) {
                    /* try { // try from 0066b634 to 0076b647 has its CatchHandler @ 0066b600 */
    if (__n == 1) {
      *param_2 = *(wchar_t *)(lVar2 + param_4 * 4);
      return 1;
    }
                    /* catch() { ... } // from try @ 0066b630 with catch @ 0066b644 */
                    /* catch() { ... } // from try @ 0066b67c with catch @ 0066b648 */
    wmemcpy(param_2,(wchar_t *)(lVar2 + param_4 * 4),__n);
  }
  return __n;
}


