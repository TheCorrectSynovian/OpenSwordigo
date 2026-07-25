/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323840
 * Mangled: _ZN5Caver5Proto22ParticleFieldComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ParticleFieldComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6E30  Caver::Proto::ParticleFieldComponent::MergeFrom(Caver::Proto::ParticleFieldComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000323840 string=0x00000000001F6E30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ParticleFieldComponent::CheckTypeAndMergeFrom(
        Caver::Proto::ParticleFieldComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::ParticleFieldComponent::MergeFrom();
}

