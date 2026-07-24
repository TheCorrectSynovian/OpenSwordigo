/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066efd4
 * Function: FUN_0066efd4
 * Signature: undefined FUN_0066efd4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_0066efd4(undefined8 *param_1,wchar_t *param_2,long *param_3)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_2);
                    /* catch() { ... } // from try @ 0066ef64 with catch @ 0066eff8 */
  *param_1 = &DAT_007fd318;
                    /* catch() { ... } // from try @ 0066ef40 with catch @ 0066f008 */
  FUN_0066e318(param_1,sVar1 + *(long *)(*param_3 + -0x18));
                    /* catch() { ... } // from try @ 0066eee0 with catch @ 0066f018 */
  if (sVar1 != 0) {
                    /* catch() { ... } // from try @ 0066ee64 with catch @ 0066f020 */
    FUN_0066e634(param_1,param_2,sVar1);
  }
                    /* catch() { ... } // from try @ 0066ee58 with catch @ 0066f030 */
  FUN_0066e474(param_1,param_3);
                    /* try { // try from 0066f038 to 0076f03b has its CatchHandler @ 0066f1d8 */
  return param_1;
}


