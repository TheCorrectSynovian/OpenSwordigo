/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063de24
 * Function: FUN_0063de24
 * Signature: undefined FUN_0063de24(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0063de24(long param_1)

{
  int iVar1;
  
  iVar1 = getc(*(FILE **)(param_1 + 0x40));
  iVar1 = ungetc(iVar1,*(FILE **)(param_1 + 0x40));
  return iVar1;
}


