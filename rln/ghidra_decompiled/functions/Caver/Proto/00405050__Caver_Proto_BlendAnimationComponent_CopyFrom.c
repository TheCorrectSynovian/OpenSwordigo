/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00405050
 * Function: Caver::Proto::BlendAnimationComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(BlendAnimationComponent * this, BlendAnimationComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BlendAnimationComponent::CopyFrom(Caver::Proto::BlendAnimationComponent const&) */

void __thiscall
Caver::Proto::BlendAnimationComponent::CopyFrom
          (BlendAnimationComponent *this,BlendAnimationComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


