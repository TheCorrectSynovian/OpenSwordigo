/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032B238
 * Mangled: _ZN5Caver5Proto34SwingableWeaponControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::SwingableWeaponControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200620  Caver::Proto::SwingableWeaponControllerComponent::MergeFrom(Caver::Proto::SwingableWeaponControllerComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SwingableWeaponControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::SwingableWeaponControllerComponent *this,
        const Caver::Proto::SwingableWeaponControllerComponent *a2)
{
  Caver::Proto::SwingableWeaponControllerComponent::MergeFrom(this, a2);
}

