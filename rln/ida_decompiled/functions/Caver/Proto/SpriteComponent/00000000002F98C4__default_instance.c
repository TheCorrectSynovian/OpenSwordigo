/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F98C4
 * Mangled: _ZN5Caver5Proto15SpriteComponent16default_instanceEv
 * Demangled: Caver::Proto::SpriteComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F7D50  Caver::Proto::SpriteComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002F98CC string=0x00000000002F98D0 "S"
 *   insn=0x00000000002F98D0 string=0x00000000002F98D4 "s"
 *   insn=0x00000000002F98D4 string=0x00000000002F98D8 "`"
 *   insn=0x00000000002F98D8 string=0x00000000002F98DC "`"
 *   insn=0x00000000002F98E0 string=0x00000000002F98E4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpriteComponent::default_instance(Caver::Proto::SpriteComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::SpriteComponent::default_instance_;
  if ( !Caver::Proto::SpriteComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::SpriteComponent::default_instance_;
  }
  return result;
}

