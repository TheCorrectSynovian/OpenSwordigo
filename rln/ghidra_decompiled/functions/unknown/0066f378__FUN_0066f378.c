/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066f378
 * Function: FUN_0066f378
 * Signature: undefined FUN_0066f378(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066f378(undefined8 *param_1,wchar_t *param_2,wchar_t *param_3,undefined8 param_4)

{
  size_t *psVar1;
  size_t __n;
  
  if (param_2 != param_3) {
    __n = (long)param_3 - (long)param_2 >> 2;
                    /* try { // try from 0066f3b0 to 0076f3b7 has its CatchHandler @ 0066f4ac */
    psVar1 = (size_t *)FUN_0066c5b8(__n,0,param_4);
                    /* try { // try from 0066f3b8 to 0076f4cf has its CatchHandler @ 0066f1e4 */
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
  *param_1 = &DAT_007fd318;
  return;
}


