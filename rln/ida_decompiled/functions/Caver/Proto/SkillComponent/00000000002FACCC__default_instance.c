/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FACCC
 * Mangled: _ZN5Caver5Proto14SkillComponent16default_instanceEv
 * Demangled: Caver::Proto::SkillComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FBE20  Caver::Proto::SkillComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FACD4 string=0x00000000002FACD8 "S"
 *   insn=0x00000000002FACD8 string=0x00000000002FACDC "s"
 *   insn=0x00000000002FACDC string=0x00000000002FACE0 "`"
 *   insn=0x00000000002FACE0 string=0x00000000002FACE4 "`"
 *   insn=0x00000000002FACE8 string=0x00000000002FACEC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SkillComponent::default_instance(Caver::Proto::SkillComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::SkillComponent::default_instance_;
  if ( !Caver::Proto::SkillComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::SkillComponent::default_instance_;
  }
  return result;
}

