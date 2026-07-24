/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00404974
 * Function: Caver::Proto::KeyframeAnimationComponent::Swap
 * Signature: undefined __thiscall Swap(KeyframeAnimationComponent * this, KeyframeAnimationComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::KeyframeAnimationComponent::Swap(Caver::Proto::KeyframeAnimationComponent*) */

void __thiscall
Caver::Proto::KeyframeAnimationComponent::Swap
          (KeyframeAnimationComponent *this,KeyframeAnimationComponent *param_1)

{
  undefined4 uVar1;
  KeyframeAnimationComponent KVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    KVar2 = this[0x18];
    this[0x18] = param_1[0x18];
    param_1[0x18] = KVar2;
    KVar2 = this[0x19];
    this[0x19] = param_1[0x19];
    param_1[0x19] = KVar2;
    uVar3 = *(undefined8 *)(this + 0x1c);
    *(undefined8 *)(this + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)(param_1 + 0x1c) = uVar3;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


