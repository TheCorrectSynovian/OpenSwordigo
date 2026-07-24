/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003be6c0
 * Function: Caver::GroundMeshGeneratorComponent::Clone
 * Signature: undefined __thiscall Clone(GroundMeshGeneratorComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGeneratorComponent::Clone() const */

GroundMeshGeneratorComponent * __thiscall
Caver::GroundMeshGeneratorComponent::Clone(GroundMeshGeneratorComponent *this)

{
  GroundMeshGeneratorComponent *this_00;
  
  this_00 = operator_new(0xf0);
  GroundMeshGeneratorComponent(this_00);
  InitWithComponent(this_00,this);
  return this_00;
}


