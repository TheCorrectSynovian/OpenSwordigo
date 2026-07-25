/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200340
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto5QuestEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::Quest>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Quest> const&)
 *
 * Callers: 1
 *   0x00000000002E65A4  Caver::Proto::GameData::GameData(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000002E7D20  google::protobuf::RepeatedPtrField<Caver::Proto::Quest>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Quest> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200348 string=0x000000000020034C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::Quest>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto5QuestEE9MergeFromERKS5_();
}

