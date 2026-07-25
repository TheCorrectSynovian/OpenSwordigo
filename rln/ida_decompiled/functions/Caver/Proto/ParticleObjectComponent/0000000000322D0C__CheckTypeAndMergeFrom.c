/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322D0C
 * Mangled: _ZN5Caver5Proto23ParticleObjectComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ParticleObjectComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE660  Caver::Proto::ParticleObjectComponent::MergeFrom(Caver::Proto::ParticleObjectComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ParticleObjectComponent::CheckTypeAndMergeFrom(
        Caver::Proto::ParticleObjectComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::ParticleObjectComponent::MergeFrom();
}

