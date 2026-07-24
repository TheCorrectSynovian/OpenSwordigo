/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031f7e0
 * Function: Caver::BlendAnimationComponent::Clone
 * Signature: undefined __thiscall Clone(BlendAnimationComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BlendAnimationComponent::Clone() const */

BlendAnimationComponent * __thiscall
Caver::BlendAnimationComponent::Clone(BlendAnimationComponent *this)

{
  BlendAnimationComponent *this_00;
  long lVar1;
  long lVar2;
  float fVar3;
  
  this_00 = operator_new(0xa0);
  BlendAnimationComponent(this_00);
  *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this + 0x20);
  FUN_0066a6a8(this_00 + 0x38,this + 0x38);
  *(undefined4 *)(this_00 + 0x80) = *(undefined4 *)(this + 0x80);
  *(undefined4 *)(this_00 + 0x90) = *(undefined4 *)(this + 0x90);
  lVar2 = *(long *)(this + 0x78);
  lVar1 = *(long *)(this_00 + 0x78);
  *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(lVar2 + 0x24);
  fVar3 = *(float *)(lVar2 + 0x28);
  if (fVar3 <= 0.0) {
    fVar3 = *(float *)(lVar2 + 0x24);
  }
  *(float *)(lVar1 + 0x28) = fVar3;
  return this_00;
}


