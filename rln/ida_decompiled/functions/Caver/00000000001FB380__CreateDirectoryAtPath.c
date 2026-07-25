/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB380
 * Mangled: ._ZN5Caver21CreateDirectoryAtPathERKSsb
 * Demangled: Caver::CreateDirectoryAtPath(std::string const&,bool)
 *
 * Callers: 6
 *   0x000000000047D5C8  Caver::SubdirectoryWithName(std::string const&,std::string const&,bool)
 *   0x00000000004B42F4  Caver::DocumentsDirectoryPath(void)
 *   0x00000000004B4670  Caver::CachesDirectoryPath(void)
 *   0x00000000004B4834  Caver::TemporaryDirectoryPath(void)
 *   0x00000000004B5178  Caver::PathForDocumentsDirectory(std::string const&,bool)
 *   0x00000000004B532C  Caver::PathForCachesDirectory(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004B456C  Caver::CreateDirectoryAtPath(std::string const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB388 string=0x00000000001FB38C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CreateDirectoryAtPath()
{
  return _ZN5Caver21CreateDirectoryAtPathERKSsb();
}

