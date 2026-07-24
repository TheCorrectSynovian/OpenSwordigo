/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063de4c
 * Function: FUN_0063de4c
 * Signature: undefined FUN_0063de4c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0063de4c(long param_1,int param_2)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 0063d8a8 with catch @ 0063de4c */
  if (param_2 == -1) {
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 != -1) {
      iVar1 = ungetc(iVar1,*(FILE **)(param_1 + 0x40));
                    /* catch() { ... } // from try @ 0063d954 with catch @ 0063de9c */
      *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
      return iVar1;
    }
  }
  else {
    iVar1 = ungetc(param_2,*(FILE **)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return iVar1;
}


