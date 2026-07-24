/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba5fc
 * Function: Caver::GUITextFieldImpl::setPlaceHolder
 * Signature: undefined __cdecl setPlaceHolder(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::setPlaceHolder(std::string const&) */

void Caver::GUITextFieldImpl::setPlaceHolder(string *param_1)

{
  FUN_0066a6a8(param_1 + 400);
  UpdateText((GUITextFieldImpl *)param_1);
  return;
}


