/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6550
 * Mangled: .fwrite
 * Demangled: .fwrite
 *
 * Callers: 7
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x00000000004D667C  Caver::BinaryFile::WriteInt32(int)
 *   0x00000000004D676C  Caver::BinaryFile::WriteData(uchar const*,int)
 *   0x0000000000506484  sub_506484
 *   0x0000000000512C04  sub_512C04
 *   0x000000000053E104  sub_53E104
 *   0x00000000005701B8  __gnu_cxx::__verbose_terminate_handler(void)
 *
 * Callees: 1
 *   0x00000000006FE708  fwrite
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6558 string=0x00000000001F655C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
size_t fwrite(const void *ptr, size_t size, size_t n, FILE *s)
{
  return fwrite(ptr, size, n, s);
}

