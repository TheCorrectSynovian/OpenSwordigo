/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4200
 * Mangled: .lseek
 * Demangled: .lseek
 *
 * Callers: 4
 *   0x00000000004D6368  Caver::BinaryFile::Open(std::string const&,Caver::BinaryFile::Mode,bool)
 *   0x00000000004D6540  Caver::OpenAAssetFileDescriptor(std::string const&)
 *   0x000000000051F8B4  sub_51F8B4
 *   0x000000000051F904  sub_51F904
 *
 * Callees: 1
 *   0x00000000006FE5E8  lseek
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4208 string=0x00000000001F420C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__off_t lseek(int fd, __off_t offset, int whence)
{
  return lseek(fd, offset, whence);
}

