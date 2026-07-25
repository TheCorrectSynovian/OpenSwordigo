/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F85F0
 * Mangled: ._ZN5Caver5Proto23DoorControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::DoorControllerComponent::MergeFrom(Caver::Proto::DoorControllerComponent const&)
 *
 * Callers: 3
 *   0x0000000000316360  Caver::Proto::DoorControllerComponent::DoorControllerComponent(Caver::Proto::DoorControllerComponent const&)
 *   0x0000000000316AF8  Caver::Proto::DoorControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000316AFC  Caver::Proto::DoorControllerComponent::CopyFrom(Caver::Proto::DoorControllerComponent const&)
 *
 * Callees: 1
 *   0x0000000000316360  Caver::Proto::DoorControllerComponent::DoorControllerComponent(Caver::Proto::DoorControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F85F8 string=0x00000000001F85FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::DoorControllerComponent::MergeFrom()
{
  JUMPOUT(0x3163B4);
}

