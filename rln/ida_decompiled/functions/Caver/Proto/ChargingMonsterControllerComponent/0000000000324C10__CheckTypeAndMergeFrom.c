/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000324C10
 * Mangled: _ZN5Caver5Proto34ChargingMonsterControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ChargingMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE7E0  Caver::Proto::ChargingMonsterControllerComponent::MergeFrom(Caver::Proto::ChargingMonsterControllerComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ChargingMonsterControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::ChargingMonsterControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::ChargingMonsterControllerComponent::MergeFrom();
}

