/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066f4f8
 * Function: FUN_0066f4f8
 * Signature: undefined FUN_0066f4f8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


wchar_t * FUN_0066f4f8(wchar_t *param_1,wchar_t *param_2)

{
  size_t *psVar1;
  size_t __n;
  
                    /* try { // try from 0066f4f8 to 0076f51b has its CatchHandler @ 0066f4e4 */
                    /* catch() { ... } // from try @ 0066f4f4 with catch @ 0066f508 */
  if (param_1 == param_2) {
    return (wchar_t *)&DAT_007fd318;
  }
                    /* try { // try from 0066f51c to 0076f5f7 has its CatchHandler @ 0066f51c
                       catch() { ... } // from try @ 0066f51c with catch @ 0066f51c
                       catch() { ... } // from try @ 0066f604 with catch @ 0066f51c
                       catch() { ... } // from try @ 0066f708 with catch @ 0066f51c
                       catch() { ... } // from try @ 0066f7f8 with catch @ 0066f51c */
  if ((param_1 == (wchar_t *)0x0) && (param_2 != (wchar_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00665330("basic_string::_S_construct null not valid");
  }
  __n = (long)param_2 - (long)param_1 >> 2;
  psVar1 = (size_t *)FUN_0066c5b8(__n,0);
  if (__n == 1) {
    *(wchar_t *)(psVar1 + 3) = *param_1;
  }
  else {
    wmemcpy((wchar_t *)(psVar1 + 3),param_1,__n);
  }
  if (psVar1 != &DAT_007fd300) {
    *(undefined4 *)(psVar1 + 2) = 0;
    *psVar1 = __n;
    *(undefined4 *)((long)psVar1 + ((long)param_2 - (long)param_1) + 0x18) = 0;
  }
  return (wchar_t *)(psVar1 + 3);
}


