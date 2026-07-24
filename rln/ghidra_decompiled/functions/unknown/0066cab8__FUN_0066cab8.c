/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066cab8
 * Function: FUN_0066cab8
 * Signature: undefined FUN_0066cab8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0066cab8(long *param_1,long param_2,undefined8 param_3,wchar_t *param_4,size_t param_5)

{
                    /* try { // try from 0066cac8 to 0076caef has its CatchHandler @ 0066caf8 */
  FUN_0066c650();
  if (param_5 != 0) {
                    /* try { // try from 0066caf0 to 0076cafb has its CatchHandler @ 0066c880 */
    if (param_5 == 1) {
      *(wchar_t *)(*param_1 + param_2 * 4) = *param_4;
      return param_1;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0066cac8 with catch @ 0066caf8
                        */
    wmemcpy((wchar_t *)(*param_1 + param_2 * 4),param_4,param_5);
  }
  return param_1;
}


