/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058a6f0
 * Function: Caver::Color::ColorByReversingAlphaPremultiplication
 * Signature: undefined __thiscall ColorByReversingAlphaPremultiplication(Color * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Color::ColorByReversingAlphaPremultiplication() */

void __thiscall Caver::Color::ColorByReversingAlphaPremultiplication(Color *this)

{
  Color CVar1;
  Color CVar2;
  Color *in_x8;
  
  CVar1 = this[3];
  *in_x8 = *this;
  in_x8[1] = this[1];
                    /* try { // try from 0058a704 to 0068a72b has its CatchHandler @ 0058ae40 */
  CVar2 = this[2];
  in_x8[3] = CVar1;
  in_x8[2] = CVar2;
  return;
}


