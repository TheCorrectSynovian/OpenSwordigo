/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba648
 * Function: Caver::GUITextFieldImpl::setVerticalTextAlignment
 * Signature: undefined __thiscall setVerticalTextAlignment(GUITextFieldImpl * this, GUITextAlignment param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::setVerticalTextAlignment(Caver::GUITextAlignment) */

void __thiscall
Caver::GUITextFieldImpl::setVerticalTextAlignment(GUITextFieldImpl *this,undefined4 param_2)

{
  GUILabel *this_00;
  
  this_00 = *(GUILabel **)(this + 0x148);
  *(undefined4 *)(this_00 + 0x134) = param_2;
  GUILabel::UpdateBounds(this_00);
  return;
}


