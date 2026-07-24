/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f9da0
 * Function: Caver::Proto::LightComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(LightComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LightComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::LightComponent::InitAsDefaultInstance(LightComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x30) = uVar1;
  return;
}


