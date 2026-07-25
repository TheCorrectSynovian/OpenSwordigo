/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4B40
 * Mangled: ._ZN5boost10shared_ptrIN5Caver13ChooseAgeViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ChooseAgeView>::shared_ptr<Caver::ChooseAgeView>(Caver::ChooseAgeView *)
 *
 * Callers: 1
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *
 * Callees: 1
 *   0x000000000036E5EC  boost::shared_ptr<Caver::ChooseAgeView>::shared_ptr<Caver::ChooseAgeView>(Caver::ChooseAgeView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4B48 string=0x00000000001F4B4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::ChooseAgeView>::shared_ptr<Caver::ChooseAgeView>()
{
  return _ZN5boost10shared_ptrIN5Caver13ChooseAgeViewEEC2IS2_EEPT_();
}

