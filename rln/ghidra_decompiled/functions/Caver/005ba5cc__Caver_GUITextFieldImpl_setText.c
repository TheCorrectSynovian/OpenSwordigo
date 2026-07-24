/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba5cc
 * Function: Caver::GUITextFieldImpl::setText
 * Signature: undefined __cdecl setText(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::setText(std::string const&) */

void Caver::GUITextFieldImpl::setText(string *param_1)

{
  FUN_0066a6a8(param_1 + 0x188);
  UpdateText((GUITextFieldImpl *)param_1);
  return;
}


