/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003faba4
 * Function: Caver::Proto::PortalEffectComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(PortalEffectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalEffectComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::PortalEffectComponent::InitAsDefaultInstance(PortalEffectComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x20) = uVar1;
  return;
}


