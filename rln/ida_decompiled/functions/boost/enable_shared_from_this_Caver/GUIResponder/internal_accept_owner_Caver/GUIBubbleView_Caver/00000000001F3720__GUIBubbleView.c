/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3720
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13GUIBubbleViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIBubbleView,Caver::GUIBubbleView>(boost::shared_ptr<Caver::GUIBubbleView> const*,Caver::GUIBubbleView *)
 *
 * Callers: 1
 *   0x0000000000341FAC  Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *
 * Callees: 1
 *   0x0000000000342AEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIBubbleView,Caver::GUIBubbleView>(boost::shared_ptr<Caver::GUIBubbleView> const*,Caver::GUIBubbleView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3728 string=0x00000000001F372C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIBubbleView,Caver::GUIBubbleView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13GUIBubbleViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

