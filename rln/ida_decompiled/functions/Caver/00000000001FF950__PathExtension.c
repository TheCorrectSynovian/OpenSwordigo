/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF950
 * Mangled: ._ZN5Caver13PathExtensionERKSs
 * Demangled: Caver::PathExtension(std::string const&)
 *
 * Callers: 1
 *   0x0000000000489464  Caver::SaveByteBufferToFile(uchar const*,uint,std::string const&)
 *
 * Callees: 1
 *   0x00000000004B3EFC  Caver::PathExtension(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF958 string=0x00000000001FF95C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PathExtension()
{
  return _ZN5Caver13PathExtensionERKSs();
}

