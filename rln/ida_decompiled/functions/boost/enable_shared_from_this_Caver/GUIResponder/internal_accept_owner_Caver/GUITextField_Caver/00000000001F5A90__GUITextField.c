/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5A90
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12GUITextFieldES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUITextField,Caver::GUITextField>(boost::shared_ptr<Caver::GUITextField> const*,Caver::GUITextField *)
 *
 * Callers: 1
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *
 * Callees: 1
 *   0x00000000003A13FC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUITextField,Caver::GUITextField>(boost::shared_ptr<Caver::GUITextField> const*,Caver::GUITextField *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5A98 string=0x00000000001F5A9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUITextField,Caver::GUITextField>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12GUITextFieldES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

