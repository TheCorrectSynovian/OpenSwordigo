/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003148e0
 * Function: Caver::BoneControlledCollisionShapeComponent::ValueForBindedProperty
 * Signature: undefined __thiscall ValueForBindedProperty(BoneControlledCollisionShapeComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BoneControlledCollisionShapeComponent::ValueForBindedProperty(int) */

void __thiscall
Caver::BoneControlledCollisionShapeComponent::ValueForBindedProperty
          (BoneControlledCollisionShapeComponent *this,int param_1)

{
  if (param_1 == 0x12d) {
    BindingValue::ValueWithString((BindingValue *)(this + 0x1e8),(string *)0x12d);
    return;
  }
  CollisionShapeComponent::ValueForBindedProperty((int)this);
  return;
}


