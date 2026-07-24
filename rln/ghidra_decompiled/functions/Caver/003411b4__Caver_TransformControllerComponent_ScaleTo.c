/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003411b4
 * Function: Caver::TransformControllerComponent::ScaleTo
 * Signature: undefined __thiscall ScaleTo(TransformControllerComponent * this, float param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformControllerComponent::ScaleTo(float, float) */

void __thiscall
Caver::TransformControllerComponent::ScaleTo
          (TransformControllerComponent *this,float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = DAT_00683734;
  *(float *)(this + 0xb0) = param_1;
  if (param_2 < fVar1) {
    SceneObject::SetInstanceScaling(*(SceneObject **)(this + 0x28),param_1);
    return;
  }
  this[0xac] = (TransformControllerComponent)0x1;
  *(float *)(this + 0xb4) = param_2;
  return;
}


