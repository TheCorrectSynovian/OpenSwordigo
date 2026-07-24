/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040df8c
 * Function: Caver::Proto::HealthComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(HealthComponent * this, HealthComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HealthComponent::CopyFrom(Caver::Proto::HealthComponent const&) */

void __thiscall
Caver::Proto::HealthComponent::CopyFrom(HealthComponent *this,HealthComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


