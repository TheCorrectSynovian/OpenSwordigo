/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4370
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_19PauseViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PauseViewController,Caver::PauseViewController>(boost::shared_ptr<Caver::PauseViewController> const*,Caver::PauseViewController *)
 *
 * Callers: 1
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *
 * Callees: 1
 *   0x0000000000364DE8  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PauseViewController,Caver::PauseViewController>(boost::shared_ptr<Caver::PauseViewController> const*,Caver::PauseViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4378 string=0x00000000001F437C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PauseViewController,Caver::PauseViewController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_19PauseViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

