/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411d4c
 * Function: Caver::Proto::AnimationControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(AnimationControllerComponent * this, AnimationControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AnimationControllerComponent::CopyFrom(Caver::Proto::AnimationControllerComponent
   const&) */

void __thiscall
Caver::Proto::AnimationControllerComponent::CopyFrom
          (AnimationControllerComponent *this,AnimationControllerComponent *param_1)

{
  if (param_1 != this) {
                    /* catch() { ... } // from try @ 00411de0 with catch @ 00411d70
                       catch() { ... } // from try @ 00411e84 with catch @ 00411d70 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


