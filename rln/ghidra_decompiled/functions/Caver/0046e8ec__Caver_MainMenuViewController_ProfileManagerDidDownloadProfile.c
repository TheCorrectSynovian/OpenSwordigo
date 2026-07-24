/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046e8ec
 * Function: Caver::MainMenuViewController::ProfileManagerDidDownloadProfile
 * Signature: undefined __cdecl ProfileManagerDidDownloadProfile(ProfileManager * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuViewController::ProfileManagerDidDownloadProfile(Caver::ProfileManager*,
   std::string const&) */

void Caver::MainMenuViewController::ProfileManagerDidDownloadProfile
               (ProfileManager *param_1,string *param_2)

{
  if (*(long *)(param_1 + 0xd8) != 0) {
    ProfileSelectionView::LoadProfiles(*(ProfileSelectionView **)(*(long *)(param_1 + 0xd8) + 0x58))
    ;
    return;
  }
  return;
}


