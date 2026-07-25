/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F9D70
 * Mangled: _ZN5Caver5Proto29ObjectLinkControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F92D0  Caver::Proto::ObjectLinkControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F9D78 string=0x00000000002F9D7C "S"
 *   insn=0x00000000002F9D7C string=0x00000000002F9D80 "s"
 *   insn=0x00000000002F9D80 string=0x00000000002F9D84 "`"
 *   insn=0x00000000002F9D84 string=0x00000000002F9D88 "`"
 *   insn=0x00000000002F9D8C string=0x00000000002F9D90 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectLinkControllerComponent::default_instance(
        Caver::Proto::ObjectLinkControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::ObjectLinkControllerComponent::default_instance_;
  if ( !Caver::Proto::ObjectLinkControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ObjectLinkControllerComponent::default_instance_;
  }
  return result;
}

