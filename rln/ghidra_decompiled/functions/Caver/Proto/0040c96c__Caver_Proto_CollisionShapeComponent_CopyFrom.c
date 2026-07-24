/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040c96c
 * Function: Caver::Proto::CollisionShapeComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(CollisionShapeComponent * this, CollisionShapeComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollisionShapeComponent::CopyFrom(Caver::Proto::CollisionShapeComponent const&) */

void __thiscall
Caver::Proto::CollisionShapeComponent::CopyFrom
          (CollisionShapeComponent *this,CollisionShapeComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


