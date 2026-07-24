/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031bbb0
 * Function: Caver::CollisionShapeComponent::ImplementsInterface
 * Signature: undefined __thiscall ImplementsInterface(CollisionShapeComponent * this, long param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShapeComponent::ImplementsInterface(long) */

bool __thiscall
Caver::CollisionShapeComponent::ImplementsInterface(CollisionShapeComponent *this,long param_1)

{
  return (undefined *)param_1 == PTR_Interface_007e5b08 ||
         (undefined *)param_1 == PTR_Interface_007e5840;
}


