/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066f1c8
 * Function: FUN_0066f1c8
 * Signature: undefined FUN_0066f1c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066f1c8(undefined8 *param_1,wchar_t *param_2,wchar_t *param_3,undefined8 param_4)

{
  size_t *psVar1;
  size_t __n;
  
                    /* catch() { ... } // from try @ 0066f038 with catch @ 0066f1d8
                       catch() { ... } // from try @ 0066f0e4 with catch @ 0066f1d8 */
                    /* try { // try from 0066f1e4 to 0076f3af has its CatchHandler @ 0066f1e4
                       catch(type#1 @ 00000000) { ... } // from try @ 0066f1e4 with catch @ 0066f1e4
                       catch(type#1 @ 00000000) { ... } // from try @ 0066f3b8 with catch @ 0066f1e4
                       catch(type#1 @ 00000000) { ... } // from try @ 0066f4d8 with catch @ 0066f1e4
                        */
  if (param_2 == param_3) {
    *param_1 = &DAT_007fd318;
    return;
  }
  if ((param_2 == (wchar_t *)0x0) && (param_3 != (wchar_t *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00665330("basic_string::_S_construct null not valid");
  }
  __n = (long)param_3 - (long)param_2 >> 2;
  psVar1 = (size_t *)FUN_0066c5b8(__n,0,param_4);
  if (__n == 1) {
    *(wchar_t *)(psVar1 + 3) = *param_2;
  }
  else {
    wmemcpy((wchar_t *)(psVar1 + 3),param_2,__n);
  }
  if (psVar1 != &DAT_007fd300) {
    *(undefined4 *)(psVar1 + 2) = 0;
    *psVar1 = __n;
    *(undefined4 *)((long)psVar1 + ((long)param_3 - (long)param_2) + 0x18) = 0;
  }
  *param_1 = psVar1 + 3;
  return;
}


