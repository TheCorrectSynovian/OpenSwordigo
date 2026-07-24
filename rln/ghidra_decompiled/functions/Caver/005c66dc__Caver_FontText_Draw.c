/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c66dc
 * Function: Caver::FontText::Draw
 * Signature: undefined __thiscall Draw(FontText * this, RenderingContext * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FontText::Draw(Caver::RenderingContext*) const */

void __thiscall Caver::FontText::Draw(FontText *this,RenderingContext *param_1)

{
                    /* try { // try from 005c66e8 to 006c66f3 has its CatchHandler @ 005c7134 */
  DrawSubstring(this,param_1,0,
                (*(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 2) * -0x71c71c71c71c71c7);
  return;
}


