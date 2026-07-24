/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040d618
 * Function: Caver::Proto::DamageComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(DamageComponent * this, DamageComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DamageComponent::CopyFrom(Caver::Proto::DamageComponent const&) */

void __thiscall
Caver::Proto::DamageComponent::CopyFrom(DamageComponent *this,DamageComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


