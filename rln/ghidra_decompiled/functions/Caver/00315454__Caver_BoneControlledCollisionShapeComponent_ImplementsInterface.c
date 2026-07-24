/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00315454
 * Function: Caver::BoneControlledCollisionShapeComponent::ImplementsInterface
 * Signature: undefined __thiscall ImplementsInterface(BoneControlledCollisionShapeComponent * this, long param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BoneControlledCollisionShapeComponent::ImplementsInterface(long) */

bool __thiscall
Caver::BoneControlledCollisionShapeComponent::ImplementsInterface
          (BoneControlledCollisionShapeComponent *this,long param_1)

{
  if ((undefined *)param_1 == PTR_Interface_007e7210) {
    return true;
  }
  return (undefined *)param_1 == PTR_Interface_007e5b08 ||
         (undefined *)param_1 == PTR_Interface_007e5840;
}


