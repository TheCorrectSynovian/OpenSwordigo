/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000334720
 * Mangled: _ZN5Caver5Proto14SkillComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::SkillComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F77E0  Caver::Proto::SkillComponent::MergeFrom(Caver::Proto::SkillComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000334720 string=0x00000000001F77E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SkillComponent::CheckTypeAndMergeFrom(
        Caver::Proto::SkillComponent *this,
        const Caver::Proto::SkillComponent *a2)
{
  Caver::Proto::SkillComponent::MergeFrom(this, a2);
}

