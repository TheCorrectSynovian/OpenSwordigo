/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063e16c
 * Function: FUN_0063e16c
 * Signature: undefined FUN_0063e16c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0063e16c(long param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != -1) {
    iVar1 = putc(param_2,*(FILE **)(param_1 + 0x40));
    return iVar1;
  }
  iVar1 = fflush(*(FILE **)(param_1 + 0x40));
  return -(uint)(iVar1 != 0);
}


