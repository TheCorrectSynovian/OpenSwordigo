/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba654
 * Function: Caver::GUITextFieldImpl::textMargins
 * Signature: undefined __cdecl textMargins(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::textMargins() const */

void Caver::GUITextFieldImpl::textMargins(void)

{
  long in_x0;
  undefined8 *in_x8;
  undefined8 uVar1;
  
  *(undefined4 *)(in_x8 + 2) = *(undefined4 *)(in_x0 + 0x17c);
  uVar1 = *(undefined8 *)(in_x0 + 0x16c);
  in_x8[1] = *(undefined8 *)(in_x0 + 0x174);
  *in_x8 = uVar1;
  return;
}


