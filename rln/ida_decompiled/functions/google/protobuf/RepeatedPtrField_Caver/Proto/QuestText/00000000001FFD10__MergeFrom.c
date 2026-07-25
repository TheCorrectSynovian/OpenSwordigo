/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFD10
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto9QuestTextEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::QuestText>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::QuestText> const&)
 *
 * Callers: 1
 *   0x00000000002EB780  Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState const&)
 *
 * Callees: 1
 *   0x00000000002F11BC  google::protobuf::RepeatedPtrField<Caver::Proto::QuestText>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::QuestText> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFD18 string=0x00000000001FFD1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::QuestText>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto9QuestTextEE9MergeFromERKS5_();
}

