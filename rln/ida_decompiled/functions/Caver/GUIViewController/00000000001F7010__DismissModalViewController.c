/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7010
 * Mangled: ._ZN5Caver17GUIViewController26DismissModalViewControllerEv
 * Demangled: Caver::GUIViewController::DismissModalViewController(void)
 *
 * Callers: 29
 *   0x000000000033E3F4  Caver::ConfigureOverlayViewController::ConfigureOverlayViewDismissButtonPressed(Caver::ConfigureOverlayView *)
 *   0x000000000033E3FC  `non-virtual thunk to'Caver::ConfigureOverlayViewController::ConfigureOverlayViewDismissButtonPressed(Caver::ConfigureOverlayView *)
 *   0x0000000000345120  Caver::GameMenuViewController::TabbedMenuViewDismissButtonPressed(Caver::TabbedMenuView *)
 *   0x000000000034512C  `non-virtual thunk to'Caver::GameMenuViewController::TabbedMenuViewDismissButtonPressed(Caver::TabbedMenuView *)
 *   0x0000000000345BC4  Caver::GameMenuViewController::SettingsViewDidQuitToMenu(Caver::SettingsView *)
 *   0x0000000000345BFC  `non-virtual thunk to'Caver::GameMenuViewController::SettingsViewDidQuitToMenu(Caver::SettingsView *)
 *   0x0000000000357900  Caver::GameViewController::LevelUpViewControllerDidFinish(Caver::LevelUpViewController *)
 *   0x0000000000357988  `non-virtual thunk to'Caver::GameViewController::LevelUpViewControllerDidFinish(Caver::LevelUpViewController *)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x0000000000366280  Caver::GuidePurchaseViewController::GuidePurchaseViewCloseButtonPressed(Caver::GuidePurchaseView *)
 *   0x00000000003662A8  `non-virtual thunk to'Caver::GuidePurchaseViewController::GuidePurchaseViewCloseButtonPressed(Caver::GuidePurchaseView *)
 *   0x0000000000367C84  Caver::GuidePurchaseViewController::HandlePurchaseSuccess(void)
 *   0x0000000000370360  Caver::PauseViewController::PauseViewDidContinue(Caver::PauseView *)
 *   0x0000000000370368  `non-virtual thunk to'Caver::PauseViewController::PauseViewDidContinue(Caver::PauseView *)
 *   0x0000000000370DDC  Caver::PortalViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x0000000000372B84  Caver::SkillPickerViewController::SkillPickerViewDidDismiss(Caver::SkillPickerView *)
 *   0x0000000000372B90  `non-virtual thunk to'Caver::SkillPickerViewController::SkillPickerViewDidDismiss(Caver::SkillPickerView *)
 *   0x0000000000385FFC  Caver::OfflineAchievementsViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x000000000039801C  Caver::OnlineMenuViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003A4ACC  Caver::ProfileSelectionViewController::ProfileSelectionViewPlayerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003A4B08  `non-virtual thunk to'Caver::ProfileSelectionViewController::ProfileSelectionViewPlayerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000003A4B44  Caver::ProfileSelectionViewController::ProfileSelectionViewCloseButtonPressed(Caver::ProfileSelectionView *)
 *   0x00000000003A4B6C  `non-virtual thunk to'Caver::ProfileSelectionViewController::ProfileSelectionViewCloseButtonPressed(Caver::ProfileSelectionView *)
 *   0x00000000003A9064  Caver::ProfileManagerLoadingViewController::Update(float)
 *   0x00000000003E871C  Caver::PurchaseViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003EB75C  Caver::PurchaseViewController::HandlePurchaseSuccess(void)
 *   0x00000000003F2524  Caver::StoreViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000004A15D0  Caver::GUIViewController::ViewWillDisappear(void)
 *   0x00000000004A15E0  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Callees: 1
 *   0x00000000004A15E0  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7018 string=0x00000000001F701C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIViewController::DismissModalViewController(Caver::GUIViewController *this)
{
  return _ZN5Caver17GUIViewController26DismissModalViewControllerEv(this);
}

