/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c53b8
 * Function: Caver::IsWhiteSpace
 * Signature: undefined __cdecl IsWhiteSpace(char param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::IsWhiteSpace(char) */

uint Caver::IsWhiteSpace(char param_1)

{
  if (((byte)param_1 - 9 & 0xff) < 0x18) {
    return 0x800003U >> (ulong)((byte)param_1 - 9 & 0x1f) & 1;
  }
  return 0;
}


