/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6690
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto10QuestStateEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::QuestState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::QuestState> const&)
 *
 * Callers: 1
 *   0x00000000002EB780  Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState const&)
 *
 * Callees: 1
 *   0x00000000002F10BC  google::protobuf::RepeatedPtrField<Caver::Proto::QuestState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::QuestState> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6698 string=0x00000000001F669C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::QuestState>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto10QuestStateEE9MergeFromERKS5_();
}

