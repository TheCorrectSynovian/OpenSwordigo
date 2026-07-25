/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201CB0
 * Mangled: ._ZN5Caver14SkillComponent17CreateSpellObjectEv
 * Demangled: Caver::SkillComponent::CreateSpellObject(void)
 *
 * Callers: 2
 *   0x000000000028E50C  Caver::SkillComponent::SetSpellTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *   0x000000000028F0B4  sub_28F0B4
 *
 * Callees: 1
 *   0x000000000028E580  Caver::SkillComponent::CreateSpellObject(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201CB8 string=0x0000000000201CBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkillComponent::CreateSpellObject(Caver::SkillComponent *this)
{
  return _ZN5Caver14SkillComponent17CreateSpellObjectEv(this);
}

