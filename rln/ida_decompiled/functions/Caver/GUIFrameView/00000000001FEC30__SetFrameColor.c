/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEC30
 * Mangled: ._ZN5Caver12GUIFrameView13SetFrameColorERKNS_5ColorE
 * Demangled: Caver::GUIFrameView::SetFrameColor(Caver::Color const&)
 *
 * Callers: 8
 *   0x0000000000372D08  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003A4DE8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileSelectionView,Caver::ProfileSelectionView>(boost::shared_ptr<Caver::ProfileSelectionView> const*,Caver::ProfileSelectionView *)
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x0000000000490F48  Caver::GUIAlertView::AddLink(std::string const&)
 *
 * Callees: 1
 *   0x00000000004975D0  Caver::GUIFrameView::SetFrameColor(Caver::Color const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEC38 string=0x00000000001FEC3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIFrameView::SetFrameColor(Caver::GUIFrameView *this, const Caver::Color *a2)
{
  return _ZN5Caver12GUIFrameView13SetFrameColorERKNS_5ColorE(this, a2);
}

