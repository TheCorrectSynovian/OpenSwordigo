/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066f5cc
 * Function: FUN_0066f5cc
 * Signature: undefined FUN_0066f5cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


wchar_t * FUN_0066f5cc(wchar_t *param_1,wchar_t *param_2)

{
  size_t *psVar1;
  size_t __n;
  
  if (param_1 == param_2) {
    return (wchar_t *)&DAT_007fd318;
  }
  if ((param_1 == (wchar_t *)0x0) && (param_2 != (wchar_t *)0x0)) {
                    /* try { // try from 0066f5f8 to 0076f603 has its CatchHandler @ 0066f7cc */
                    /* WARNING: Subroutine does not return */
    FUN_00665330("basic_string::_S_construct null not valid");
  }
                    /* try { // try from 0066f604 to 0076f6b3 has its CatchHandler @ 0066f51c */
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


