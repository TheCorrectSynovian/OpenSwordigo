/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC4C0
 * Mangled: ._ZN6google8protobuf8internal20RepeatedPtrFieldBase9MergeFromINS0_16RepeatedPtrFieldIN5Caver5Proto7MapZoneEE11TypeHandlerEEEvRKS2_
 * Demangled: google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::MapZone>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Callers: 1
 *   0x00000000002DEFAC  Caver::Proto::Map::Map(Caver::Proto::Map const&)
 *
 * Callees: 1
 *   0x00000000002E80CC  google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::MapZone>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC4C8 string=0x00000000001FC4CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::MapZone>::TypeHandler>()
{
  return _ZN6google8protobuf8internal20RepeatedPtrFieldBase9MergeFromINS0_16RepeatedPtrFieldIN5Caver5Proto7MapZoneEE11TypeHandlerEEEvRKS2_();
}

