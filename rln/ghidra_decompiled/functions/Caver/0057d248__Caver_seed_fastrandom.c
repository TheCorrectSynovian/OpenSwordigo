/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057d248
 * Function: Caver::seed_fastrandom
 * Signature: undefined __cdecl seed_fastrandom(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::seed_fastrandom(int) */

void Caver::seed_fastrandom(int param_1)

{
  ulong uVar1;
  
                    /* try { // try from 0057d250 to 0067d253 has its CatchHandler @ 0057d288 */
                    /* try { // try from 0057d254 to 0067d3b7 has its CatchHandler @ 0057d1f0 */
  uVar1 = (long)param_1 << 0x10 & 0xffffffff0000;
  if (DAT_007e9d18 == '\0') {
    uVar1 = (long)param_1 << 0x10;
  }
  DAT_007e9d20 = uVar1 | 0x330e;
  return;
}


