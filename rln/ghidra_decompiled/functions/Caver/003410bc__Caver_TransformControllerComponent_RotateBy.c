/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003410bc
 * Function: Caver::TransformControllerComponent::RotateBy
 * Signature: undefined __thiscall RotateBy(TransformControllerComponent * this, float param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformControllerComponent::RotateBy(float, float) */

void __thiscall
Caver::TransformControllerComponent::RotateBy
          (TransformControllerComponent *this,float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(*(long *)(this + 0x28) + 0x80);
  this[0x7c] = (TransformControllerComponent)0x1;
  *(float *)(this + 0x88) = param_2;
  fVar1 = fVar2 + param_1;
  *(float *)(this + 0x80) = fVar1;
  *(float *)(this + 0x84) = fVar1 - fVar2;
  return;
}


