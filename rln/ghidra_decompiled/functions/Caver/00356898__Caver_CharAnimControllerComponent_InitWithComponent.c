/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00356898
 * Function: Caver::CharAnimControllerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(CharAnimControllerComponent * this, CharAnimControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharAnimControllerComponent::InitWithComponent(Caver::CharAnimControllerComponent const*)
    */

void __thiscall
Caver::CharAnimControllerComponent::InitWithComponent
          (CharAnimControllerComponent *this,CharAnimControllerComponent *param_1)

{
  AnimationControllerComponent::InitWithComponent
            ((AnimationControllerComponent *)this,(AnimationControllerComponent *)param_1);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_1 + 0x138);
  return;
}


