/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0036610c
 * Function: Caver::DamageComponent::DeliverImpact
 * Signature: undefined __thiscall DeliverImpact(DamageComponent * this, DamageImpact * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DamageComponent::DeliverImpact(Caver::DamageImpact*) */

void __thiscall Caver::DamageComponent::DeliverImpact(DamageComponent *this,DamageImpact *param_1)

{
  SceneObject::HandleMessage(*(SceneObject **)(param_1 + 8),0xe,param_1);
  SceneObject::HandleMessage(*(SceneObject **)(this + 0x28),0xd,param_1);
  if (*(SceneObject **)(*(long *)(this + 0x28) + 0x30) != (SceneObject *)0x0) {
    SceneObject::HandleMessage(*(SceneObject **)(*(long *)(this + 0x28) + 0x30),0xd,param_1);
    return;
  }
  return;
}


