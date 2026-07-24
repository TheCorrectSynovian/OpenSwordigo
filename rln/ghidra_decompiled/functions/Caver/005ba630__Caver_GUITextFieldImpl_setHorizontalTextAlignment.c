/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba630
 * Function: Caver::GUITextFieldImpl::setHorizontalTextAlignment
 * Signature: undefined __thiscall setHorizontalTextAlignment(GUITextFieldImpl * this, GUITextAlignment param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::setHorizontalTextAlignment(Caver::GUITextAlignment) */

void __thiscall
Caver::GUITextFieldImpl::setHorizontalTextAlignment(GUITextFieldImpl *this,undefined4 param_2)

{
  GUILabel *this_00;
  
  this_00 = *(GUILabel **)(this + 0x148);
  *(undefined4 *)(this_00 + 0x130) = param_2;
  GUILabel::UpdateBounds(this_00);
  return;
}


