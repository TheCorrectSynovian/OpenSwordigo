/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE090
 * Mangled: ._ZN5Caver10BinaryFile9ReadInt32Ev
 * Demangled: Caver::BinaryFile::ReadInt32(void)
 *
 * Callers: 1
 *   0x00000000004D2D90  Caver::Image::LoadFromTEXFile(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004D65E0  Caver::BinaryFile::ReadInt32(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE098 string=0x00000000001FE09C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BinaryFile::ReadInt32(Caver::BinaryFile *this)
{
  return _ZN5Caver10BinaryFile9ReadInt32Ev(this);
}

