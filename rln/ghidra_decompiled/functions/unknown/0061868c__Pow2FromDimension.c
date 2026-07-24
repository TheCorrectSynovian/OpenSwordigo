/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061868c
 * Function: Pow2FromDimension
 * Signature: undefined __cdecl Pow2FromDimension(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Pow2FromDimension(int) */

int Pow2FromDimension(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  do {
                    /* try { // try from 00618690 to 007186a3 has its CatchHandler @ 006190a8 */
    iVar2 = iVar1;
    iVar1 = iVar2 << 1;
  } while (iVar2 < param_1);
  return iVar2;
}


