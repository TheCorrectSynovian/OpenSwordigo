/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fa370
 * Function: Caver::Proto::ParticleEmitter::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(ParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitter::InitAsDefaultInstance() */

void __thiscall Caver::Proto::ParticleEmitter::InitAsDefaultInstance(ParticleEmitter *this)

{
  undefined8 uVar1;
  
  uVar1 = Vector3::default_instance();
  *(undefined8 *)(this + 0x10) = uVar1;
  uVar1 = FloatColor::default_instance();
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}


