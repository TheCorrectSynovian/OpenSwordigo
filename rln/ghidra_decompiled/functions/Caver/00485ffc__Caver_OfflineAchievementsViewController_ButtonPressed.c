/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00485ffc
 * Function: Caver::OfflineAchievementsViewController::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementsViewController::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::OfflineAchievementsViewController::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  long lVar1;
  long *plVar2;
  AchievementsManager *pAVar3;
  
  lVar1 = *(long *)((long)param_1 + 0x58);
                    /* try { // try from 00486014 to 00586017 has its CatchHandler @ 00486358 */
  if (*(GUIEvent **)(lVar1 + 0xf0) == param_2) {
    OfflineAchievementsView::AnimateOut();
                    /* try { // try from 0048604c to 00586057 has its CatchHandler @ 00486320 */
    GUIViewController::DismissModalViewController(*(GUIViewController **)((long)param_1 + 0x28));
    return;
  }
                    /* try { // try from 00486024 to 00586037 has its CatchHandler @ 00486354 */
  if (*(GUIEvent **)(lVar1 + 0x148) != param_2) {
    if (*(GUIEvent **)(lVar1 + 0x158) != param_2) {
                    /* try { // try from 00486038 to 0058604b has its CatchHandler @ 0048636c */
      return;
    }
    pAVar3 = (AchievementsManager *)AchievementsManager::sharedManager();
    AchievementsManager::ClearReportedAchievementsCache(pAVar3);
    pAVar3 = (AchievementsManager *)AchievementsManager::sharedManager();
                    /* try { // try from 00486078 to 0058607b has its CatchHandler @ 0048636c */
    AchievementsManager::ReportAllAchievements(pAVar3);
                    /* try { // try from 0048607c to 0058612b has its CatchHandler @ 00485fe0 */
    pAVar3 = (AchievementsManager *)AchievementsManager::sharedManager();
    AchievementsManager::ReportPendingAchievements(pAVar3);
    return;
  }
  plVar2 = (long *)OnlineController::SharedController();
                    /* WARNING: Could not recover jumptable at 0x00486068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))();
  return;
}


