/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5320
 * Mangled: ._ZN5Caver5Proto7MapZone9MergeFromERKS1_
 * Demangled: Caver::Proto::MapZone::MergeFrom(Caver::Proto::MapZone const&)
 *
 * Callers: 4
 *   0x00000000002DDF78  Caver::Proto::MapZone::MapZone(Caver::Proto::MapZone const&)
 *   0x00000000002DEE30  Caver::Proto::MapZone::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002DEE34  Caver::Proto::MapZone::CopyFrom(Caver::Proto::MapZone const&)
 *   0x00000000002E80CC  google::protobuf::internal::RepeatedPtrFieldBase::MergeFrom<google::protobuf::RepeatedPtrField<Caver::Proto::MapZone>::TypeHandler>(google::protobuf::internal::RepeatedPtrFieldBase const&)
 *
 * Callees: 1
 *   0x00000000002DDF78  Caver::Proto::MapZone::MapZone(Caver::Proto::MapZone const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5328 string=0x00000000001F532C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::MapZone::MergeFrom()
{
  JUMPOUT(0x2DE064);
}

