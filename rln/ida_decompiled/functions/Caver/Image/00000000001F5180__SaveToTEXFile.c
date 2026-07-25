/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5180
 * Mangled: ._ZNK5Caver5Image13SaveToTEXFileERKSsb
 * Demangled: Caver::Image::SaveToTEXFile(std::string const&,bool)
 *
 * Callers: 1
 *   0x00000000004D2D90  Caver::Image::LoadFromTEXFile(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004D2F1C  Caver::Image::SaveToTEXFile(std::string const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5188 string=0x00000000001F518C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Image::SaveToTEXFile()
{
  return _ZNK5Caver5Image13SaveToTEXFileERKSsb();
}

