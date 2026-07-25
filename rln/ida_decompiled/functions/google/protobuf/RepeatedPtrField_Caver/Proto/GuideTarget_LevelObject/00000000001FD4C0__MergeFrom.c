/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD4C0
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto23GuideTarget_LevelObjectEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject> const&)
 *
 * Callers: 1
 *   0x00000000002E3D48  Caver::Proto::GuideTarget::GuideTarget(Caver::Proto::GuideTarget const&)
 *
 * Callees: 1
 *   0x00000000002E4F00  google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD4C8 string=0x00000000001FD4CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget_LevelObject>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto23GuideTarget_LevelObjectEE9MergeFromERKS5_();
}

