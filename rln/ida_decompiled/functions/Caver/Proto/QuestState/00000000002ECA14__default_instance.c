/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ECA14
 * Mangled: _ZN5Caver5Proto10QuestState16default_instanceEv
 * Demangled: Caver::Proto::QuestState::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8A40  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002ECA20 string=0x00000000002ECA24 "s"
 *   insn=0x00000000002ECA24 string=0x00000000002ECA28 "`"
 *   insn=0x00000000002ECA28 string=0x00000000002ECA2C "`"
 *   insn=0x00000000002ECA30 string=0x00000000002ECA34 "`"
 *   insn=0x00000000002ECA30 string=0x00000000001F8A40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestState::default_instance(Caver::Proto::QuestState *this)
{
  __int64 result; // x0

  result = Caver::Proto::QuestState::default_instance_;
  if ( !Caver::Proto::QuestState::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameState_2eproto(0);
    return Caver::Proto::QuestState::default_instance_;
  }
  return result;
}

