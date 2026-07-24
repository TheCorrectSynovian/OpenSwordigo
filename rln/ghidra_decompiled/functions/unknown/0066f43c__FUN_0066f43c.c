/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066f43c
 * Function: FUN_0066f43c
 * Signature: undefined FUN_0066f43c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


wchar_t * FUN_0066f43c(wchar_t *param_1,wchar_t *param_2)

{
  size_t *psVar1;
  size_t __n;
  
  if (param_1 != param_2) {
    __n = (long)param_2 - (long)param_1 >> 2;
    psVar1 = (size_t *)FUN_0066c5b8(__n,0);
    if (__n == 1) {
      *(wchar_t *)(psVar1 + 3) = *param_1;
    }
    else {
      wmemcpy((wchar_t *)(psVar1 + 3),param_1,__n);
    }
    if (psVar1 != &DAT_007fd300) {
                    /* catch() { ... } // from try @ 0066f4f8 with catch @ 0066f4e4 */
      *(undefined4 *)(psVar1 + 2) = 0;
      *psVar1 = __n;
      *(undefined4 *)((long)psVar1 + ((long)param_2 - (long)param_1) + 0x18) = 0;
                    /* try { // try from 0066f4f4 to 0076f4f7 has its CatchHandler @ 0066f508 */
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0066f3b0 with catch @ 0066f4ac
                        */
    return (wchar_t *)(psVar1 + 3);
  }
                    /* try { // try from 0066f4d0 to 0076f4d7 has its CatchHandler @ 0066f4e0 */
                    /* try { // try from 0066f4d8 to 0076f4e3 has its CatchHandler @ 0066f1e4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0066f4d0 with catch @ 0066f4e0
                        */
  return (wchar_t *)&DAT_007fd318;
}


