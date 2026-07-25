/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3A80
 * Mangled: ._ZN5Caver5Proto14SkillComponentD2Ev
 * Demangled: Caver::Proto::SkillComponent::~SkillComponent()
 *
 * Callers: 1
 *   0x00000000003341C4  Caver::Proto::SkillComponent::~SkillComponent()
 *
 * Callees: 1
 *   0x0000000000333DBC  Caver::Proto::SkillComponent::SkillComponent(Caver::Proto::SkillComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3A88 string=0x00000000001F3A8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SkillComponent::~SkillComponent(Caver::Proto::SkillComponent *this)
{
  JUMPOUT(0x333FB4);
}

