/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00597fa8
 * Function: Caver::GUILabel::ClearText
 * Signature: undefined __thiscall ClearText(GUILabel * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILabel::ClearText() */

void __thiscall Caver::GUILabel::ClearText(GUILabel *this)

{
                    /* catch() { ... } // from try @ 00597d88 with catch @ 00597fc8 */
  FUN_0066918c(this + 0x100,&DAT_0068fbeb,0);
  FontText::Clear(*(FontText **)(this + 0x120));
  return;
}


