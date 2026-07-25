/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002005B0
 * Mangled: ._ZN5Caver10BinaryFile4OpenERKSsNS0_4ModeEb
 * Demangled: Caver::BinaryFile::Open(std::string const&,Caver::BinaryFile::Mode,bool)
 *
 * Callers: 1
 *   0x00000000004D6344  Caver::BinaryFile::BinaryFile(std::string const&,Caver::BinaryFile::Mode,bool)
 *
 * Callees: 1
 *   0x00000000004D6368  Caver::BinaryFile::Open(std::string const&,Caver::BinaryFile::Mode,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000002005B8 string=0x00000000002005BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::BinaryFile::Open()
{
  return _ZN5Caver10BinaryFile4OpenERKSsNS0_4ModeEb();
}

