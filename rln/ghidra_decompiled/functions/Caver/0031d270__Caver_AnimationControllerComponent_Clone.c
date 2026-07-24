/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031d270
 * Function: Caver::AnimationControllerComponent::Clone
 * Signature: undefined __thiscall Clone(AnimationControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AnimationControllerComponent::Clone() const */

AnimationControllerComponent * __thiscall
Caver::AnimationControllerComponent::Clone(AnimationControllerComponent *this)

{
  AnimationControllerComponent *this_00;
  
  this_00 = operator_new(0xb8);
  AnimationControllerComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x78) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(this + 0x90);
  this_00[0xa8] = this[0xa8];
  return this_00;
}


