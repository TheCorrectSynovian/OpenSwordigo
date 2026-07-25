/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8FC0
 * Mangled: ._ZN5Caver5Image15LoadFromTEXFileERKSsb
 * Demangled: Caver::Image::LoadFromTEXFile(std::string const&,bool)
 *
 * Callers: 1
 *   0x00000000004D2D24  Caver::Image::LoadFromFile(std::string const&,Caver::ImageType,bool)
 *
 * Callees: 1
 *   0x00000000004D2D90  Caver::Image::LoadFromTEXFile(std::string const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8FC8 string=0x00000000001F8FCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Image::LoadFromTEXFile()
{
  return _ZN5Caver5Image15LoadFromTEXFileERKSsb();
}

