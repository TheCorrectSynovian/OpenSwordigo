/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6DB0
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto14ObjectTemplateEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate> const&)
 *
 * Callers: 1
 *   0x00000000002FC9D4  Caver::Proto::ObjectLibrary::ObjectLibrary(Caver::Proto::ObjectLibrary const&)
 *
 * Callees: 1
 *   0x00000000002FDE24  google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6DB8 string=0x00000000001F6DBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::ObjectTemplate>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto14ObjectTemplateEE9MergeFromERKS5_();
}

