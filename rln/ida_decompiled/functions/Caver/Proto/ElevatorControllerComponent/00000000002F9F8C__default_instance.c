/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9F8C
 * Mangled: _ZN5Caver5Proto27ElevatorControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::ElevatorControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000202760  Caver::Proto::ElevatorControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002F9F94 string=0x00000000002F9F98 "s"
 *   insn=0x00000000002F9F98 string=0x00000000002F9F9C "s"
 *   insn=0x00000000002F9F9C string=0x00000000002F9FA0 "`"
 *   insn=0x00000000002F9FA0 string=0x00000000002F9FA4 "`"
 *   insn=0x00000000002F9FA4 string=0x00000000002F9FA8 "*""
 *   insn=0x00000000002F9FA8 string=0x00000000002F9FAC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ElevatorControllerComponent::default_instance(
        Caver::Proto::ElevatorControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::ElevatorControllerComponent::default_instance_;
  if ( !Caver::Proto::ElevatorControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ElevatorControllerComponent::default_instance_;
  }
  return result;
}

