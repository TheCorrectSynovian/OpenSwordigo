/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00426568
 * Function: Caver::Proto::AttackComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(AttackComponent * this, AttackComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AttackComponent::CopyFrom(Caver::Proto::AttackComponent const&) */

void __thiscall
Caver::Proto::AttackComponent::CopyFrom(AttackComponent *this,AttackComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


