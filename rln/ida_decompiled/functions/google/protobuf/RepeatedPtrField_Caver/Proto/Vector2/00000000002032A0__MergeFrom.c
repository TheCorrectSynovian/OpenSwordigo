/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002032A0
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto7Vector2EE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::Vector2>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Vector2> const&)
 *
 * Callers: 1
 *   0x00000000002D01E8  Caver::Proto::Polygon::Polygon(Caver::Proto::Polygon const&)
 *
 * Callees: 1
 *   0x00000000002D09C4  google::protobuf::RepeatedPtrField<Caver::Proto::Vector2>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Vector2> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002032A8 string=0x00000000002032AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::Vector2>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto7Vector2EE9MergeFromERKS5_();
}

