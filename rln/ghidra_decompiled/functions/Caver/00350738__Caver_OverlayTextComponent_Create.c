/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00350738
 * Function: Caver::OverlayTextComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::Create() */

OverlayTextComponent * Caver::OverlayTextComponent::Create(void)

{
  OverlayTextComponent *this;
  
  this = operator_new(0xd8);
  OverlayTextComponent(this);
  return this;
}


