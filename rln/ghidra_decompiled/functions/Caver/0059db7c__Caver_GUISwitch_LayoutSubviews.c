/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059db7c
 * Function: Caver::GUISwitch::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(GUISwitch * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISwitch::LayoutSubviews() */

void __thiscall Caver::GUISwitch::LayoutSubviews(GUISwitch *this)

{
  GUIView::LayoutSubviews((GUIView *)this);
  GUIView::SetFrame(*(GUIView **)(this + 0x138),(Rectangle *)(this + 0x84));
  return;
}


