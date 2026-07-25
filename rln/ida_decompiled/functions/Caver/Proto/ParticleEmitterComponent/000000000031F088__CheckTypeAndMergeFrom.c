/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031F088
 * Mangled: _ZN5Caver5Proto24ParticleEmitterComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ParticleEmitterComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF1D0  Caver::Proto::ParticleEmitterComponent::MergeFrom(Caver::Proto::ParticleEmitterComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ParticleEmitterComponent::CheckTypeAndMergeFrom(
        Caver::Proto::ParticleEmitterComponent *this,
        const Caver::Proto::ParticleEmitterComponent *a2)
{
  Caver::Proto::ParticleEmitterComponent::MergeFrom(this, a2);
}

