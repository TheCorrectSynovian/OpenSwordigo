/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202B90
 * Mangled: ._ZN5boost10shared_ptrIN5Caver25SkillPickerViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::SkillPickerViewController>::shared_ptr<Caver::SkillPickerViewController>(Caver::SkillPickerViewController *)
 *
 * Callers: 1
 *   0x000000000035A7C8  boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>(Caver::PortalViewController *)
 *
 * Callees: 1
 *   0x000000000035AB64  boost::shared_ptr<Caver::SkillPickerViewController>::shared_ptr<Caver::SkillPickerViewController>(Caver::SkillPickerViewController *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202B98 string=0x0000000000202B9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::SkillPickerViewController>::shared_ptr<Caver::SkillPickerViewController>()
{
  return _ZN5boost10shared_ptrIN5Caver25SkillPickerViewControllerEEC2IS2_EEPT_();
}

