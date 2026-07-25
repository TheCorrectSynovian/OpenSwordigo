/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031DAD4
 * Mangled: _ZN5Caver5Proto15ParticleEmitter21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ParticleEmitter::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE980  Caver::Proto::ParticleEmitter::MergeFrom(Caver::Proto::ParticleEmitter const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ParticleEmitter::CheckTypeAndMergeFrom(
        Caver::Proto::ParticleEmitter *this,
        const Caver::Proto::ParticleEmitter *a2)
{
  Caver::Proto::ParticleEmitter::MergeFrom(this, a2);
}

