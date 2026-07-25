/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202760
 * Mangled: ._ZN5Caver5Proto27ElevatorControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::ElevatorControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002B3B78  Caver::ElevatorControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9F8C  Caver::Proto::ElevatorControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202768 string=0x000000000020276C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ElevatorControllerComponent::default_instance(
        Caver::Proto::ElevatorControllerComponent *this)
{
  return _ZN5Caver5Proto27ElevatorControllerComponent16default_instanceEv(this);
}

