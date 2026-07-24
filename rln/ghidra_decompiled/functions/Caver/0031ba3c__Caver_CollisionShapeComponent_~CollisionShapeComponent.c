/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031ba3c
 * Function: Caver::CollisionShapeComponent::~CollisionShapeComponent
 * Signature: undefined __thiscall ~CollisionShapeComponent(CollisionShapeComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::~CollisionShapeComponent() */

void __thiscall
Caver::CollisionShapeComponent::~CollisionShapeComponent(CollisionShapeComponent *this)

{
  ~CollisionShapeComponent(this);
  operator_delete(this);
  return;
}


