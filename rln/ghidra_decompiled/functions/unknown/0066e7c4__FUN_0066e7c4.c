/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066e7c4
 * Function: FUN_0066e7c4
 * Signature: undefined FUN_0066e7c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0066e7c4(undefined8 param_1,wchar_t *param_2)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_2);
  if (sVar1 != 0) {
                    /* catch() { ... } // from try @ 0066e554 with catch @ 0066e7ec
                       catch() { ... } // from try @ 0066e63c with catch @ 0066e7ec */
    FUN_0066e634(param_1,param_2,sVar1);
  }
  return param_1;
}


