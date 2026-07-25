/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4AE0
 * Mangled: ._ZN5Caver18GameViewController19AddSkillToCharacterERKN5boost10shared_ptrINS_5SkillEEE
 * Demangled: Caver::GameViewController::AddSkillToCharacter(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callers: 1
 *   0x000000000035DC24  sub_35DC24
 *
 * Callees: 1
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4AE8 string=0x00000000001F4AEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameViewController::AddSkillToCharacter()
{
  JUMPOUT(0x35C2E4);
}

