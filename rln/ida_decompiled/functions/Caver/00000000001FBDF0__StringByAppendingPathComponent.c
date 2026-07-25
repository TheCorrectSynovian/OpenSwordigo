/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBDF0
 * Mangled: ._ZN5Caver30StringByAppendingPathComponentERKSsS1_
 * Demangled: Caver::StringByAppendingPathComponent(std::string const&,std::string const&)
 *
 * Callers: 11
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x00000000003BFBB4  Caver::PlayerProfile::LocalFilePath(void)
 *   0x000000000045B78C  Caver::ObjectLibrary::LoadFromFile(std::string const&)
 *   0x000000000047D2A0  Caver::FindFileFromParentDirectories(std::string const&,std::string)
 *   0x000000000047D5C8  Caver::SubdirectoryWithName(std::string const&,std::string const&,bool)
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x00000000004B3318  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *   0x00000000004B42F4  Caver::DocumentsDirectoryPath(void)
 *   0x00000000004B4670  Caver::CachesDirectoryPath(void)
 *   0x00000000004B5178  Caver::PathForDocumentsDirectory(std::string const&,bool)
 *   0x00000000004B532C  Caver::PathForCachesDirectory(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004B3C18  Caver::StringByAppendingPathComponent(std::string const&,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBDF8 string=0x00000000001FBDFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StringByAppendingPathComponent()
{
  return _ZN5Caver30StringByAppendingPathComponentERKSsS1_();
}

