/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F95F0
 * Mangled: ._ZN5Caver5Proto11GuideTarget9MergeFromERKS1_
 * Demangled: Caver::Proto::GuideTarget::MergeFrom(Caver::Proto::GuideTarget const&)
 *
 * Callers: 4
 *   0x00000000002E3D48  Caver::Proto::GuideTarget::GuideTarget(Caver::Proto::GuideTarget const&)
 *   0x00000000002E4EFC  Caver::Proto::GuideTarget::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002E5014  Caver::Proto::GuideTarget::CopyFrom(Caver::Proto::GuideTarget const&)
 *   0x00000000002E8330  google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::GuideTarget>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Callees: 1
 *   0x00000000002E3D48  Caver::Proto::GuideTarget::GuideTarget(Caver::Proto::GuideTarget const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F95F8 string=0x00000000001F95FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::GuideTarget::MergeFrom()
{
  JUMPOUT(0x2E3E44);
}

