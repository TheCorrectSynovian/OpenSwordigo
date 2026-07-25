/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5510
 * Mangled: ._ZN5Caver5Proto23DoorControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::DoorControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002B29D8  Caver::DoorControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA01C  Caver::Proto::DoorControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5518 string=0x00000000001F551C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::DoorControllerComponent::default_instance(Caver::Proto::DoorControllerComponent *this)
{
  return _ZN5Caver5Proto23DoorControllerComponent16default_instanceEv(this);
}

