/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE660
 * Mangled: ._ZN5Caver5Proto23ParticleObjectComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::ParticleObjectComponent::MergeFrom(Caver::Proto::ParticleObjectComponent const&)
 *
 * Callers: 3
 *   0x00000000003229A0  Caver::Proto::ParticleObjectComponent::ParticleObjectComponent(Caver::Proto::ParticleObjectComponent const&)
 *   0x0000000000322D0C  Caver::Proto::ParticleObjectComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000322D10  Caver::Proto::ParticleObjectComponent::CopyFrom(Caver::Proto::ParticleObjectComponent const&)
 *
 * Callees: 1
 *   0x00000000003229A0  Caver::Proto::ParticleObjectComponent::ParticleObjectComponent(Caver::Proto::ParticleObjectComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE668 string=0x00000000001FE66C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::ParticleObjectComponent::MergeFrom()
{
  JUMPOUT(0x3229EC);
}

