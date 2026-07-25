/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCEA0
 * Mangled: ._ZN5Caver12GUIFrameViewC2Ev_0
 * Demangled: Caver::GUIFrameView::GUIFrameView(void)
 *
 * Callers: 5
 *   0x0000000000372D08  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x00000000003A4DE8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileSelectionView,Caver::ProfileSelectionView>(boost::shared_ptr<Caver::ProfileSelectionView> const*,Caver::ProfileSelectionView *)
 *   0x000000000043E760  boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(boost::shared_ptr<Caver::MenuItemSlot> *)
 *   0x000000000048EFC8  Caver::GUIAlertView::GUIAlertView(void)
 *
 * Callees: 1
 *   0x00000000004971E8  Caver::GUIFrameView::GUIFrameView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCEA8 string=0x00000000001FCEAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIFrameView::GUIFrameView(Caver::GUIFrameView *this)
{
  return _ZN5Caver12GUIFrameViewC2Ev(this);
}

