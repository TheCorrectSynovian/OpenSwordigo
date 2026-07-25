/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E1730
 * Mangled: _ZN5Caver5Proto5Skill21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Skill::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FDD50  Caver::Proto::Skill::MergeFrom(Caver::Proto::Skill const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002E1730 string=0x00000000001FDD50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Skill::CheckTypeAndMergeFrom(Caver::Proto::Skill *this, const Caver::Proto::Skill *a2)
{
  Caver::Proto::Skill::MergeFrom(this, a2);
}

