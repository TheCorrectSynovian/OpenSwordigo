/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE400
 * Mangled: ._ZN5Caver5Proto20SoundEffectComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::SoundEffectComponent::MergeFrom(Caver::Proto::SoundEffectComponent const&)
 *
 * Callers: 3
 *   0x0000000000310E98  Caver::Proto::SoundEffectComponent::SoundEffectComponent(Caver::Proto::SoundEffectComponent const&)
 *   0x0000000000311698  Caver::Proto::SoundEffectComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000031169C  Caver::Proto::SoundEffectComponent::CopyFrom(Caver::Proto::SoundEffectComponent const&)
 *
 * Callees: 1
 *   0x0000000000310E98  Caver::Proto::SoundEffectComponent::SoundEffectComponent(Caver::Proto::SoundEffectComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE408 string=0x00000000001FE40C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::SoundEffectComponent::MergeFrom()
{
  JUMPOUT(0x310F00);
}

