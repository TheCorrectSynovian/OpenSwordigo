/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7820
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12GUIAlertViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIAlertView,Caver::GUIAlertView>(boost::shared_ptr<Caver::GUIAlertView> const*,Caver::GUIAlertView *)
 *
 * Callers: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x0000000000342720  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIAlertView,Caver::GUIAlertView>(boost::shared_ptr<Caver::GUIAlertView> const*,Caver::GUIAlertView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7828 string=0x00000000001F782C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIAlertView,Caver::GUIAlertView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12GUIAlertViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

