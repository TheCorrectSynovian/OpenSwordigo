/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200130
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_14GUIPopoverViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIPopoverView,Caver::GUIPopoverView>(boost::shared_ptr<Caver::GUIPopoverView> const*,Caver::GUIPopoverView *)
 *
 * Callers: 1
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004A519C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIPopoverView,Caver::GUIPopoverView>(boost::shared_ptr<Caver::GUIPopoverView> const*,Caver::GUIPopoverView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200138 string=0x000000000020013C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIPopoverView,Caver::GUIPopoverView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_14GUIPopoverViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

