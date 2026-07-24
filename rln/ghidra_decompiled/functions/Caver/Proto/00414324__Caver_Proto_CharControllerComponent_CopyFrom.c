/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00414324
 * Function: Caver::Proto::CharControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(CharControllerComponent * this, CharControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharControllerComponent::CopyFrom(Caver::Proto::CharControllerComponent const&) */

void __thiscall
Caver::Proto::CharControllerComponent::CopyFrom
          (CharControllerComponent *this,CharControllerComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


