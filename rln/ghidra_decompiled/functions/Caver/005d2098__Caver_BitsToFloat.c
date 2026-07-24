/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d2098
 * Function: Caver::BitsToFloat
 * Signature: undefined __cdecl BitsToFloat(uint param_1, uint param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BitsToFloat(unsigned int, unsigned int) */

float Caver::BitsToFloat(uint param_1,uint param_2)

{
  uint uVar1;
  
                    /* try { // try from 005d20a0 to 006d20b3 has its CatchHandler @ 005d2958 */
  uVar1 = (1 << (ulong)(param_2 & 0x1f)) - 1;
                    /* try { // try from 005d20b4 to 006d211f has its CatchHandler @ 005d2eb0 */
  return (float)(uVar1 & param_1) / (float)uVar1;
}


