/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F68C0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver15ParticleEmitterEEC2INS1_20TrailParticleEmitterEEEPT_
 * Demangled: boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::TrailParticleEmitter>(Caver::TrailParticleEmitter *)
 *
 * Callers: 1
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *
 * Callees: 1
 *   0x0000000000453834  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::TrailParticleEmitter>(Caver::TrailParticleEmitter *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F68C8 string=0x00000000001F68CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::TrailParticleEmitter>()
{
  return _ZN5boost10shared_ptrIN5Caver15ParticleEmitterEEC2INS1_20TrailParticleEmitterEEEPT_();
}

