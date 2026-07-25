/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC4D0
 * Mangled: ._ZN5Caver10BinaryFile8ReadDataEPhi
 * Demangled: Caver::BinaryFile::ReadData(uchar *,int)
 *
 * Callers: 1
 *   0x00000000004D2D90  Caver::Image::LoadFromTEXFile(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004D671C  Caver::BinaryFile::ReadData(uchar *,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FC4D4 string=0x00000000004D671C "\t"
 *   insn=0x00000000001FC4D8 string=0x00000000001FC4DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BinaryFile::ReadData(Caver::BinaryFile *this, unsigned __int8 *ptr, int a3)
{
  return _ZN5Caver10BinaryFile8ReadDataEPhi(this, ptr, a3);
}

