/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000316AF8
 * Mangled: _ZN5Caver5Proto23DoorControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::DoorControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F85F0  Caver::Proto::DoorControllerComponent::MergeFrom(Caver::Proto::DoorControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000316AF8 string=0x00000000001F85F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::DoorControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::DoorControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::DoorControllerComponent::MergeFrom();
}

