/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8290
 * Mangled: ._ZN5Caver25SkillPickerViewControllerC2Ev
 * Demangled: Caver::SkillPickerViewController::SkillPickerViewController(void)
 *
 * Callers: 1
 *   0x000000000035A7C8  boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>(Caver::PortalViewController *)
 *
 * Callees: 1
 *   0x0000000000372488  Caver::SkillPickerViewController::SkillPickerViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8298 string=0x00000000001F829C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkillPickerViewController::SkillPickerViewController(Caver::SkillPickerViewController *this)
{
  return _ZN5Caver25SkillPickerViewControllerC2Ev(this);
}

