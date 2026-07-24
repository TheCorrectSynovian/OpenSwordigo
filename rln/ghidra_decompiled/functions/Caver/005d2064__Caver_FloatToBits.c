/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d2064
 * Function: Caver::FloatToBits
 * Signature: undefined __cdecl FloatToBits(float param_1, uint param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FloatToBits(float, unsigned int) */

int Caver::FloatToBits(float param_1,uint param_2)

{
  if (1.0 < param_1) {
    param_1 = 1.0;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  return (int)(param_1 * (float)((1 << (ulong)(param_2 & 0x1f)) - 1) + 0.5);
}


