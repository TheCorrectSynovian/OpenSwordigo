/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f9d3c
 * Function: Caver::Proto::ObjectLinkControllerComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(ObjectLinkControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLinkControllerComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::ObjectLinkControllerComponent::InitAsDefaultInstance
          (ObjectLinkControllerComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x20) = uVar1;
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x28) = uVar1;
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x30) = uVar1;
  return;
}


