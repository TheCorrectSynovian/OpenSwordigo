/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FABD0
 * Mangled: _ZN5Caver5Proto21PortalEffectComponent16default_instanceEv
 * Demangled: Caver::Proto::PortalEffectComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F3650  Caver::Proto::PortalEffectComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FABD8 string=0x00000000002FABDC "s"
 *   insn=0x00000000002FABDC string=0x00000000002FABE0 "s"
 *   insn=0x00000000002FABE0 string=0x00000000002FABE4 "`"
 *   insn=0x00000000002FABE4 string=0x00000000002FABE8 "`"
 *   insn=0x00000000002FABEC string=0x00000000002FABF0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PortalEffectComponent::default_instance(Caver::Proto::PortalEffectComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::PortalEffectComponent::default_instance_;
  if ( !Caver::Proto::PortalEffectComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::PortalEffectComponent::default_instance_;
  }
  return result;
}

