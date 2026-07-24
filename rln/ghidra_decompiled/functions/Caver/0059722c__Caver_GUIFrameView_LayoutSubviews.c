/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059722c
 * Function: Caver::GUIFrameView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(GUIFrameView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIFrameView::LayoutSubviews() */

void __thiscall Caver::GUIFrameView::LayoutSubviews(GUIFrameView *this)

{
  if (*(GUIRoundedRect **)(this + 0xf8) != (GUIRoundedRect *)0x0) {
    GUIRoundedRect::CreateWithOuterBounds
              (*(GUIRoundedRect **)(this + 0xf8),(Rectangle *)(this + 0x84));
  }
  if (*(GUITexturedRect **)(this + 0xf0) != (GUITexturedRect *)0x0) {
    GUITexturedRect::CreateWithBounds
              (*(GUITexturedRect **)(this + 0xf0),(Rectangle *)(this + 0x84),false);
    return;
  }
  return;
}


