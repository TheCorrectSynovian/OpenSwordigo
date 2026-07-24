/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0034117c
 * Function: Caver::TransformControllerComponent::ScaleBy
 * Signature: undefined __thiscall ScaleBy(TransformControllerComponent * this, float param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TransformControllerComponent::ScaleBy(float, float) */

void __thiscall
Caver::TransformControllerComponent::ScaleBy
          (TransformControllerComponent *this,float param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  
  bVar1 = param_2 < DAT_00683734;
  fVar2 = *(float *)(*(SceneObject **)(this + 0x28) + 0x88) * param_1;
  *(float *)(this + 0xb0) = fVar2;
  if (bVar1) {
    SceneObject::SetInstanceScaling(*(SceneObject **)(this + 0x28),fVar2);
    return;
  }
  this[0xac] = (TransformControllerComponent)0x1;
  *(float *)(this + 0xb4) = param_2;
  return;
}


