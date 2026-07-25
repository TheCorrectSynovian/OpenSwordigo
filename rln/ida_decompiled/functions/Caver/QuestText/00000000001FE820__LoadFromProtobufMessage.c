/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE820
 * Mangled: ._ZN5Caver9QuestText23LoadFromProtobufMessageERKNS_5Proto9QuestTextE
 * Demangled: Caver::QuestText::LoadFromProtobufMessage(Caver::Proto::QuestText const&)
 *
 * Callers: 1
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *
 * Callees: 1
 *   0x00000000003C3B20  Caver::QuestText::LoadFromProtobufMessage(Caver::Proto::QuestText const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE828 string=0x00000000001FE82C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::QuestText::LoadFromProtobufMessage(Caver::QuestText *this, const Caver::Proto::QuestText *a2)
{
  return _ZN5Caver9QuestText23LoadFromProtobufMessageERKNS_5Proto9QuestTextE(this, a2);
}

