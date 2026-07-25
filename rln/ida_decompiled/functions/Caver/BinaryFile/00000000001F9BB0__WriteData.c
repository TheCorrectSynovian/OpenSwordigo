/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9BB0
 * Mangled: ._ZN5Caver10BinaryFile9WriteDataEPKhi
 * Demangled: Caver::BinaryFile::WriteData(uchar const*,int)
 *
 * Callers: 1
 *   0x00000000004D2F1C  Caver::Image::SaveToTEXFile(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004D676C  Caver::BinaryFile::WriteData(uchar const*,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9BB4 string=0x00000000004D676C "\t"
 *   insn=0x00000000001F9BB8 string=0x00000000001F9BBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BinaryFile::WriteData(Caver::BinaryFile *this, const unsigned __int8 *ptr, int a3)
{
  return _ZN5Caver10BinaryFile9WriteDataEPKhi(this, ptr, a3);
}

