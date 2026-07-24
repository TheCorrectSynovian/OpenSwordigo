/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b9b68
 * Function: Caver::GUITextFieldImpl::StopEditing
 * Signature: undefined __thiscall StopEditing(GUITextFieldImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::StopEditing() */

void __thiscall Caver::GUITextFieldImpl::StopEditing(GUITextFieldImpl *this)

{
  StopTextInputWithDelegate((ITextInputDelegate *)(this + 0x140));
  *(undefined2 *)(this + 0x198) = 0;
  return;
}


