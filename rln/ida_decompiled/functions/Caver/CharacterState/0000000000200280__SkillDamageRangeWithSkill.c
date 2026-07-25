/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200280
 * Mangled: ._ZN5Caver14CharacterState25SkillDamageRangeWithSkillERKN5boost10shared_ptrINS_5SkillEEERKNS2_INS_4ItemEEE
 * Demangled: Caver::CharacterState::SkillDamageRangeWithSkill(boost::shared_ptr<Caver::Skill> const&,boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000004081C8  Caver::InventoryItemPanel::UpdateLabels(void)
 *
 * Callees: 1
 *   0x00000000003ADC70  Caver::CharacterState::ArmorDamageMultiplier(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200288 string=0x000000000020028C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::CharacterState::SkillDamageRangeWithSkill()
{
  JUMPOUT(0x3ADD74);
}

