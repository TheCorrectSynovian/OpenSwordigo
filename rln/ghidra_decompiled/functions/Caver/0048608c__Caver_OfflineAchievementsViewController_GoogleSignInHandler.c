/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048608c
 * Function: Caver::OfflineAchievementsViewController::GoogleSignInHandler
 * Signature: undefined __cdecl GoogleSignInHandler(bool param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementsViewController::GoogleSignInHandler(bool, std::string const&) */

void Caver::OfflineAchievementsViewController::GoogleSignInHandler(bool param_1,string *param_2)

{
  OfflineAchievementsView::SetGoogleServicesButtonsVisible
            (*(OfflineAchievementsView **)((ulong)param_1 + 0x58),(bool)((byte)param_2 & 1));
  return;
}


