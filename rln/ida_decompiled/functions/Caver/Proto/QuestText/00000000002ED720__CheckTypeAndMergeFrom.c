/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ED720
 * Mangled: _ZN5Caver5Proto9QuestText21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::QuestText::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4390  Caver::Proto::QuestText::MergeFrom(Caver::Proto::QuestText const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002ED720 string=0x00000000001F4390 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::QuestText::CheckTypeAndMergeFrom(
        Caver::Proto::QuestText *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::QuestText::MergeFrom();
}

