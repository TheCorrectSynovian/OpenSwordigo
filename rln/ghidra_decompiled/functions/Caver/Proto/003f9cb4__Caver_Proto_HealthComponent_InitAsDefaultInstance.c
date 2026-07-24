/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f9cb4
 * Function: Caver::Proto::HealthComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(HealthComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::HealthComponent::InitAsDefaultInstance() */

void __thiscall Caver::Proto::HealthComponent::InitAsDefaultInstance(HealthComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector2::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


