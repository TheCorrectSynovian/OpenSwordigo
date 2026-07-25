/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3450
 * Mangled: ._ZN5Caver13PlayerProfile18InitWithIdentifierERKSs
 * Demangled: Caver::PlayerProfile::InitWithIdentifier(std::string const&)
 *
 * Callers: 4
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Callees: 1
 *   0x00000000003BFA88  Caver::PlayerProfile::InitWithIdentifier(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3458 string=0x00000000001F345C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PlayerProfile::InitWithIdentifier()
{
  return _ZN5Caver13PlayerProfile18InitWithIdentifierERKSs();
}

