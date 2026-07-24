/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00493ee8
 * Function: Caver::MainMenuView::UpdatePrivacyButtonFrameLocation
 * Signature: undefined __thiscall UpdatePrivacyButtonFrameLocation(MainMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuView::UpdatePrivacyButtonFrameLocation() */

void __thiscall Caver::MainMenuView::UpdatePrivacyButtonFrameLocation(MainMenuView *this)

{
  long lVar1;
  GUIView *this_00;
  float local_48;
  float fStack_44;
  float local_40;
  float local_38;
  float local_34;
  float fStack_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  GUIView::safeBounds();
  this_00 = *(GUIView **)(this + 0x168);
  fStack_30 = *(float *)(this_00 + 0x7c);
  local_34 = fStack_44 + 9.0;
  local_2c = *(undefined4 *)(this_00 + 0x80);
  local_38 = (local_48 + local_40 + -10.0) - fStack_30;
  GUIView::SetFrame(this_00,(Rectangle *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


