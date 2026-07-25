/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5C20
 * Mangled: ._ZN5Caver5Image12LoadFromFileERKSsNS_9ImageTypeEb
 * Demangled: Caver::Image::LoadFromFile(std::string const&,Caver::ImageType,bool)
 *
 * Callers: 1
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x00000000004D2D24  Caver::Image::LoadFromFile(std::string const&,Caver::ImageType,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5C28 string=0x00000000001F5C2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Image::LoadFromFile()
{
  return _ZN5Caver5Image12LoadFromFileERKSsNS_9ImageTypeEb();
}

