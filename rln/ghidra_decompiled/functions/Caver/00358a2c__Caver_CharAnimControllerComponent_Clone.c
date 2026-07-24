/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00358a2c
 * Function: Caver::CharAnimControllerComponent::Clone
 * Signature: undefined __thiscall Clone(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharAnimControllerComponent::Clone() const */

CharAnimControllerComponent * __thiscall
Caver::CharAnimControllerComponent::Clone(CharAnimControllerComponent *this)

{
  CharAnimControllerComponent *this_00;
  
  this_00 = operator_new(0x188);
  CharAnimControllerComponent(this_00);
  AnimationControllerComponent::InitWithComponent
            ((AnimationControllerComponent *)this_00,(AnimationControllerComponent *)this);
  *(undefined4 *)(this_00 + 0xc0) = *(undefined4 *)(this + 0xc0);
  *(undefined4 *)(this_00 + 0xd8) = *(undefined4 *)(this + 0xd8);
  *(undefined4 *)(this_00 + 0xf0) = *(undefined4 *)(this + 0xf0);
  *(undefined4 *)(this_00 + 0x108) = *(undefined4 *)(this + 0x108);
  *(undefined4 *)(this_00 + 0x120) = *(undefined4 *)(this + 0x120);
  *(undefined4 *)(this_00 + 0x138) = *(undefined4 *)(this + 0x138);
  return this_00;
}


