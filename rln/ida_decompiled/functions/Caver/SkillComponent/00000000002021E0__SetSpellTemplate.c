/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002021E0
 * Mangled: ._ZN5Caver14SkillComponent16SetSpellTemplateERKN5boost13intrusive_ptrINS_14ObjectTemplateEEE
 * Demangled: Caver::SkillComponent::SetSpellTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *
 * Callers: 1
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000028E50C  Caver::SkillComponent::SetSpellTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002021E8 string=0x00000000002021EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkillComponent::SetSpellTemplate(Caver::SkillComponent *this)
{
  return _ZN5Caver14SkillComponent16SetSpellTemplateERKN5boost13intrusive_ptrINS_14ObjectTemplateEEE(this);
}

