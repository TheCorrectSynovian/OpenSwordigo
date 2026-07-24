/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a76e0
 * Function: Caver::GUIEffectView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(GUIEffectView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIEffectView::LayoutSubviews() */

void __thiscall Caver::GUIEffectView::LayoutSubviews(GUIEffectView *this)

{
  GUIEffect::SetFrame((GUIEffect *)(this + 0xf0),(Rectangle *)(this + 0x84));
  GUIView::LayoutSubviews((GUIView *)this);
  return;
}


