/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF3D0
 * Mangled: ._ZN5Caver10BinaryFile10WriteInt32Ei
 * Demangled: Caver::BinaryFile::WriteInt32(int)
 *
 * Callers: 1
 *   0x00000000004D2F1C  Caver::Image::SaveToTEXFile(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004D667C  Caver::BinaryFile::WriteInt32(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF3D8 string=0x00000000001FF3DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::BinaryFile::WriteInt32(Caver::BinaryFile *this, int a2)
{
  return _ZN5Caver10BinaryFile10WriteInt32Ei(this, a2);
}

