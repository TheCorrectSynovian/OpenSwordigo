/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8690
 * Mangled: ._ZN5Caver20ProfileSelectionView12LoadProfilesEv
 * Demangled: Caver::ProfileSelectionView::LoadProfiles(void)
 *
 * Callers: 4
 *   0x000000000036E8EC  Caver::MainMenuViewController::ProfileManagerDidDownloadProfile(Caver::ProfileManager *,std::string const&)
 *   0x000000000036E900  `non-virtual thunk to'Caver::MainMenuViewController::ProfileManagerDidDownloadProfile(Caver::ProfileManager *,std::string const&)
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x00000000003A25BC  Caver::ProfileSelectionView::ProfilePanelDidDeleteProfile(Caver::ProfilePanelView *)
 *
 * Callees: 1
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8698 string=0x00000000001F869C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProfileSelectionView::LoadProfiles(Caver::ProfileSelectionView *this)
{
  JUMPOUT(0x3A1684);
}

