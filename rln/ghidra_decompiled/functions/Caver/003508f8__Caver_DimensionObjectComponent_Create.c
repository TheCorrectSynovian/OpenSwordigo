/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003508f8
 * Function: Caver::DimensionObjectComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DimensionObjectComponent::Create() */

DimensionObjectComponent * Caver::DimensionObjectComponent::Create(void)

{
  DimensionObjectComponent *this;
  
  this = operator_new(0x70);
  DimensionObjectComponent(this);
  return this;
}


