/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD320
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_24OnlineMenuViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OnlineMenuViewController,Caver::OnlineMenuViewController>(boost::shared_ptr<Caver::OnlineMenuViewController> const*,Caver::OnlineMenuViewController *)
 *
 * Callers: 1
 *   0x0000000000345E44  boost::shared_ptr<Caver::OnlineMenuViewController>::shared_ptr<Caver::OnlineMenuViewController>(Caver::OnlineMenuViewController *)
 *
 * Callees: 1
 *   0x0000000000347878  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OnlineMenuViewController,Caver::OnlineMenuViewController>(boost::shared_ptr<Caver::OnlineMenuViewController> const*,Caver::OnlineMenuViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD328 string=0x00000000001FD32C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::OnlineMenuViewController,Caver::OnlineMenuViewController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_24OnlineMenuViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

