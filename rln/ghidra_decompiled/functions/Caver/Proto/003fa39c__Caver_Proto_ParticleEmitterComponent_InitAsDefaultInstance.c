/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fa39c
 * Function: Caver::Proto::ParticleEmitterComponent::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(ParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitterComponent::InitAsDefaultInstance() */

void __thiscall
Caver::Proto::ParticleEmitterComponent::InitAsDefaultInstance(ParticleEmitterComponent *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x78) = uVar1;
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x80) = uVar1;
  return;
}


