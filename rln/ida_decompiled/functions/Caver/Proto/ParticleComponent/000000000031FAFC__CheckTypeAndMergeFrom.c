/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031FAFC
 * Mangled: _ZN5Caver5Proto17ParticleComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ParticleComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4C30  Caver::Proto::ParticleComponent::MergeFrom(Caver::Proto::ParticleComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000031FAFC string=0x00000000001F4C30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ParticleComponent::CheckTypeAndMergeFrom(
        Caver::Proto::ParticleComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::ParticleComponent::MergeFrom();
}

