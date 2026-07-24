/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047e1bc
 * Function: Caver::AchievementsManager::ReportScore
 * Signature: undefined __thiscall ReportScore(AchievementsManager * this, string * param_1, longlong param_2, string * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AchievementsManager::ReportScore(std::string const&, long long, std::string const&) */

void __thiscall
Caver::AchievementsManager::ReportScore
          (AchievementsManager *this,string *param_1,longlong param_2,string *param_3)

{
  long *plVar1;
  
                    /* try { // try from 0047e1c8 to 0057e1db has its CatchHandler @ 0047f278 */
  plVar1 = (long *)OnlineController::SharedController();
                    /* try { // try from 0047e1e8 to 0057e1f3 has its CatchHandler @ 0047f20c */
                    /* WARNING: Could not recover jumptable at 0x0047e1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe0))(plVar1,param_1,param_2,param_3);
  return;
}


