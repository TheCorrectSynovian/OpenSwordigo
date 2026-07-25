/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F77E0
 * Mangled: ._ZN5Caver5Proto14SkillComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::SkillComponent::MergeFrom(Caver::Proto::SkillComponent const&)
 *
 * Callers: 3
 *   0x0000000000333DBC  Caver::Proto::SkillComponent::SkillComponent(Caver::Proto::SkillComponent const&)
 *   0x0000000000334720  Caver::Proto::SkillComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000334724  Caver::Proto::SkillComponent::CopyFrom(Caver::Proto::SkillComponent const&)
 *
 * Callees: 1
 *   0x0000000000333DBC  Caver::Proto::SkillComponent::SkillComponent(Caver::Proto::SkillComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F77E8 string=0x00000000001F77EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SkillComponent::MergeFrom(
        Caver::Proto::SkillComponent *this,
        const Caver::Proto::SkillComponent *a2)
{
  JUMPOUT(0x333E18);
}

