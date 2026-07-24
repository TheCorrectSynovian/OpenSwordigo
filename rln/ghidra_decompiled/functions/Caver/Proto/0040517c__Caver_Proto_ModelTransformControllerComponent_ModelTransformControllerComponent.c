/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040517c
 * Function: Caver::Proto::ModelTransformControllerComponent::ModelTransformControllerComponent
 * Signature: undefined __thiscall ModelTransformControllerComponent(ModelTransformControllerComponent * this, ModelTransformControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelTransformControllerComponent::ModelTransformControllerComponent(Caver::Proto::ModelTransformControllerComponent
   const&) */

void __thiscall
Caver::Proto::ModelTransformControllerComponent::ModelTransformControllerComponent
          (ModelTransformControllerComponent *this,ModelTransformControllerComponent *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5c10;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x28) = 0;
  MergeFrom(this,param_1);
  return;
}


