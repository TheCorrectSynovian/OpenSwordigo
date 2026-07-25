/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201890
 * Mangled: ._ZN5Caver14SkillComponent12BeginCastingEv
 * Demangled: Caver::SkillComponent::BeginCasting(void)
 *
 * Callers: 2
 *   0x00000000002600A4  Caver::CharControllerComponent::BeginCasting(boost::intrusive_ptr<Caver::SkillComponent> const&)
 *   0x000000000028F0B4  sub_28F0B4
 *
 * Callees: 1
 *   0x000000000028E658  Caver::SkillComponent::BeginCasting(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201898 string=0x000000000020189C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkillComponent::BeginCasting(Caver::SkillComponent *this)
{
  return _ZN5Caver14SkillComponent12BeginCastingEv(this);
}

