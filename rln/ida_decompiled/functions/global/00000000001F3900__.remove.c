/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3900
 * Mangled: .remove
 * Demangled: .remove
 *
 * Callers: 2
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x00000000004B487C  Caver::DeleteFileAtPath(std::string const&)
 *
 * Callees: 1
 *   0x00000000006FE5B0  remove
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3908 string=0x00000000001F390C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
int remove(const char *filename)
{
  return remove(filename);
}

