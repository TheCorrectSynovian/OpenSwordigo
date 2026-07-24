/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba68c
 * Function: Caver::GUITextFieldImpl::textBounds
 * Signature: undefined __cdecl textBounds(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::textBounds() const */

void Caver::GUITextFieldImpl::textBounds(void)

{
  long in_x0;
  undefined8 *in_x8;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(in_x0 + 0x148) + 0x74);
  in_x8[1] = *(undefined8 *)(*(long *)(in_x0 + 0x148) + 0x7c);
  *in_x8 = uVar1;
  return;
}


