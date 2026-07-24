/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031e60c
 * Function: Caver::BlendAnimationComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(BlendAnimationComponent * this, BlendAnimationComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BlendAnimationComponent::InitWithComponent(Caver::BlendAnimationComponent const*) */

void __thiscall
Caver::BlendAnimationComponent::InitWithComponent
          (BlendAnimationComponent *this,BlendAnimationComponent *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  lVar2 = *(long *)(param_1 + 0x78);
  lVar1 = *(long *)(this + 0x78);
  *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(lVar2 + 0x24);
  fVar3 = *(float *)(lVar2 + 0x28);
  if (fVar3 <= 0.0) {
    fVar3 = *(float *)(lVar2 + 0x24);
  }
  *(float *)(lVar1 + 0x28) = fVar3;
  return;
}


