/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD420
 * Mangled: ._ZN6google8protobuf8internal20RepeatedPtrFieldBase9MergeFromINS0_16RepeatedPtrFieldIN5Caver5Proto16SceneObjectGroupEE11TypeHandlerEEEvRKS2_
 * Demangled: google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::SceneObjectGroup>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Callers: 1
 *   0x0000000000301280  Caver::Proto::Scene::Scene(Caver::Proto::Scene const&)
 *
 * Callees: 1
 *   0x000000000033DAC4  google::protobuf::internal::RepeatedPtrFieldBase::Add<google::protobuf::RepeatedPtrField<Caver::Proto::Component>::TypeHandler>(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD428 string=0x00000000001FD42C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::SceneObjectGroup>::TypeHandler>()
{
  JUMPOUT(0x33DBA4);
}

