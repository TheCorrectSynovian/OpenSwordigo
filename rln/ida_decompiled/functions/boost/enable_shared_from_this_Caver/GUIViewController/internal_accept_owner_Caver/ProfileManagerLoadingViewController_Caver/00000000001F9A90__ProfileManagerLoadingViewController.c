/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9A90
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_35ProfileManagerLoadingViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileManagerLoadingViewController,Caver::ProfileManagerLoadingViewController>(boost::shared_ptr<Caver::ProfileManagerLoadingViewController> const*,Caver::ProfileManagerLoadingViewController *)
 *
 * Callers: 1
 *   0x00000000004BCE3C  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_copy(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> const*,std::_Rb_tree_node<Caver::IProfileManagerDelegate *>*)
 *
 * Callees: 1
 *   0x00000000004BD038  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileManagerLoadingViewController,Caver::ProfileManagerLoadingViewController>(boost::shared_ptr<Caver::ProfileManagerLoadingViewController> const*,Caver::ProfileManagerLoadingViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9A98 string=0x00000000001F9A9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileManagerLoadingViewController,Caver::ProfileManagerLoadingViewController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_35ProfileManagerLoadingViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

