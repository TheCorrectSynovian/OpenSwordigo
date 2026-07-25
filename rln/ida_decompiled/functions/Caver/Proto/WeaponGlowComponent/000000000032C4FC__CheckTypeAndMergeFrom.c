/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032C4FC
 * Mangled: _ZN5Caver5Proto19WeaponGlowComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::WeaponGlowComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5690  Caver::Proto::WeaponGlowComponent::MergeFrom(Caver::Proto::WeaponGlowComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000032C4FC string=0x00000000001F5690 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::WeaponGlowComponent::CheckTypeAndMergeFrom(
        Caver::Proto::WeaponGlowComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::WeaponGlowComponent::MergeFrom();
}

