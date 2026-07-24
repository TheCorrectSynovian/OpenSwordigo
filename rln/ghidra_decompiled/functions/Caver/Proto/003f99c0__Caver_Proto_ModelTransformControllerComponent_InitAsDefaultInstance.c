/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f99c0
 * Function: Caver::Proto::ModelTransformControllerComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(ModelTransformControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelTransformControllerComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::ModelTransformControllerComponent::InitAsDefaultInstance
          (ModelTransformControllerComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


