/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC420
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_18GameViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameViewController,Caver::GameViewController>(boost::shared_ptr<Caver::GameViewController> const*,Caver::GameViewController *)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x00000000002126E4  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameViewController,Caver::GameViewController>(boost::shared_ptr<Caver::GameViewController> const*,Caver::GameViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC428 string=0x00000000001FC42C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameViewController,Caver::GameViewController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_18GameViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

