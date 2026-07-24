/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fbb8
 * Function: Caver::BoneControlledCollisionShapeComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BoneControlledCollisionShapeComponent::Create() */

BoneControlledCollisionShapeComponent * Caver::BoneControlledCollisionShapeComponent::Create(void)

{
  BoneControlledCollisionShapeComponent *this;
  
  this = operator_new(0x200);
  BoneControlledCollisionShapeComponent(this);
  return this;
}


