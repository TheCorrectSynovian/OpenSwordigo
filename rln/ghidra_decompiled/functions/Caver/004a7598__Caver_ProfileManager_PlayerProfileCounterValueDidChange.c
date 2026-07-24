/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a7598
 * Function: Caver::ProfileManager::PlayerProfileCounterValueDidChange
 * Signature: undefined __thiscall PlayerProfileCounterValueDidChange(ProfileManager * this, PlayerProfile * param_1, string * param_2, int param_3, int param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager::PlayerProfileCounterValueDidChange(Caver::PlayerProfile*, std::string
   const&, int, int) */

void __thiscall
Caver::ProfileManager::PlayerProfileCounterValueDidChange
          (ProfileManager *this,PlayerProfile *param_1,string *param_2,int param_3,int param_4)

{
  AchievementsManager *this_00;
  
                    /* try { // try from 004a75b0 to 005a75bb has its CatchHandler @ 004a8a74 */
  this_00 = (AchievementsManager *)AchievementsManager::sharedManager();
  AchievementsManager::SetCounterValue(this_00,param_2,param_3,param_4);
  return;
}


