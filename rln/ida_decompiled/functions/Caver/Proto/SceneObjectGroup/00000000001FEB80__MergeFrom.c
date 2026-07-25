/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEB80
 * Mangled: ._ZN5Caver5Proto16SceneObjectGroup9MergeFromERKS1_
 * Demangled: Caver::Proto::SceneObjectGroup::MergeFrom(Caver::Proto::SceneObjectGroup const&)
 *
 * Callers: 4
 *   0x0000000000300304  Caver::Proto::SceneObjectGroup::SceneObjectGroup(Caver::Proto::SceneObjectGroup const&)
 *   0x00000000003010CC  Caver::Proto::SceneObjectGroup::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000003010D0  Caver::Proto::SceneObjectGroup::CopyFrom(Caver::Proto::SceneObjectGroup const&)
 *   0x000000000033DAC4  google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>(void)
 *
 * Callees: 1
 *   0x0000000000300304  Caver::Proto::SceneObjectGroup::SceneObjectGroup(Caver::Proto::SceneObjectGroup const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEB88 string=0x00000000001FEB8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::SceneObjectGroup::MergeFrom()
{
  JUMPOUT(0x3003CC);
}

