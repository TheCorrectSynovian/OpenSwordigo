/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000385FFC
 * Mangled: _ZN5Caver33OfflineAchievementsViewController13ButtonPressedEPvPNS_8GUIEventE
 * Demangled: Caver::OfflineAchievementsViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callers: 1
 *   0x0000000000385748  Caver::OfflineAchievementsViewController::LoadView(void)
 *
 * Callees: 7
 *   0x00000000001F4790  Caver::OfflineAchievementsView::AnimateOut(void)
 *   0x00000000001F6FD0  Caver::AchievementsManager::ReportPendingAchievements(void)
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *   0x00000000001F8BD0  Caver::AchievementsManager::ReportAllAchievements(void)
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001FD2D0  Caver::AchievementsManager::sharedManager(void)
 *   0x00000000001FFE40  Caver::AchievementsManager::ClearReportedAchievementsCache(void)
 *
 * Referenced strings: 15
 *   insn=0x0000000000386008 string=0x000000000038600C "`.@"
 *   insn=0x000000000038600C string=0x0000000000386010 "x@"
 *   insn=0x0000000000386014 string=0x0000000000386018 "@"
 *   insn=0x0000000000386018 string=0x000000000038601C ""
 *   insn=0x0000000000386024 string=0x0000000000386028 ""
 *   insn=0x0000000000386040 string=0x0000000000386044 "`"
 *   insn=0x0000000000386040 string=0x00000000001F4790 "P'"
 *   insn=0x0000000000386050 string=0x00000000001F7010 "0'"
 *   insn=0x0000000000386054 string=0x0000000000386058 ""
 *   insn=0x0000000000386054 string=0x00000000001F93B0 "0'"
 *   insn=0x0000000000386064 string=0x0000000000386068 " "
 *   insn=0x000000000038606C string=0x0000000000386070 "t"
 *   insn=0x000000000038606C string=0x00000000001FD2D0 "0'"
 *   insn=0x0000000000386078 string=0x00000000001F8BD0 "0'"
 *   insn=0x0000000000386088 string=0x00000000001F6FD0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::OfflineAchievementsView *__fastcall Caver::OfflineAchievementsViewController::ButtonPressed(
        __int64 a1,
        __int64 a2)
{
  Caver::OfflineAchievementsView *result; // x0
  __int64 v4; // x0
  Caver::AchievementsManager *v5; // x0
  Caver::AchievementsManager *v6; // x0
  Caver::AchievementsManager *v7; // x0
  Caver::AchievementsManager *v8; // x0
  Caver::AchievementsManager *v9; // x0

  result = *(Caver::OfflineAchievementsView **)(a1 + 88);
  if ( *((_QWORD *)result + 30) == a2 )
  {
    Caver::OfflineAchievementsView::AnimateOut(result);
    return (Caver::OfflineAchievementsView *)Caver::GUIViewController::DismissModalViewController(*(Caver::GUIViewController **)(a1 + 40));
  }
  else if ( *((_QWORD *)result + 41) == a2 )
  {
    v4 = Caver::OnlineController::SharedController(result);
    return (Caver::OfflineAchievementsView *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
  }
  else if ( *((_QWORD *)result + 43) == a2 )
  {
    v5 = (Caver::AchievementsManager *)Caver::AchievementsManager::sharedManager(result);
    v6 = (Caver::AchievementsManager *)Caver::AchievementsManager::ClearReportedAchievementsCache(v5);
    v7 = (Caver::AchievementsManager *)Caver::AchievementsManager::sharedManager(v6);
    v8 = (Caver::AchievementsManager *)Caver::AchievementsManager::ReportAllAchievements(v7);
    v9 = (Caver::AchievementsManager *)Caver::AchievementsManager::sharedManager(v8);
    return (Caver::OfflineAchievementsView *)Caver::AchievementsManager::ReportPendingAchievements(v9);
  }
  return result;
}

