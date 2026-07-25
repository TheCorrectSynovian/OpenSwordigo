/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ED2E4
 * Mangled: _ZN5Caver5Proto9QuestText16default_instanceEv
 * Demangled: Caver::Proto::QuestText::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8A40  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002ED2F0 string=0x00000000002ED2F4 "s"
 *   insn=0x00000000002ED2F4 string=0x00000000002ED2F8 "`"
 *   insn=0x00000000002ED2F8 string=0x00000000002ED2FC "`"
 *   insn=0x00000000002ED300 string=0x00000000002ED304 "`"
 *   insn=0x00000000002ED300 string=0x00000000001F8A40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::QuestText::default_instance(Caver::Proto::QuestText *this)
{
  __int64 result; // x0

  result = Caver::Proto::QuestText::default_instance_;
  if ( !Caver::Proto::QuestText::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_GameState_2eproto(0);
    return Caver::Proto::QuestText::default_instance_;
  }
  return result;
}

