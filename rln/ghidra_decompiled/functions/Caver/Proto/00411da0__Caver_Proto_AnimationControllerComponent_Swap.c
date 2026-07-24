/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411da0
 * Function: Caver::Proto::AnimationControllerComponent::Swap
 * Signature: undefined __thiscall Swap(AnimationControllerComponent * this, AnimationControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AnimationControllerComponent::Swap(Caver::Proto::AnimationControllerComponent*) */

void __thiscall
Caver::Proto::AnimationControllerComponent::Swap
          (AnimationControllerComponent *this,AnimationControllerComponent *param_1)

{
  undefined4 uVar1;
  AnimationControllerComponent AVar2;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    AVar2 = this[0x14];
    this[0x14] = param_1[0x14];
    param_1[0x14] = AVar2;
                    /* try { // try from 00411ddc to 00511ddf has its CatchHandler @ 00411e3c */
    uVar1 = *(undefined4 *)(this + 0x18);
                    /* try { // try from 00411de0 to 00511e5b has its CatchHandler @ 00411d70 */
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


