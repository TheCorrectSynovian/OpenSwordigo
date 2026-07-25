/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032CBA4
 * Mangled: _ZN5Caver5Proto20WeaponTrailComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::WeaponTrailComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002007A0  Caver::Proto::WeaponTrailComponent::MergeFrom(Caver::Proto::WeaponTrailComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::WeaponTrailComponent::CheckTypeAndMergeFrom(
        Caver::Proto::WeaponTrailComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::WeaponTrailComponent::MergeFrom();
}

