/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c1748
 * Function: Caver::NextIndex
 * Signature: undefined __cdecl NextIndex(int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NextIndex(int, int) */

int Caver::NextIndex(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = (param_1 + 1) / param_2;
  }
  return (param_1 + 1) - iVar1 * param_2;
}


