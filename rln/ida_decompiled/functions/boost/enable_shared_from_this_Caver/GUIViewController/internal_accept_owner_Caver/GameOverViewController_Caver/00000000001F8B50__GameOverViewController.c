/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8B50
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_22GameOverViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameOverViewController,Caver::GameOverViewController>(boost::shared_ptr<Caver::GameOverViewController> const*,Caver::GameOverViewController *)
 *
 * Callers: 1
 *   0x000000000035A5E4  boost::shared_ptr<Caver::GameOverViewController>::shared_ptr<Caver::GameOverViewController>(Caver::GameOverViewController *)
 *
 * Callees: 1
 *   0x00000000003652F8  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameOverViewController,Caver::GameOverViewController>(boost::shared_ptr<Caver::GameOverViewController> const*,Caver::GameOverViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8B58 string=0x00000000001F8B5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameOverViewController,Caver::GameOverViewController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_22GameOverViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

