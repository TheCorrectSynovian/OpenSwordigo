/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004119b8
 * Function: Caver::Proto::AnimationControllerComponent::Clear
 * Signature: undefined __thiscall Clear(AnimationControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AnimationControllerComponent::Clear() */

void __thiscall
Caver::Proto::AnimationControllerComponent::Clear(AnimationControllerComponent *this)

{
  if (this[0x18] != (AnimationControllerComponent)0x0) {
    this[0x14] = (AnimationControllerComponent)0x0;
    *(undefined8 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


