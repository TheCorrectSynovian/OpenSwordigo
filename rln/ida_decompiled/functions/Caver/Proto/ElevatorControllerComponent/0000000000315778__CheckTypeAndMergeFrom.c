/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000315778
 * Mangled: _ZN5Caver5Proto27ElevatorControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ElevatorControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002002A0  Caver::Proto::ElevatorControllerComponent::MergeFrom(Caver::Proto::ElevatorControllerComponent const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ElevatorControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::ElevatorControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::ElevatorControllerComponent::MergeFrom();
}

