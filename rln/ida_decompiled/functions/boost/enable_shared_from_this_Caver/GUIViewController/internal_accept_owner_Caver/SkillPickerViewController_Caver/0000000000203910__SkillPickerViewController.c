/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203910
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_25SkillPickerViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::SkillPickerViewController,Caver::SkillPickerViewController>(boost::shared_ptr<Caver::SkillPickerViewController> const*,Caver::SkillPickerViewController *)
 *
 * Callers: 1
 *   0x000000000035AB64  boost::shared_ptr<Caver::SkillPickerViewController>::shared_ptr<Caver::SkillPickerViewController>(Caver::SkillPickerViewController *)
 *
 * Callees: 1
 *   0x0000000000365580  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::SkillPickerViewController,Caver::SkillPickerViewController>(boost::shared_ptr<Caver::SkillPickerViewController> const*,Caver::SkillPickerViewController *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203918 string=0x000000000020391C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::SkillPickerViewController,Caver::SkillPickerViewController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_25SkillPickerViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

