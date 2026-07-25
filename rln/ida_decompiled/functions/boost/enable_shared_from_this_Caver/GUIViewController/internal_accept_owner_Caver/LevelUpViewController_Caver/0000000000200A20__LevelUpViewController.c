/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200A20
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_21LevelUpViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::LevelUpViewController,Caver::LevelUpViewController>(boost::shared_ptr<Caver::LevelUpViewController> const*,Caver::LevelUpViewController *)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x00000000003651B4  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::LevelUpViewController,Caver::LevelUpViewController>(boost::shared_ptr<Caver::LevelUpViewController> const*,Caver::LevelUpViewController *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200A28 string=0x0000000000200A2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::LevelUpViewController,Caver::LevelUpViewController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_21LevelUpViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

