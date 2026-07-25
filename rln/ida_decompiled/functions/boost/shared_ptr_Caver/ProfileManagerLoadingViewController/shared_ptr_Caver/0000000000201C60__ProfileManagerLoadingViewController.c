/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201C60
 * Mangled: ._ZN5boost10shared_ptrIN5Caver35ProfileManagerLoadingViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::ProfileManagerLoadingViewController>::shared_ptr<Caver::ProfileManagerLoadingViewController>(Caver::ProfileManagerLoadingViewController *)
 *
 * Callers: 1
 *   0x00000000004BC92C  Caver::ProfileManager_Android::ShowCloudLoadingView(void)
 *
 * Callees: 1
 *   0x00000000004BCE3C  std::_Rb_tree<Caver::IProfileManagerDelegate *,Caver::IProfileManagerDelegate *,std::_Identity<Caver::IProfileManagerDelegate *>,std::less<Caver::IProfileManagerDelegate *>,std::allocator<Caver::IProfileManagerDelegate *>>::_M_copy(std::_Rb_tree_node<Caver::IProfileManagerDelegate *> const*,std::_Rb_tree_node<Caver::IProfileManagerDelegate *>*)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201C68 string=0x0000000000201C6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::ProfileManagerLoadingViewController>::shared_ptr<Caver::ProfileManagerLoadingViewController>()
{
  JUMPOUT(0x4BCF2C);
}

