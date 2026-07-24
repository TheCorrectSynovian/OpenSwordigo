/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f9b5c
 * Function: Caver::Proto::WaterMeshComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(WaterMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WaterMeshComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::WaterMeshComponent::InitAsDefaultInstance(WaterMeshComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x20) = uVar1;
  return;
}


