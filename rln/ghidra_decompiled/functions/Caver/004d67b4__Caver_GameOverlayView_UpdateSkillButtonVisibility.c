/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d67b4
 * Function: Caver::GameOverlayView::UpdateSkillButtonVisibility
 * Signature: undefined __thiscall UpdateSkillButtonVisibility(GameOverlayView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::UpdateSkillButtonVisibility() */

void __thiscall Caver::GameOverlayView::UpdateSkillButtonVisibility(GameOverlayView *this)

{
  if (this[0x1a0] != (GameOverlayView)0x0) {
                    /* try { // try from 004d67c0 to 005d67c3 has its CatchHandler @ 004d67d4 */
    *(undefined1 *)(*(long *)(this + 400) + 0xe4) = 1;
    return;
  }
                    /* catch() { ... } // from try @ 004d67c0 with catch @ 004d67d4 */
  *(bool *)(*(long *)(this + 400) + 0xe4) = *(long *)(this + 0x1a8) == 0;
  return;
}


