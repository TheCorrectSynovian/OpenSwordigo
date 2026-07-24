/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f684
 * Function: Caver::WaterMeshComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::WaterMeshComponent::Create() */

WaterMeshComponent * Caver::WaterMeshComponent::Create(void)

{
  WaterMeshComponent *this;
  
  this = operator_new(0x158);
  WaterMeshComponent(this);
  return this;
}


