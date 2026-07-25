/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7740
 * Mangled: ._ZN5Caver22DocumentsDirectoryPathEv
 * Demangled: Caver::DocumentsDirectoryPath(void)
 *
 * Callers: 4
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *   0x00000000003BFBB4  Caver::PlayerProfile::LocalFilePath(void)
 *   0x00000000004B5178  Caver::PathForDocumentsDirectory(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004B42F4  Caver::DocumentsDirectoryPath(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7748 string=0x00000000001F774C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DocumentsDirectoryPath(Caver *this)
{
  return _ZN5Caver22DocumentsDirectoryPathEv(this);
}

