/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3740
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto15ParticleEmitterEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter> const&)
 *
 * Callers: 1
 *   0x000000000031DD14  Caver::Proto::ParticleEmitterComponent::ParticleEmitterComponent(Caver::Proto::ParticleEmitterComponent const&)
 *
 * Callees: 1
 *   0x000000000031F08C  google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3748 string=0x00000000001F374C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto15ParticleEmitterEE9MergeFromERKS5_();
}

