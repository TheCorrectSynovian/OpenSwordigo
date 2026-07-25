/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002002A0
 * Mangled: ._ZN5Caver5Proto27ElevatorControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::ElevatorControllerComponent::MergeFrom(Caver::Proto::ElevatorControllerComponent const&)
 *
 * Callers: 3
 *   0x00000000003152C0  Caver::Proto::ElevatorControllerComponent::ElevatorControllerComponent(Caver::Proto::ElevatorControllerComponent const&)
 *   0x0000000000315778  Caver::Proto::ElevatorControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000031577C  Caver::Proto::ElevatorControllerComponent::CopyFrom(Caver::Proto::ElevatorControllerComponent const&)
 *
 * Callees: 1
 *   0x00000000003152C0  Caver::Proto::ElevatorControllerComponent::ElevatorControllerComponent(Caver::Proto::ElevatorControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002002A8 string=0x00000000002002AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::ElevatorControllerComponent::MergeFrom()
{
  JUMPOUT(0x315314);
}

