/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201130
 * Mangled: ._ZNK5Caver5Image13SaveToPNGFileERKSs
 * Demangled: Caver::Image::SaveToPNGFile(std::string const&)
 *
 * Callers: 1
 *   0x00000000004D2D90  Caver::Image::LoadFromTEXFile(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004D4BD8  Caver::Image::SaveToPNGFile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201138 string=0x000000000020113C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Image::SaveToPNGFile()
{
  return _ZNK5Caver5Image13SaveToPNGFileERKSs();
}

