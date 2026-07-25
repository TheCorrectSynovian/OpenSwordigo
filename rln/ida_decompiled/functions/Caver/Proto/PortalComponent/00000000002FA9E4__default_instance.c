/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA9E4
 * Mangled: _ZN5Caver5Proto15PortalComponent16default_instanceEv
 * Demangled: Caver::Proto::PortalComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000203890  Caver::Proto::PortalComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA9EC string=0x00000000002FA9F0 "s"
 *   insn=0x00000000002FA9F0 string=0x00000000002FA9F4 "svG"
 *   insn=0x00000000002FA9F4 string=0x00000000002FA9F8 "`"
 *   insn=0x00000000002FA9F8 string=0x00000000002FA9FC "`"
 *   insn=0x00000000002FAA00 string=0x00000000002FAA04 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PortalComponent::default_instance(Caver::Proto::PortalComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::PortalComponent::default_instance_;
  if ( !Caver::Proto::PortalComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::PortalComponent::default_instance_;
  }
  return result;
}

