/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE980
 * Mangled: ._ZN5Caver5Proto15ParticleEmitter9MergeFromERKS1_
 * Demangled: Caver::Proto::ParticleEmitter::MergeFrom(Caver::Proto::ParticleEmitter const&)
 *
 * Callers: 4
 *   0x000000000031CBA8  Caver::Proto::ParticleEmitter::ParticleEmitter(Caver::Proto::ParticleEmitter const&)
 *   0x000000000031DAD4  Caver::Proto::ParticleEmitter::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000031DAD8  Caver::Proto::ParticleEmitter::CopyFrom(Caver::Proto::ParticleEmitter const&)
 *   0x000000000031F08C  google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ParticleEmitter> const&)
 *
 * Callees: 1
 *   0x000000000031CBA8  Caver::Proto::ParticleEmitter::ParticleEmitter(Caver::Proto::ParticleEmitter const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE988 string=0x00000000001FE98C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ParticleEmitter::MergeFrom(
        Caver::Proto::ParticleEmitter *this,
        const Caver::Proto::ParticleEmitter *a2)
{
  JUMPOUT(0x31CC2C);
}

