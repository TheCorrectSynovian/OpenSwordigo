/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9710
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_8GUILabelES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILabel,Caver::GUILabel>(boost::shared_ptr<Caver::GUILabel> const*,Caver::GUILabel *)
 *
 * Callers: 1
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *
 * Callees: 1
 *   0x0000000000342498  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILabel,Caver::GUILabel>(boost::shared_ptr<Caver::GUILabel> const*,Caver::GUILabel *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9718 string=0x00000000001F971C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUILabel,Caver::GUILabel>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_8GUILabelES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

