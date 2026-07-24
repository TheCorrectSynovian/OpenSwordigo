/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00475f44
 * Function: Caver::AchievementsManager::sharedManager
 * Signature: undefined __cdecl sharedManager(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementsManager::sharedManager() */

AchievementsManager * Caver::AchievementsManager::sharedManager(void)

{
  AchievementsManager *this;
  
  if (DAT_007e9910 == (AchievementsManager *)0x0) {
    this = operator_new(0x1d8);
    AchievementsManager(this);
    DAT_007e9910 = this;
  }
  return DAT_007e9910;
}


