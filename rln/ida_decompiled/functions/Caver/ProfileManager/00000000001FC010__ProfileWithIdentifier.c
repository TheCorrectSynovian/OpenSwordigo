/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC010
 * Mangled: ._ZN5Caver14ProfileManager21ProfileWithIdentifierERKSs
 * Demangled: Caver::ProfileManager::ProfileWithIdentifier(std::string const&)
 *
 * Callers: 4
 *   0x0000000000356BAC  Caver::GameViewController::ProfileManagerDidDownloadProfile(Caver::ProfileManager *,std::string const&)
 *   0x000000000036E914  Caver::MainMenuViewController::ProfileSelectionViewControllerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x00000000004BB7B8  Caver::ProfileManager_Android::DeleteProfileWithIdentifier(std::string const&)
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Callees: 1
 *   0x00000000003A7124  Caver::ProfileManager::DeleteProfileWithIdentifier(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC018 string=0x00000000001FC01C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ProfileManager::ProfileWithIdentifier()
{
  JUMPOUT(0x3A7280);
}

