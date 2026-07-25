/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8F70
 * Mangled: ._ZN5boost10shared_ptrIN5Caver15SkillPickerViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::SkillPickerView>::shared_ptr<Caver::SkillPickerView>(Caver::SkillPickerView *)
 *
 * Callers: 1
 *   0x00000000003724C4  Caver::SkillPickerViewController::LoadView(void)
 *
 * Callees: 1
 *   0x0000000000372804  boost::shared_ptr<Caver::SkillPickerView>::shared_ptr<Caver::SkillPickerView>(Caver::SkillPickerView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8F78 string=0x00000000001F8F7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::SkillPickerView>::shared_ptr<Caver::SkillPickerView>()
{
  return _ZN5boost10shared_ptrIN5Caver15SkillPickerViewEEC2IS2_EEPT_();
}

