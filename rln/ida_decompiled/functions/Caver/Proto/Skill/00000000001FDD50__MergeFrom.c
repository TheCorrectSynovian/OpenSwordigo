/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDD50
 * Mangled: ._ZN5Caver5Proto5Skill9MergeFromERKS1_
 * Demangled: Caver::Proto::Skill::MergeFrom(Caver::Proto::Skill const&)
 *
 * Callers: 4
 *   0x00000000002E0A7C  Caver::Proto::Skill::Skill(Caver::Proto::Skill const&)
 *   0x00000000002E1730  Caver::Proto::Skill::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002E1734  Caver::Proto::Skill::CopyFrom(Caver::Proto::Skill const&)
 *   0x00000000002E7BF8  google::protobuf::RepeatedPtrField<Caver::Proto::Skill>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Skill> const&)
 *
 * Callees: 1
 *   0x00000000002E0A7C  Caver::Proto::Skill::Skill(Caver::Proto::Skill const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDD58 string=0x00000000001FDD5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Skill::MergeFrom(Caver::Proto::Skill *this, const Caver::Proto::Skill *a2)
{
  JUMPOUT(0x2E0AF4);
}

