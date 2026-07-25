/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6590
 * Mangled: ._ZN5Caver17GUIViewControllerD2Ev
 * Demangled: Caver::GUIViewController::~GUIViewController()
 *
 * Callers: 20
 *   0x000000000033E404  Caver::ConfigureOverlayViewController::~ConfigureOverlayViewController()
 *   0x0000000000342C90  Caver::GameMenuViewController::~GameMenuViewController()
 *   0x00000000003482EC  Caver::GameOverViewController::~GameOverViewController()
 *   0x0000000000351478  Caver::GameViewController::~GameViewController()
 *   0x0000000000367E18  Caver::GuidePurchaseViewController::~GuidePurchaseViewController()
 *   0x000000000036AB34  Caver::LevelUpViewController::~LevelUpViewController()
 *   0x000000000036ACA4  Caver::MainMenuViewController::MainMenuViewController(void)
 *   0x000000000036B0D0  Caver::MainMenuViewController::~MainMenuViewController()
 *   0x0000000000370370  Caver::PauseViewController::~PauseViewController()
 *   0x0000000000371960  Caver::PortalViewController::~PortalViewController()
 *   0x0000000000372B9C  Caver::SkillPickerViewController::~SkillPickerViewController()
 *   0x00000000003855E0  Caver::OfflineAchievementsViewController::~OfflineAchievementsViewController()
 *   0x000000000038DB04  Caver::CreditsViewController::~CreditsViewController()
 *   0x0000000000398060  Caver::OnlineMenuViewController::~OnlineMenuViewController()
 *   0x00000000003A4B94  Caver::ProfileSelectionViewController::~ProfileSelectionViewController()
 *   0x00000000003A91CC  Caver::ProfileManagerLoadingViewController::~ProfileManagerLoadingViewController()
 *   0x00000000003EB8C4  Caver::PurchaseViewController::~PurchaseViewController()
 *   0x00000000003F0554  Caver::StoreViewController::~StoreViewController()
 *   0x000000000049A550  Caver::GUINavigationController::SetCurrentViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *   0x00000000004A1418  Caver::GUIViewController::~GUIViewController()
 *
 * Callees: 1
 *   0x00000000004A1418  Caver::GUIViewController::~GUIViewController()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6598 string=0x00000000001F659C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIViewController::~GUIViewController(Caver::GUIViewController *this)
{
  _ZN5Caver17GUIViewControllerD2Ev(this);
}

