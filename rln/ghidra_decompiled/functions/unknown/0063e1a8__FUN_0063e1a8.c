/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063e1a8
 * Function: FUN_0063e1a8
 * Signature: undefined FUN_0063e1a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


wint_t FUN_0063e1a8(long param_1,wchar_t param_2)

{
  wint_t wVar1;
  int iVar2;
  
  if (param_2 != L'\xffffffff') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0063e124 with catch @ 0063e1c8
                        */
    wVar1 = putwc(param_2,*(__FILE **)(param_1 + 0x40));
    return wVar1;
  }
  iVar2 = fflush(*(FILE **)(param_1 + 0x40));
  return -(uint)(iVar2 != 0);
}


