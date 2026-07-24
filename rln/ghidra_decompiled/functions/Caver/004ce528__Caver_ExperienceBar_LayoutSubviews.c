/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ce528
 * Function: Caver::ExperienceBar::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(ExperienceBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ExperienceBar::LayoutSubviews() */

void __thiscall Caver::ExperienceBar::LayoutSubviews(ExperienceBar *this)

{
  GUIView::SetFrame(*(GUIView **)(this + 0xf0),(Rectangle *)(this + 0x84));
  UpdateText(this);
  return;
}


