/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F63A0
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto5SkillEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::Skill>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Skill> const&)
 *
 * Callers: 1
 *   0x00000000002E65A4  Caver::Proto::GameData::GameData(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000002E7BF8  google::protobuf::RepeatedPtrField<Caver::Proto::Skill>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Skill> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F63A8 string=0x00000000001F63AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::Skill>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto5SkillEE9MergeFromERKS5_();
}

