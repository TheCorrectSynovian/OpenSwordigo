/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAFA0
 * Mangled: ._ZN5Caver10BinaryFileC2ERKSsNS0_4ModeEb
 * Demangled: Caver::BinaryFile::BinaryFile(std::string const&,Caver::BinaryFile::Mode,bool)
 *
 * Callers: 2
 *   0x00000000004D2D90  Caver::Image::LoadFromTEXFile(std::string const&,bool)
 *   0x00000000004D2F1C  Caver::Image::SaveToTEXFile(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004D6344  Caver::BinaryFile::BinaryFile(std::string const&,Caver::BinaryFile::Mode,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAFA8 string=0x00000000001FAFAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::BinaryFile::BinaryFile()
{
  return _ZN5Caver10BinaryFileC2ERKSsNS0_4ModeEb();
}

