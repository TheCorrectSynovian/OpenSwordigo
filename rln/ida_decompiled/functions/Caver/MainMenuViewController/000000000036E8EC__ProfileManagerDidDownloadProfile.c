/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036E8EC
 * Mangled: _ZN5Caver22MainMenuViewController32ProfileManagerDidDownloadProfileEPNS_14ProfileManagerERKSs
 * Demangled: Caver::MainMenuViewController::ProfileManagerDidDownloadProfile(Caver::ProfileManager *,std::string const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8690  Caver::ProfileSelectionView::LoadProfiles(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000036E8EC string=0x000000000036E8F0 "h"
 *   insn=0x000000000036E8F4 string=0x000000000036E8F8 "f'"
 *   insn=0x000000000036E8F8 string=0x00000000001F8690 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MainMenuViewController::ProfileManagerDidDownloadProfile(__int64 a1)
{
  __int64 v1; // x8

  v1 = *(_QWORD *)(a1 + 216);
  if ( v1 )
    Caver::ProfileSelectionView::LoadProfiles(*(Caver::ProfileSelectionView **)(v1 + 88));
}

