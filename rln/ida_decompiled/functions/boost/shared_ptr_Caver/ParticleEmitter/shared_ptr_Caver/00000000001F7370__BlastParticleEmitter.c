/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7370
 * Mangled: ._ZN5boost10shared_ptrIN5Caver15ParticleEmitterEEC2INS1_20BlastParticleEmitterEEEPT_
 * Demangled: boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::BlastParticleEmitter>(Caver::BlastParticleEmitter *)
 *
 * Callers: 1
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *
 * Callees: 1
 *   0x00000000004536D4  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::BlastParticleEmitter>(Caver::BlastParticleEmitter *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7378 string=0x00000000001F737C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::BlastParticleEmitter>()
{
  return _ZN5boost10shared_ptrIN5Caver15ParticleEmitterEEC2INS1_20BlastParticleEmitterEEEPT_();
}

