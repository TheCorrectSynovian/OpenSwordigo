/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350778
 * Function: Caver::TextBubbleComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextBubbleComponent::Create() */

TextBubbleComponent * Caver::TextBubbleComponent::Create(void)

{
  TextBubbleComponent *this;
  
  this = operator_new(0x88);
  TextBubbleComponent(this);
  return this;
}


