/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a77d8
 * Function: Caver::GUIEffectView::~GUIEffectView
 * Signature: undefined __thiscall ~GUIEffectView(GUIEffectView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIEffectView::~GUIEffectView() */

void __thiscall Caver::GUIEffectView::~GUIEffectView(GUIEffectView *this)

{
  *(undefined **)this = PTR_vtable_007e4dd0 + 0x10;
  GUIEffect::~GUIEffect((GUIEffect *)(this + 0xf0));
  GUIView::~GUIView((GUIView *)this);
  return;
}


