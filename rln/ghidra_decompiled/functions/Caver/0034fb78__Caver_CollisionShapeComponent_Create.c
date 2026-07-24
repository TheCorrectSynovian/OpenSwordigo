/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034fb78
 * Function: Caver::CollisionShapeComponent::Create
 * Signature: undefined __cdecl Create(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::Create() */

CollisionShapeComponent * Caver::CollisionShapeComponent::Create(void)

{
  CollisionShapeComponent *this;
  
  this = operator_new(0x1d0);
  CollisionShapeComponent(this);
  return this;
}


