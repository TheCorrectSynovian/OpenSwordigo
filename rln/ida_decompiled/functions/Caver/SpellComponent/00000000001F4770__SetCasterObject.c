/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4770
 * Mangled: ._ZN5Caver14SpellComponent15SetCasterObjectERKN5boost13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::SpellComponent::SetCasterObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 1
 *   0x000000000028E658  Caver::SkillComponent::BeginCasting(void)
 *
 * Callees: 1
 *   0x000000000029001C  Caver::SpellComponent::RegisterLibrary(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4774 string=0x000000000029015C ")"
 *   insn=0x00000000001F4778 string=0x00000000001F477C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SpellComponent::SetCasterObject()
{
  JUMPOUT(0x29015C);
}

