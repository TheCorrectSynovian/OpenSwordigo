/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032A7D0
 * Mangled: _ZN5Caver5Proto24SwingableWeaponComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::SwingableWeaponComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6730  Caver::Proto::SwingableWeaponComponent::MergeFrom(Caver::Proto::SwingableWeaponComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000032A7D0 string=0x00000000001F6730 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SwingableWeaponComponent::CheckTypeAndMergeFrom(
        Caver::Proto::SwingableWeaponComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::SwingableWeaponComponent::MergeFrom();
}

