/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA2B8
 * Mangled: _ZN5Caver5Proto19HeroEntityComponent16default_instanceEv
 * Demangled: Caver::Proto::HeroEntityComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002009A0  Caver::Proto::HeroEntityComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FA2C0 string=0x00000000002FA2C4 "S"
 *   insn=0x00000000002FA2C4 string=0x00000000002FA2C8 "s"
 *   insn=0x00000000002FA2C8 string=0x00000000002FA2CC "`"
 *   insn=0x00000000002FA2CC string=0x00000000002FA2D0 "`"
 *   insn=0x00000000002FA2D0 string=0x00000000002FA2D4 "_!"
 *   insn=0x00000000002FA2D4 string=0x00000000002FA2D8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::HeroEntityComponent::default_instance(Caver::Proto::HeroEntityComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::HeroEntityComponent::default_instance_;
  if ( !Caver::Proto::HeroEntityComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::HeroEntityComponent::default_instance_;
  }
  return result;
}

