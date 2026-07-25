/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA0CC
 * Mangled: _ZN5Caver5Proto22MonsterEntityComponent16default_instanceEv
 * Demangled: Caver::Proto::MonsterEntityComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F69B0  Caver::Proto::MonsterEntityComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA0D4 string=0x00000000002FA0D8 "S"
 *   insn=0x00000000002FA0D8 string=0x00000000002FA0DC "s"
 *   insn=0x00000000002FA0DC string=0x00000000002FA0E0 "`"
 *   insn=0x00000000002FA0E0 string=0x00000000002FA0E4 "`"
 *   insn=0x00000000002FA0E8 string=0x00000000002FA0EC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterEntityComponent::default_instance(Caver::Proto::MonsterEntityComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::MonsterEntityComponent::default_instance_;
  if ( !Caver::Proto::MonsterEntityComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::MonsterEntityComponent::default_instance_;
  }
  return result;
}

