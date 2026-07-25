/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD0A0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver15ParticleEmitterEEC2INS1_21WhooshParticleEmitterEEEPT_
 * Demangled: boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::WhooshParticleEmitter>(Caver::WhooshParticleEmitter *)
 *
 * Callers: 1
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *
 * Callees: 1
 *   0x00000000004538E4  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::WhooshParticleEmitter>(Caver::WhooshParticleEmitter *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD0A8 string=0x00000000001FD0AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::WhooshParticleEmitter>()
{
  return _ZN5boost10shared_ptrIN5Caver15ParticleEmitterEEC2INS1_21WhooshParticleEmitterEEEPT_();
}

