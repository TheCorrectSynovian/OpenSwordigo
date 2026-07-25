/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA820
 * Mangled: ._ZN5Caver21GetFilesWithExtensionERKSsS1_PSt6vectorISsSaISsEE
 * Demangled: Caver::GetFilesWithExtension(std::string const&,std::string const&,std::vector<std::string,std::allocator<std::string>> *)
 *
 * Callers: 1
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *
 * Callees: 1
 *   0x00000000004B48B4  Caver::GetFilesWithExtension(std::string const&,std::string const&,std::vector<std::string,std::allocator<std::string>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA828 string=0x00000000001FA82C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GetFilesWithExtension()
{
  return _ZN5Caver21GetFilesWithExtensionERKSsS1_PSt6vectorISsSaISsEE();
}

