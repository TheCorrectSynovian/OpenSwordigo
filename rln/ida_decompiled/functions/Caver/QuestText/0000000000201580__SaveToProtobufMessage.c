/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201580
 * Mangled: ._ZNK5Caver9QuestText21SaveToProtobufMessageEPNS_5Proto9QuestTextE
 * Demangled: Caver::QuestText::SaveToProtobufMessage(Caver::Proto::QuestText *)
 *
 * Callers: 1
 *   0x00000000003B7610  Caver::GameState::SaveToProtobufMessage(Caver::Proto::GameState *)
 *
 * Callees: 1
 *   0x00000000003C3BB4  Caver::QuestText::SaveToProtobufMessage(Caver::Proto::QuestText *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201588 string=0x000000000020158C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::QuestText::SaveToProtobufMessage(Caver::QuestText *this, Caver::Proto::QuestText *a2)
{
  return _ZNK5Caver9QuestText21SaveToProtobufMessageEPNS_5Proto9QuestTextE(this, a2);
}

