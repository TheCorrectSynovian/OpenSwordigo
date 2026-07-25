/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3770
 * Mangled: ._ZN5Caver5Proto10QuestState9MergeFromERKS1_
 * Demangled: Caver::Proto::QuestState::MergeFrom(Caver::Proto::QuestState const&)
 *
 * Callers: 4
 *   0x00000000002EC5F0  Caver::Proto::QuestState::QuestState(Caver::Proto::QuestState const&)
 *   0x00000000002ECD8C  Caver::Proto::QuestState::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002ECD90  Caver::Proto::QuestState::CopyFrom(Caver::Proto::QuestState const&)
 *   0x00000000002F10BC  google::protobuf::RepeatedPtrField<Caver::Proto::QuestState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::QuestState> const&)
 *
 * Callees: 1
 *   0x00000000002EC5F0  Caver::Proto::QuestState::QuestState(Caver::Proto::QuestState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3778 string=0x00000000001F377C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::QuestState::MergeFrom()
{
  JUMPOUT(0x2EC650);
}

