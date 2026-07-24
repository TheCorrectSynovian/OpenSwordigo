/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034f644
 * Function: Caver::GroundMeshGeneratorComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGeneratorComponent::Create() */

GroundMeshGeneratorComponent * Caver::GroundMeshGeneratorComponent::Create(void)

{
  GroundMeshGeneratorComponent *this;
  
  this = operator_new(0xf0);
  GroundMeshGeneratorComponent(this);
  return this;
}


