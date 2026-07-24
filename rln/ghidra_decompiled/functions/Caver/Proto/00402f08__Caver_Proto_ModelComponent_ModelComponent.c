/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00402f08
 * Function: Caver::Proto::ModelComponent::ModelComponent
 * Signature: undefined __thiscall ModelComponent(ModelComponent * this, ModelComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelComponent::ModelComponent(Caver::Proto::ModelComponent const&) */

void __thiscall
Caver::Proto::ModelComponent::ModelComponent(ModelComponent *this,ModelComponent *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e4d30;
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_name__007e7d30;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x38] = (ModelComponent)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x28) = 0;
  MergeFrom(this,param_1);
  return;
}


