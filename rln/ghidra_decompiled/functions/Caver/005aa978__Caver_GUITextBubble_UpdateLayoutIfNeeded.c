/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aa978
 * Function: Caver::GUITextBubble::UpdateLayoutIfNeeded
 * Signature: undefined __thiscall UpdateLayoutIfNeeded(GUITextBubble * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextBubble::UpdateLayoutIfNeeded() */

void __thiscall Caver::GUITextBubble::UpdateLayoutIfNeeded(GUITextBubble *this)

{
  if (this[0x20] != (GUITextBubble)0x0) {
    UpdateLayout(this);
    this[0x20] = (GUITextBubble)0x0;
  }
  return;
}


