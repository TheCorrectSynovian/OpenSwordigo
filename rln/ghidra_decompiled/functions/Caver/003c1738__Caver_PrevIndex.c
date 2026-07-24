/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c1738
 * Function: Caver::PrevIndex
 * Signature: undefined __cdecl PrevIndex(int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PrevIndex(int, int) */

int Caver::PrevIndex(int param_1,int param_2)

{
  if (0 < param_1) {
    param_2 = param_1;
  }
  return param_2 + -1;
}


