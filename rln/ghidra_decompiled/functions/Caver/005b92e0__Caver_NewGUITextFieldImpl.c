/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b92e0
 * Function: Caver::NewGUITextFieldImpl
 * Signature: undefined __cdecl NewGUITextFieldImpl(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::NewGUITextFieldImpl() */

GUITextFieldImpl * Caver::NewGUITextFieldImpl(void)

{
  GUITextFieldImpl *this;
  
  this = operator_new(0x1a0);
  GUITextFieldImpl::GUITextFieldImpl(this);
  return this;
}


