/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00404920
 * Function: Caver::Proto::KeyframeAnimationComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(KeyframeAnimationComponent * this, KeyframeAnimationComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::KeyframeAnimationComponent::CopyFrom(Caver::Proto::KeyframeAnimationComponent
   const&) */

void __thiscall
Caver::Proto::KeyframeAnimationComponent::CopyFrom
          (KeyframeAnimationComponent *this,KeyframeAnimationComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


