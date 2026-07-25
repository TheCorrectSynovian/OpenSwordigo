/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6160
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto21PlayerProfile_CounterEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::PlayerProfile_Counter>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::PlayerProfile_Counter> const&)
 *
 * Callers: 1
 *   0x00000000002E94F4  Caver::Proto::PlayerProfile::PlayerProfile(Caver::Proto::PlayerProfile const&)
 *
 * Callees: 1
 *   0x00000000002EB688  google::protobuf::RepeatedPtrField<Caver::Proto::PlayerProfile_Counter>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::PlayerProfile_Counter> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6168 string=0x00000000001F616C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::PlayerProfile_Counter>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto21PlayerProfile_CounterEE9MergeFromERKS5_();
}

