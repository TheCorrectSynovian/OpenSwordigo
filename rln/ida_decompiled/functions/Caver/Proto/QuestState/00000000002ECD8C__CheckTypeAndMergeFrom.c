/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ECD8C
 * Mangled: _ZN5Caver5Proto10QuestState21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::QuestState::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3770  Caver::Proto::QuestState::MergeFrom(Caver::Proto::QuestState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002ECD8C string=0x00000000001F3770 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::QuestState::CheckTypeAndMergeFrom(
        Caver::Proto::QuestState *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::QuestState::MergeFrom();
}

