/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201980
 * Mangled: .gzread
 * Demangled: .gzread
 *
 * Callers: 3
 *   0x00000000004D65E0  Caver::BinaryFile::ReadInt32(void)
 *   0x00000000004D671C  Caver::BinaryFile::ReadData(uchar *,int)
 *   0x00000000004D67BC  Caver::BinaryFile::SHA1Hash(void)
 *
 * Callees: 1
 *   0x00000000006FEBF8  gzread
 *
 * Referenced strings: 1
 *   insn=0x0000000000201988 string=0x000000000020198C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 gzread()
{
  return gzread();
}

