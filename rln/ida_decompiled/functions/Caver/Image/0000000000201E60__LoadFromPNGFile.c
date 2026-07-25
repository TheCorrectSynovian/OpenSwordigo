/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201E60
 * Mangled: ._ZN5Caver5Image15LoadFromPNGFileERKSsb
 * Demangled: Caver::Image::LoadFromPNGFile(std::string const&,bool)
 *
 * Callers: 1
 *   0x00000000004D2D24  Caver::Image::LoadFromFile(std::string const&,Caver::ImageType,bool)
 *
 * Callees: 1
 *   0x00000000004D4BD0  Caver::Image::LoadFromPNGFile(std::string const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201E68 string=0x0000000000201E6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Image::LoadFromPNGFile()
{
  return _ZN5Caver5Image15LoadFromPNGFileERKSsb();
}

