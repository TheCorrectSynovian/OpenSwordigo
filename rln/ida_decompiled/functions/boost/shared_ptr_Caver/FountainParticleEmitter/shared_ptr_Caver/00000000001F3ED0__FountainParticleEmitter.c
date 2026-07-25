/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3ED0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver23FountainParticleEmitterEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::FountainParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(Caver::FountainParticleEmitter *)
 *
 * Callers: 1
 *   0x00000000003E0E08  Caver::OverlayMenuButton::SetSparkling(bool)
 *
 * Callees: 1
 *   0x00000000003E29AC  boost::shared_ptr<Caver::FountainParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>(Caver::FountainParticleEmitter *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3ED8 string=0x00000000001F3EDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::FountainParticleEmitter>::shared_ptr<Caver::FountainParticleEmitter>()
{
  return _ZN5boost10shared_ptrIN5Caver23FountainParticleEmitterEEC2IS2_EEPT_();
}

