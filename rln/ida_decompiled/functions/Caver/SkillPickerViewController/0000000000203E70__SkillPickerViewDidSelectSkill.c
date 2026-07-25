/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203E70
 * Mangled: ._ZN5Caver25SkillPickerViewController29SkillPickerViewDidSelectSkillEPNS_15SkillPickerViewERKN5boost10shared_ptrINS_5SkillEEE
 * Demangled: Caver::SkillPickerViewController::SkillPickerViewDidSelectSkill(Caver::SkillPickerView *,boost::shared_ptr<Caver::Skill> const&)
 *
 * Callers: 1
 *   0x0000000000372804  boost::shared_ptr<Caver::SkillPickerView>::shared_ptr<Caver::SkillPickerView>(Caver::SkillPickerView *)
 *
 * Callees: 1
 *   0x0000000000372804  boost::shared_ptr<Caver::SkillPickerView>::shared_ptr<Caver::SkillPickerView>(Caver::SkillPickerView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203E78 string=0x0000000000203E7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SkillPickerViewController::SkillPickerViewDidSelectSkill()
{
  JUMPOUT(0x3728EC);
}

