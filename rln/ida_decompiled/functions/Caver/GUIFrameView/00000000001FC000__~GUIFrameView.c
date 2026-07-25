/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC000
 * Mangled: ._ZN5Caver12GUIFrameViewD2Ev
 * Demangled: Caver::GUIFrameView::~GUIFrameView()
 *
 * Callers: 11
 *   0x0000000000372D08  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *   0x0000000000375368  Caver::AchievementNotificationView::AnimateOutAfterDelay(float)
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x00000000003A0838  Caver::ProfilePanelView::~ProfilePanelView()
 *   0x00000000003A4DE8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileSelectionView,Caver::ProfileSelectionView>(boost::shared_ptr<Caver::ProfileSelectionView> const*,Caver::ProfileSelectionView *)
 *   0x00000000003A5B3C  Caver::ProfilesHeaderView::~ProfilesHeaderView()
 *   0x000000000043E760  boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(boost::shared_ptr<Caver::MenuItemSlot> *)
 *   0x000000000043F514  Caver::StripeView::~StripeView()
 *   0x000000000048EFC8  Caver::GUIAlertView::GUIAlertView(void)
 *   0x0000000000491F18  Caver::GUIAlertView::~GUIAlertView()
 *   0x000000000049779C  Caver::GUIFrameView::~GUIFrameView()
 *
 * Callees: 1
 *   0x0000000000372D08  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC008 string=0x00000000001FC00C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIFrameView::~GUIFrameView(Caver::GUIFrameView *this)
{
  JUMPOUT(0x373E20);
}

