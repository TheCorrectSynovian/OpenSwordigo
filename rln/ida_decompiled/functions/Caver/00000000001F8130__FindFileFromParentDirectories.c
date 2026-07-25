/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8130
 * Mangled: ._ZN5Caver29FindFileFromParentDirectoriesERKSsSs
 * Demangled: Caver::FindFileFromParentDirectories(std::string const&,std::string)
 *
 * Callers: 2
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x000000000045A948  Caver::ObjectLibrary::FindLibrariesDirectoryFromParentDirectories(std::string const&)
 *
 * Callees: 1
 *   0x000000000047D2A0  Caver::FindFileFromParentDirectories(std::string const&,std::string)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8138 string=0x00000000001F813C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FindFileFromParentDirectories()
{
  return _ZN5Caver29FindFileFromParentDirectoriesERKSsSs();
}

