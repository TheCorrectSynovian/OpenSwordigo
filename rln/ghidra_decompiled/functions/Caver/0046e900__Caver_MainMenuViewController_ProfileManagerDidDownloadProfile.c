/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046e900
 * Function: Caver::MainMenuViewController::ProfileManagerDidDownloadProfile
 * Signature: undefined __thiscall ProfileManagerDidDownloadProfile(MainMenuViewController * this, ProfileManager * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::MainMenuViewController::ProfileManagerDidDownloadProfile(Caver::ProfileManager*,
   std::string const&) */

void __thiscall
Caver::MainMenuViewController::ProfileManagerDidDownloadProfile
          (MainMenuViewController *this,ProfileManager *param_1,string *param_2)

{
  if (*(long *)(this + 0x80) != 0) {
    ProfileSelectionView::LoadProfiles(*(ProfileSelectionView **)(*(long *)(this + 0x80) + 0x58));
    return;
  }
  return;
}


