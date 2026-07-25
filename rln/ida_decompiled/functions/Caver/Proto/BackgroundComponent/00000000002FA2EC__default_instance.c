/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA2EC
 * Mangled: _ZN5Caver5Proto19BackgroundComponent16default_instanceEv
 * Demangled: Caver::Proto::BackgroundComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F6BE0  Caver::Proto::BackgroundComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FA2F4 string=0x00000000002FA2F8 "S"
 *   insn=0x00000000002FA2F8 string=0x00000000002FA2FC "s"
 *   insn=0x00000000002FA2FC string=0x00000000002FA300 "`"
 *   insn=0x00000000002FA300 string=0x00000000002FA304 "`"
 *   insn=0x00000000002FA304 string=0x00000000002FA308 "R!"
 *   insn=0x00000000002FA308 string=0x00000000002FA30C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BackgroundComponent::default_instance(Caver::Proto::BackgroundComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::BackgroundComponent::default_instance_;
  if ( !Caver::Proto::BackgroundComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::BackgroundComponent::default_instance_;
  }
  return result;
}

