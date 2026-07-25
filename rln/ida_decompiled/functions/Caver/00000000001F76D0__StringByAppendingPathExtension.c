/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F76D0
 * Mangled: ._ZN5Caver30StringByAppendingPathExtensionERKSsS1_
 * Demangled: Caver::StringByAppendingPathExtension(std::string const&,std::string const&)
 *
 * Callers: 2
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *   0x00000000004B3318  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *
 * Callees: 1
 *   0x00000000004B3EFC  Caver::PathExtension(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F76D8 string=0x00000000001F76DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::StringByAppendingPathExtension()
{
  JUMPOUT(0x4B3FBC);
}

