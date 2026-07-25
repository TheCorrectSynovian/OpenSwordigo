/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000335B40
 * Mangled: _ZN5Caver5Proto29ProjectileControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ProjectileControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF4F0  Caver::Proto::ProjectileControllerComponent::MergeFrom(Caver::Proto::ProjectileControllerComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ProjectileControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::ProjectileControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::ProjectileControllerComponent::MergeFrom();
}

