/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bb7b0
 * Function: Caver::ProfileManager_Android::DownloadCloudProfiles
 * Signature: undefined __thiscall DownloadCloudProfiles(ProfileManager_Android * this, string * param_1, double param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManager_Android::DownloadCloudProfiles(std::string const&, double) */

void __thiscall
Caver::ProfileManager_Android::DownloadCloudProfiles
          (ProfileManager_Android *this,string *param_1,double param_2)

{
  AndroidLoadSnapshot(param_1,param_2);
  return;
}


