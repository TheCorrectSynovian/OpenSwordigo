/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC950
 * Mangled: ._ZN5Caver5Proto9QuestTextC2Ev
 * Demangled: Caver::Proto::QuestText::QuestText(void)
 *
 * Callers: 1
 *   0x00000000003B7610  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *
 * Callees: 1
 *   0x00000000002ECE30  Caver::Proto::QuestState::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC958 string=0x00000000001FC95C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::QuestText::QuestText(Caver::Proto::QuestText *this)
{
  JUMPOUT(0x2ECE88);
}

