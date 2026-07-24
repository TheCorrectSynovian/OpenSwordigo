/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00421b34
 * Function: Caver::Proto::FireEmitterComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(FireEmitterComponent * this, FireEmitterComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireEmitterComponent::CopyFrom(Caver::Proto::FireEmitterComponent const&) */

void __thiscall
Caver::Proto::FireEmitterComponent::CopyFrom
          (FireEmitterComponent *this,FireEmitterComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


