/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8B10
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_21CreditsViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::CreditsViewController,Caver::CreditsViewController>(boost::shared_ptr<Caver::CreditsViewController> const*,Caver::CreditsViewController *)
 *
 * Callers: 1
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *
 * Callees: 1
 *   0x0000000000365070  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::CreditsViewController,Caver::CreditsViewController>(boost::shared_ptr<Caver::CreditsViewController> const*,Caver::CreditsViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8B18 string=0x00000000001F8B1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::CreditsViewController,Caver::CreditsViewController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_21CreditsViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

