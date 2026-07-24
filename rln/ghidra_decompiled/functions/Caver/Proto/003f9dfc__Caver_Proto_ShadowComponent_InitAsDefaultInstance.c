/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f9dfc
 * Function: Caver::Proto::ShadowComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(ShadowComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ShadowComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::ShadowComponent::InitAsDefaultInstance(ShadowComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


