/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00415178
 * Function: Caver::Proto::BushControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(BushControllerComponent * this, BushControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BushControllerComponent::CopyFrom(Caver::Proto::BushControllerComponent const&) */

void __thiscall
Caver::Proto::BushControllerComponent::CopyFrom
          (BushControllerComponent *this,BushControllerComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


