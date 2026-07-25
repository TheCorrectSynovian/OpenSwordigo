/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F66E0
 * Mangled: ._ZN5Caver23OfflineAchievementsView31SetGoogleServicesButtonsVisibleEb
 * Demangled: Caver::OfflineAchievementsView::SetGoogleServicesButtonsVisible(bool)
 *
 * Callers: 1
 *   0x000000000038608C  Caver::OfflineAchievementsViewController::GoogleSignInHandler(bool,std::string const&)
 *
 * Callees: 1
 *   0x00000000003839C8  boost::shared_ptr<Caver::OfflineAchievementView>::shared_ptr<Caver::OfflineAchievementView>(Caver::OfflineAchievementView *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F66E4 string=0x0000000000383AB0 ""
 *   insn=0x00000000001F66E8 string=0x00000000001F66EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::OfflineAchievementsView::SetGoogleServicesButtonsVisible(Caver::OfflineAchievementsView *this)
{
  JUMPOUT(0x383AB0);
}

