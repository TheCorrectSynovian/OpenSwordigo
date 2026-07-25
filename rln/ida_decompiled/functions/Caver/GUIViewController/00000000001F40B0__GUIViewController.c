/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F40B0
 * Mangled: ._ZN5Caver17GUIViewControllerC2Ev
 * Demangled: Caver::GUIViewController::GUIViewController(void)
 *
 * Callers: 20
 *   0x000000000033DE0C  Caver::ConfigureOverlayViewController::ConfigureOverlayViewController(void)
 *   0x0000000000342AEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIBubbleView,Caver::GUIBubbleView>(boost::shared_ptr<Caver::GUIBubbleView> const*,Caver::GUIBubbleView *)
 *   0x0000000000345C38  Caver::GameMenuViewController::SettingsViewWantsToPresentOnlineView(Caver::SettingsView *)
 *   0x0000000000347B00  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::StoreViewController,Caver::StoreViewController>(boost::shared_ptr<Caver::StoreViewController> const*,Caver::StoreViewController *)
 *   0x00000000003512A8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DebugInfoOverlay,Caver::DebugInfoOverlay>(boost::shared_ptr<Caver::DebugInfoOverlay> const*,Caver::DebugInfoOverlay *)
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x0000000000365580  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::SkillPickerViewController,Caver::SkillPickerViewController>(boost::shared_ptr<Caver::SkillPickerViewController> const*,Caver::SkillPickerViewController *)
 *   0x000000000036A764  Caver::LevelUpViewController::LevelUpViewController(void)
 *   0x000000000036ACA4  Caver::MainMenuViewController::MainMenuViewController(void)
 *   0x000000000036F67C  Caver::MainMenuViewController::MainMenuViewDidGoToCredits(Caver::MainMenuView *)
 *   0x000000000036FFC4  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ProfileSelectionViewController,Caver::ProfileSelectionViewController>(boost::shared_ptr<Caver::ProfileSelectionViewController> const*,Caver::ProfileSelectionViewController *)
 *   0x00000000003705C4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PauseView,Caver::PauseView>(boost::shared_ptr<Caver::PauseView> const*,Caver::PauseView *)
 *   0x0000000000372488  Caver::SkillPickerViewController::SkillPickerViewController(void)
 *   0x00000000003850AC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementView,Caver::OfflineAchievementView>(boost::shared_ptr<Caver::OfflineAchievementView> const*,Caver::OfflineAchievementView *)
 *   0x00000000003A4854  Caver::ProfileSelectionViewController::ProfileSelectionViewController(void)
 *   0x00000000003A8DF8  Caver::ProfileManagerLoadingViewController::ProfileManagerLoadingViewController(void)
 *   0x00000000003E8308  Caver::PurchaseViewController::PurchaseViewController(void)
 *   0x00000000003EFFF4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StoreProductView,Caver::StoreProductView>(boost::shared_ptr<Caver::StoreProductView> const*,Caver::StoreProductView *)
 *   0x0000000000498FDC  Caver::GUINavigationController::GUINavigationController(void)
 *
 * Callees: 1
 *   0x00000000004A13F4  Caver::GUIViewController::GUIViewController(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F40B4 string=0x00000000004A13F4 "("
 *   insn=0x00000000001F40B8 string=0x00000000001F40BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIViewController::GUIViewController(Caver::GUIViewController *this)
{
  return _ZN5Caver17GUIViewControllerC2Ev(this);
}

