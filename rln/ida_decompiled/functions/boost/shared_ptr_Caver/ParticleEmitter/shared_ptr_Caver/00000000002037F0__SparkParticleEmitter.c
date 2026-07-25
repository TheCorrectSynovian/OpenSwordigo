/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002037F0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver15ParticleEmitterEEC2INS1_20SparkParticleEmitterEEEPT_
 * Demangled: boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::SparkParticleEmitter>(Caver::SparkParticleEmitter *)
 *
 * Callers: 1
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *
 * Callees: 1
 *   0x0000000000453784  boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::SparkParticleEmitter>(Caver::SparkParticleEmitter *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002037F8 string=0x00000000002037FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::ParticleEmitter>::shared_ptr<Caver::SparkParticleEmitter>()
{
  return _ZN5boost10shared_ptrIN5Caver15ParticleEmitterEEC2INS1_20SparkParticleEmitterEEEPT_();
}

