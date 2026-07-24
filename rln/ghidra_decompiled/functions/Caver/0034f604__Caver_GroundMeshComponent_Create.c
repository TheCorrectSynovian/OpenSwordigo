/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f604
 * Function: Caver::GroundMeshComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshComponent::Create() */

GroundMeshComponent * Caver::GroundMeshComponent::Create(void)

{
  GroundMeshComponent *this;
  
  this = operator_new(0xd8);
  GroundMeshComponent(this);
  return this;
}


