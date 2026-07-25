/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038608C
 * Mangled: _ZN5Caver33OfflineAchievementsViewController19GoogleSignInHandlerEbRKSs
 * Demangled: Caver::OfflineAchievementsViewController::GoogleSignInHandler(bool,std::string const&)
 *
 * Callers: 1
 *   0x0000000000385748  Caver::OfflineAchievementsViewController::LoadView(void)
 *
 * Callees: 1
 *   0x00000000001F66E0  Caver::OfflineAchievementsView::SetGoogleServicesButtonsVisible(bool)
 *
 * Referenced strings: 2
 *   insn=0x000000000038608C string=0x0000000000386090 "!"
 *   insn=0x0000000000386094 string=0x00000000001F66E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OfflineAchievementsViewController::GoogleSignInHandler(__int64 a1)
{
  Caver::OfflineAchievementsView::SetGoogleServicesButtonsVisible(*(Caver::OfflineAchievementsView **)(a1 + 88));
}

