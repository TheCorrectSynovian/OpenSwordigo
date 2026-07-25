/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF1D0
 * Mangled: ._ZN5Caver5Proto24ParticleEmitterComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::ParticleEmitterComponent::MergeFrom(Caver::Proto::ParticleEmitterComponent const&)
 *
 * Callers: 3
 *   0x000000000031DD14  Caver::Proto::ParticleEmitterComponent::ParticleEmitterComponent(Caver::Proto::ParticleEmitterComponent const&)
 *   0x000000000031F088  Caver::Proto::ParticleEmitterComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000031F198  Caver::Proto::ParticleEmitterComponent::CopyFrom(Caver::Proto::ParticleEmitterComponent const&)
 *
 * Callees: 1
 *   0x000000000031DD14  Caver::Proto::ParticleEmitterComponent::ParticleEmitterComponent(Caver::Proto::ParticleEmitterComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF1D8 string=0x00000000001FF1DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ParticleEmitterComponent::MergeFrom(
        Caver::Proto::ParticleEmitterComponent *this,
        const Caver::Proto::ParticleEmitterComponent *a2)
{
  JUMPOUT(0x31DE0C);
}

