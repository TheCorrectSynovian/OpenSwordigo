/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d754
 * Function: FUN_0066d754
 * Signature: undefined FUN_0066d754(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066d754(undefined8 *param_1,size_t param_2,wchar_t param_3,undefined8 param_4)

{
  size_t *psVar1;
  wchar_t *__s;
  
                    /* try { // try from 0066d75c to 0076d75f has its CatchHandler @ 0066d7dc */
  if (param_2 == 0) {
    __s = (wchar_t *)&DAT_007fd318;
  }
  else {
    psVar1 = (size_t *)FUN_0066c5b8(param_2,0,param_4);
    __s = (wchar_t *)(psVar1 + 3);
    if (param_2 == 1) {
      *(wchar_t *)(psVar1 + 3) = param_3;
    }
    else {
                    /* catch() { ... } // from try @ 0066d750 with catch @ 0066d7c0 */
      wmemset(__s,param_3,param_2);
    }
                    /* try { // try from 0066d7d0 to 0076d7d3 has its CatchHandler @ 0066d7d8 */
                    /* try { // try from 0066d7d4 to 0076d82f has its CatchHandler @ 0066d734 */
    if (psVar1 != &DAT_007fd300) {
                    /* catch() { ... } // from try @ 0066d7d0 with catch @ 0066d7d8 */
                    /* catch() { ... } // from try @ 0066d75c with catch @ 0066d7dc */
      *(undefined4 *)(psVar1 + 2) = 0;
      *psVar1 = param_2;
      *(undefined4 *)((long)psVar1 + param_2 * 4 + 0x18) = 0;
    }
  }
  *param_1 = __s;
  return;
}


