/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f98f4
 * Function: Caver::Proto::ModelComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(ModelComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::ModelComponent::InitAsDefaultInstance(ModelComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x30) = uVar1;
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x40) = uVar1;
  return;
}


