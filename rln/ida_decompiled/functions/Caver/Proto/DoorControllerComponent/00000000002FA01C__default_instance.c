/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA01C
 * Mangled: _ZN5Caver5Proto23DoorControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::DoorControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F5510  Caver::Proto::DoorControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA024 string=0x00000000002FA028 "s"
 *   insn=0x00000000002FA028 string=0x00000000002FA02C "s"
 *   insn=0x00000000002FA02C string=0x00000000002FA030 "`"
 *   insn=0x00000000002FA030 string=0x00000000002FA034 "`"
 *   insn=0x00000000002FA038 string=0x00000000002FA03C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DoorControllerComponent::default_instance(Caver::Proto::DoorControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::DoorControllerComponent::default_instance_;
  if ( !Caver::Proto::DoorControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::DoorControllerComponent::default_instance_;
  }
  return result;
}

