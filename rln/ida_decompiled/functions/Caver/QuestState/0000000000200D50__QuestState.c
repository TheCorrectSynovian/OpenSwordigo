/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200D50
 * Mangled: ._ZN5Caver10QuestStateC2Ev
 * Demangled: Caver::QuestState::QuestState(void)
 *
 * Callers: 2
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *   0x00000000003B7EC0  Caver::GameState::AddStateForQuestWithName(std::string const&)
 *
 * Callees: 1
 *   0x00000000003C3A60  Caver::QuestState::QuestState(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000200D54 string=0x00000000003C3A60 ""
 *   insn=0x0000000000200D58 string=0x0000000000200D5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::QuestState::QuestState(Caver::QuestState *this)
{
  return _ZN5Caver10QuestStateC2Ev(this);
}

