/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6C20
 * Mangled: ._ZN6google8protobuf8internal20RepeatedPtrFieldBase9MergeFromINS0_16RepeatedPtrFieldIN5Caver5Proto11GuideTargetEE11TypeHandlerEEEvRKS2_
 * Demangled: google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Callers: 1
 *   0x00000000002E65A4  Caver::Proto::GameData::GameData(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000002E8330  google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6C28 string=0x00000000001F6C2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget>::TypeHandler>()
{
  return _ZN6google8protobuf8internal20RepeatedPtrFieldBase9MergeFromINS0_16RepeatedPtrFieldIN5Caver5Proto11GuideTargetEE11TypeHandlerEEEvRKS2_();
}

