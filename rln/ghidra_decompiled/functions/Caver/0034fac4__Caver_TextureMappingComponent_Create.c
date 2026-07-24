/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fac4
 * Function: Caver::TextureMappingComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureMappingComponent::Create() */

TextureMappingComponent * Caver::TextureMappingComponent::Create(void)

{
  TextureMappingComponent *this;
  
  this = operator_new(0x90);
  TextureMappingComponent(this);
  return this;
}


