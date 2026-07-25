/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002030A0
 * Mangled: .glTexParameteri
 * Demangled: .glTexParameteri
 *
 * Callers: 4
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000004CB9BC  Caver::Texture::SetDefaultParameters(bool)
 *   0x00000000004CBA08  Caver::Texture::InitWithData(void const*,int,int,Caver::PixelFormat)
 *   0x00000000004CC108  Caver::Texture::SetNearestFiltering(void)
 *
 * Callees: 1
 *   0x00000000006FEC90  glTexParameteri
 *
 * Referenced strings: 1
 *   insn=0x00000000002030A8 string=0x00000000002030AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glTexParameteri()
{
  return glTexParameteri();
}

