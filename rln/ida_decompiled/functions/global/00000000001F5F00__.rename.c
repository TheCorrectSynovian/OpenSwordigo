/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5F00
 * Mangled: .rename
 * Demangled: .rename
 *
 * Callers: 1
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *
 * Callees: 1
 *   0x00000000006FE6D8  rename
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5F08 string=0x00000000001F5F0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int rename(const char *old, const char *a2)
{
  return rename(old, a2);
}

