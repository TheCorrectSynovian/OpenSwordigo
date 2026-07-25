/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6E30
 * Mangled: ._ZN5Caver5Proto22ParticleFieldComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::ParticleFieldComponent::MergeFrom(Caver::Proto::ParticleFieldComponent const&)
 *
 * Callers: 3
 *   0x0000000000323634  Caver::Proto::ParticleFieldComponent::ParticleFieldComponent(Caver::Proto::ParticleFieldComponent const&)
 *   0x0000000000323840  Caver::Proto::ParticleFieldComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000323844  Caver::Proto::ParticleFieldComponent::CopyFrom(Caver::Proto::ParticleFieldComponent const&)
 *
 * Callees: 1
 *   0x0000000000323634  Caver::Proto::ParticleFieldComponent::ParticleFieldComponent(Caver::Proto::ParticleFieldComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6E38 string=0x00000000001F6E3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::ParticleFieldComponent::MergeFrom()
{
  JUMPOUT(0x32367C);
}

