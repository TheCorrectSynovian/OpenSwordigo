/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba140
 * Function: Caver::GUITextFieldImpl::StartEditing
 * Signature: undefined __cdecl StartEditing(bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::StartEditing(bool) */

void Caver::GUITextFieldImpl::StartEditing(bool param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  *(undefined2 *)(uVar1 + 0x198) = 0x101;
  *(undefined4 *)(uVar1 + 0x19c) = 0;
  StartTextInputWithDelegate((ITextInputDelegate *)(uVar1 + 0x140),(string *)(uVar1 + 0x188));
  return;
}


