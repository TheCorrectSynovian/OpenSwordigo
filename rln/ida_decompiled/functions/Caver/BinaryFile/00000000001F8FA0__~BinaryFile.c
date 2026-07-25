/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8FA0
 * Mangled: ._ZN5Caver10BinaryFileD2Ev
 * Demangled: Caver::BinaryFile::~BinaryFile()
 *
 * Callers: 2
 *   0x00000000004D2D90  Caver::Image::LoadFromTEXFile(std::string const&,bool)
 *   0x00000000004D2F1C  Caver::Image::SaveToTEXFile(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004D64EC  Caver::BinaryFile::~BinaryFile()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8FA8 string=0x00000000001F8FAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::BinaryFile::~BinaryFile(Caver::BinaryFile *this)
{
  _ZN5Caver10BinaryFileD2Ev(this);
}

