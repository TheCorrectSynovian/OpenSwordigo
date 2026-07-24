/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c2f20
 * Function: Caver::Font::KerningBetweenGlyphsAtIndices
 * Signature: undefined __thiscall KerningBetweenGlyphsAtIndices(Font * this, int param_1, int param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Font::KerningBetweenGlyphsAtIndices(int, int) */

long __thiscall Caver::Font::KerningBetweenGlyphsAtIndices(Font *this,int param_1,int param_2)

{
  if (*(long *)(this + 0x40) != 0) {
                    /* catch() { ... } // from try @ 005c2f18 with catch @ 005c2f2c */
                    /* try { // try from 005c2f30 to 006c2f33 has its CatchHandler @ 005c2f3c */
                    /* try { // try from 005c2f34 to 006c2f3f has its CatchHandler @ 005c2eb0 */
                    /* catch() { ... } // from try @ 005c2f30 with catch @ 005c2f3c */
                    /* catch() { ... } // from try @ 005c2f60 with catch @ 005c2f44 */
    return (long)*(char *)(*(long *)(this + 0x40) +
                          (long)(param_2 +
                                (int)((ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10)) >> 2)
                                * param_1 * -0x45d1745d));
  }
  return 0;
}


