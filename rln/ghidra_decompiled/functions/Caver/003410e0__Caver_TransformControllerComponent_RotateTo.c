/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003410e0
 * Function: Caver::TransformControllerComponent::RotateTo
 * Signature: undefined __thiscall RotateTo(TransformControllerComponent * this, float param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformControllerComponent::RotateTo(float, float) */

void __thiscall
Caver::TransformControllerComponent::RotateTo
          (TransformControllerComponent *this,float param_1,float param_2)

{
  *(float *)(this + 0x80) = param_1;
  this[0x7c] = (TransformControllerComponent)0x1;
  *(float *)(this + 0x84) = param_1 - *(float *)(*(long *)(this + 0x28) + 0x80);
  *(float *)(this + 0x88) = param_2;
  return;
}


