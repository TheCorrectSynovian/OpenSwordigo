/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005981c4
 * Function: Caver::GUILabel::SetBounds
 * Signature: undefined __thiscall SetBounds(GUILabel * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILabel::SetBounds(Caver::Rectangle const&) */

void __thiscall Caver::GUILabel::SetBounds(GUILabel *this,Rectangle *param_1)

{
  GUIView::SetBounds((GUIView *)this,param_1);
  if (this[0x138] != (GUILabel)0x0) {
    UpdateText(this);
    return;
  }
  UpdateBounds(this);
  return;
}


