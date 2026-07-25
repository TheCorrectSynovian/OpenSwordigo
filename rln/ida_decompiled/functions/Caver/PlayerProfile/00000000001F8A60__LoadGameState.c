/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8A60
 * Mangled: ._ZN5Caver13PlayerProfile13LoadGameStateEv
 * Demangled: Caver::PlayerProfile::LoadGameState(void)
 *
 * Callers: 4
 *   0x000000000036E914  Caver::MainMenuViewController::ProfileSelectionViewControllerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000039FB4C  Caver::ProfilePanelView::DeleteTextFieldValueChanged(void *,Caver::GUIEvent *)
 *   0x00000000003A05B8  Caver::ProfilePanelView::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Callees: 1
 *   0x00000000003C0CE0  Caver::PlayerProfile::LoadFromPath(std::string const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8A68 string=0x00000000001F8A6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PlayerProfile::LoadGameState(Caver::PlayerProfile *this)
{
  JUMPOUT(0x3C0DD8);
}

