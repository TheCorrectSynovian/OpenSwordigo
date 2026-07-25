/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4390
 * Mangled: ._ZN5Caver5Proto9QuestText9MergeFromERKS1_
 * Demangled: Caver::Proto::QuestText::MergeFrom(Caver::Proto::QuestText const&)
 *
 * Callers: 4
 *   0x00000000002ECED8  Caver::Proto::QuestText::QuestText(Caver::Proto::QuestText const&)
 *   0x00000000002ED720  Caver::Proto::QuestText::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002ED724  Caver::Proto::QuestText::CopyFrom(Caver::Proto::QuestText const&)
 *   0x00000000002F11BC  google::protobuf::RepeatedPtrField<Caver::Proto::QuestText>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::QuestText> const&)
 *
 * Callees: 1
 *   0x00000000002ECED8  Caver::Proto::QuestText::QuestText(Caver::Proto::QuestText const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4398 string=0x00000000001F439C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::QuestText::MergeFrom()
{
  JUMPOUT(0x2ECF94);
}

