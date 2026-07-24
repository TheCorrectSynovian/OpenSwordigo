/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d6544
 * Function: Caver::GameOverlayView::SetControlsHidden
 * Signature: undefined __thiscall SetControlsHidden(GameOverlayView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::SetControlsHidden(bool) */

void __thiscall Caver::GameOverlayView::SetControlsHidden(GameOverlayView *this,bool param_1)

{
  long *plVar1;
  GameOverlayView GVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long local_68;
  long *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((GameOverlayView)param_1 != this[0x1a0]) {
    *(bool *)(*(long *)(this + 0x288) + 0xe4) = param_1;
    lVar6 = *(long *)(this + 0x1d8);
    if (param_1) {
      *(undefined1 *)(lVar6 + 0xe4) = 1;
      this[0x1a0] = (GameOverlayView)param_1;
      GUIButton::CancelPress(*(GUIButton **)(this + 0x140));
      GUIButton::CancelPress(*(GUIButton **)(this + 0x150));
      GUIButton::CancelPress(*(GUIButton **)(this + 0x160));
      GUIButton::CancelPress(*(GUIButton **)(this + 0x170));
      GUIButton::CancelPress(*(GUIButton **)(this + 0x180));
      GUIButton::CancelPress(*(GUIButton **)(this + 400));
      GUIButton::CancelPress(*(GUIButton **)(this + 0x1b8));
      GUIButton::CancelPress(*(GUIButton **)(this + 0x1c8));
      bVar4 = this[0x1a0] == (GameOverlayView)0x0;
    }
    else {
      plVar1 = *(long **)(lVar6 + 0x1e8);
      if (plVar1 == (long *)0x0) {
        *(bool *)(lVar6 + 0xe4) = *(long *)(lVar6 + 0x1e0) == 0;
      }
      else {
        lVar7 = plVar1[1];
        *(bool *)(lVar6 + 0xe4) = *(long *)(lVar6 + 0x1e0) == 0;
        plVar1[1] = lVar7;
        if (lVar7 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          lVar6 = plVar1[2];
          plVar1[2] = lVar6 + -1;
          if (lVar6 + -1 == 0) {
            (**(code **)(*plVar1 + 0x18))(plVar1);
          }
        }
      }
      this[0x1a0] = (GameOverlayView)param_1;
      bVar4 = true;
    }
    *(bool *)(*(long *)(this + 0x140) + 0xe4) = param_1;
    *(bool *)(*(long *)(this + 0x150) + 0xe4) = param_1;
    *(bool *)(*(long *)(this + 0x160) + 0xe4) = param_1;
    if (bVar4) {
      GVar2 = this[0x1a1];
      *(byte *)(*(long *)(this + 0x180) + 0xe4) = (byte)GVar2 ^ 1;
      lVar6 = *(long *)(this + 0x170);
      if (GVar2 == (GameOverlayView)0x0) {
        CharacterState::AnyItemOfType(&local_68,*(long *)(this + 0xf8) + 0x10,1);
        *(bool *)(lVar6 + 0xe4) = local_68 == 0;
                    /* catch() { ... } // from try @ 004d6830 with catch @ 004d6774 */
        if ((local_60 != (long *)0x0) &&
           (lVar6 = local_60[1], local_60[1] = lVar6 + -1, lVar6 + -1 == 0)) {
          (**(code **)(*local_60 + 0x10))(local_60);
          lVar6 = local_60[2];
          local_60[2] = lVar6 + -1;
          if (lVar6 + -1 == 0) {
            (**(code **)(*local_60 + 0x18))(local_60);
          }
        }
      }
      else {
        *(undefined1 *)(lVar6 + 0xe4) = 1;
      }
    }
    else {
      *(undefined1 *)(*(long *)(this + 0x180) + 0xe4) = 1;
      *(undefined1 *)(*(long *)(this + 0x170) + 0xe4) = 1;
    }
                    /* catch() { ... } // from try @ 004d66f4 with catch @ 004d66c4 */
    if (this[0x1a0] == (GameOverlayView)0x0) {
                    /* try { // try from 004d66e0 to 005d66f3 has its CatchHandler @ 004d6718 */
      bVar4 = *(long *)(this + 0x1a8) == 0;
                    /* try { // try from 004d66f4 to 005d671b has its CatchHandler @ 004d66c4 */
      bVar5 = (int)((ulong)(*(long *)(*(long *)(this + 0xf8) + 0x58) -
                           *(long *)(*(long *)(this + 0xf8) + 0x50)) >> 4) == 0;
    }
    else {
      bVar4 = true;
      bVar5 = true;
    }
    *(bool *)(*(long *)(this + 400) + 0xe4) = bVar4;
    *(bool *)(*(long *)(this + 0x1b8) + 0xe4) = bVar5;
    *(bool *)(*(long *)(this + 0x1c8) + 0xe4) = param_1;
  }
                    /* catch() { ... } // from try @ 004d66e0 with catch @ 004d6718 */
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


