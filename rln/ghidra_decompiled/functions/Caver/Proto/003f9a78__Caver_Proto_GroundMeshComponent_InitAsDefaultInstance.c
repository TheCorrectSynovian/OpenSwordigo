/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f9a78
 * Function: Caver::Proto::GroundMeshComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(GroundMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::GroundMeshComponent::InitAsDefaultInstance(GroundMeshComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Rectangle::default_instance();
  *(undefined8 *)(this + 0x58) = uVar1;
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0xd0) = uVar1;
  return;
}


