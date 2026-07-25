/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036E900
 * Mangled: _ZThn88_N5Caver22MainMenuViewController32ProfileManagerDidDownloadProfileEPNS_14ProfileManagerERKSs
 * Demangled: `non-virtual thunk to'Caver::MainMenuViewController::ProfileManagerDidDownloadProfile(Caver::ProfileManager *,std::string const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8690  Caver::ProfileSelectionView::LoadProfiles(void)
 *
 * Referenced strings: 3
 *   insn=0x000000000036E900 string=0x000000000036E904 "h"
 *   insn=0x000000000036E908 string=0x000000000036E90C "a'"
 *   insn=0x000000000036E90C string=0x00000000001F8690 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::MainMenuViewController::ProfileManagerDidDownloadProfile(__int64 a1)
{
  __int64 v1; // x8

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 )
    Caver::ProfileSelectionView::LoadProfiles(*(Caver::ProfileSelectionView **)(v1 + 88));
}

