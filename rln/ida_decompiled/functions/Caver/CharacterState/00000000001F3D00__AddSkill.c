/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3D00
 * Mangled: ._ZN5Caver14CharacterState8AddSkillERKN5boost10shared_ptrINS_5SkillEEE
 * Demangled: Caver::CharacterState::AddSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callers: 1
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x00000000003AD4DC  Caver::CharacterState::AddSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3D08 string=0x00000000001F3D0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CharacterState::AddSkill()
{
  return _ZN5Caver14CharacterState8AddSkillERKN5boost10shared_ptrINS_5SkillEEE();
}

