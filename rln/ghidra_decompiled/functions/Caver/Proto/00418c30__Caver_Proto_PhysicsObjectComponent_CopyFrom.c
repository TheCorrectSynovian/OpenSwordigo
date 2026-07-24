/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00418c30
 * Function: Caver::Proto::PhysicsObjectComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(PhysicsObjectComponent * this, PhysicsObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PhysicsObjectComponent::CopyFrom(Caver::Proto::PhysicsObjectComponent const&) */

void __thiscall
Caver::Proto::PhysicsObjectComponent::CopyFrom
          (PhysicsObjectComponent *this,PhysicsObjectComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


