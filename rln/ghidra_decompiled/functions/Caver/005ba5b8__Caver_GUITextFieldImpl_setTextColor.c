/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba5b8
 * Function: Caver::GUITextFieldImpl::setTextColor
 * Signature: undefined __thiscall setTextColor(GUITextFieldImpl * this, Color param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::setTextColor(Caver::Color) */

void __thiscall Caver::GUITextFieldImpl::setTextColor(GUITextFieldImpl *this,undefined4 *param_2)

{
  *(undefined4 *)(this + 0x168) = *param_2;
  UpdateText(this);
  return;
}


