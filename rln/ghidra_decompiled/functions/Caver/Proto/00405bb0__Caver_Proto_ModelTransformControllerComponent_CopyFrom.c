/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00405bb0
 * Function: Caver::Proto::ModelTransformControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ModelTransformControllerComponent * this, ModelTransformControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelTransformControllerComponent::CopyFrom(Caver::Proto::ModelTransformControllerComponent
   const&) */

void __thiscall
Caver::Proto::ModelTransformControllerComponent::CopyFrom
          (ModelTransformControllerComponent *this,ModelTransformControllerComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


