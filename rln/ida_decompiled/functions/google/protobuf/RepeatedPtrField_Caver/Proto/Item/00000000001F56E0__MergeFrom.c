/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F56E0
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto4ItemEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::Item>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Item> const&)
 *
 * Callers: 1
 *   0x00000000002E65A4  Caver::Proto::GameData::GameData(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000002E7AA8  google::protobuf::RepeatedPtrField<Caver::Proto::Item>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F56E8 string=0x00000000001F56EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::Item>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto4ItemEE9MergeFromERKS5_();
}

