/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA150
 * Mangled: ._ZN5Caver14SkillComponent21SetCastObjectTemplateERKN5boost13intrusive_ptrINS_14ObjectTemplateEEE
 * Demangled: Caver::SkillComponent::SetCastObjectTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&)
 *
 * Callers: 1
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000028E388  Caver::SkillComponent::RegisterLibrary(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FA154 string=0x000000000028E4C8 ")"
 *   insn=0x00000000001FA158 string=0x00000000001FA15C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SkillComponent::SetCastObjectTemplate()
{
  JUMPOUT(0x28E4C8);
}

