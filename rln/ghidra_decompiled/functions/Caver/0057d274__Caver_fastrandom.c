/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057d274
 * Function: Caver::fastrandom
 * Signature: undefined __cdecl fastrandom(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::fastrandom() */

ulong Caver::fastrandom(void)

{
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 0057d250 with catch @ 0057d288 */
  uVar1 = DAT_007e9d20 * 0x5deece66d + 0xb;
  DAT_007e9d20 = uVar1 & 0xffffffffffff;
  return uVar1 >> 0x11 & 0x7fffffff;
}


