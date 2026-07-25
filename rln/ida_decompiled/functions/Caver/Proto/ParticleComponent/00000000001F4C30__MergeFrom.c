/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4C30
 * Mangled: ._ZN5Caver5Proto17ParticleComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::ParticleComponent::MergeFrom(Caver::Proto::ParticleComponent const&)
 *
 * Callers: 3
 *   0x000000000031F3D4  Caver::Proto::ParticleComponent::ParticleComponent(Caver::Proto::ParticleComponent const&)
 *   0x000000000031FAFC  Caver::Proto::ParticleComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000031FB00  Caver::Proto::ParticleComponent::CopyFrom(Caver::Proto::ParticleComponent const&)
 *
 * Callees: 1
 *   0x000000000031F3D4  Caver::Proto::ParticleComponent::ParticleComponent(Caver::Proto::ParticleComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4C38 string=0x00000000001F4C3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::ParticleComponent::MergeFrom()
{
  JUMPOUT(0x31F42C);
}

