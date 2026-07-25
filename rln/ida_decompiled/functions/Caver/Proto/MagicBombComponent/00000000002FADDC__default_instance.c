/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FADDC
 * Mangled: _ZN5Caver5Proto18MagicBombComponent16default_instanceEv
 * Demangled: Caver::Proto::MagicBombComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FB7F0  Caver::Proto::MagicBombComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FADE4 string=0x00000000002FADE8 "s"
 *   insn=0x00000000002FADE8 string=0x00000000002FADEC "s"
 *   insn=0x00000000002FADEC string=0x00000000002FADF0 "`"
 *   insn=0x00000000002FADF0 string=0x00000000002FADF4 "`"
 *   insn=0x00000000002FADF8 string=0x00000000002FADFC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicBombComponent::default_instance(Caver::Proto::MagicBombComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::MagicBombComponent::default_instance_;
  if ( !Caver::Proto::MagicBombComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::MagicBombComponent::default_instance_;
  }
  return result;
}

