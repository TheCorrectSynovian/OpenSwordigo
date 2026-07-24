/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d4ae4
 * Function: Caver::GameOverlayView::UpdateSkillToggleButtonVisibility
 * Signature: undefined __thiscall UpdateSkillToggleButtonVisibility(GameOverlayView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::UpdateSkillToggleButtonVisibility() */

void __thiscall Caver::GameOverlayView::UpdateSkillToggleButtonVisibility(GameOverlayView *this)

{
  if (this[0x1a0] != (GameOverlayView)0x0) {
    *(undefined1 *)(*(long *)(this + 0x1b8) + 0xe4) = 1;
    return;
  }
  *(bool *)(*(long *)(this + 0x1b8) + 0xe4) =
       (int)((ulong)(*(long *)(*(long *)(this + 0xf8) + 0x58) -
                    *(long *)(*(long *)(this + 0xf8) + 0x50)) >> 4) == 0;
  return;
}


