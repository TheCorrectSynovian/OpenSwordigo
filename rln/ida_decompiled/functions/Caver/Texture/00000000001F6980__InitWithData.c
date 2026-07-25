/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6980
 * Mangled: ._ZN5Caver7Texture12InitWithDataEPKviiNS_11PixelFormatE
 * Demangled: Caver::Texture::InitWithData(void const*,int,int,Caver::PixelFormat)
 *
 * Callers: 2
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000004CC0CC  Caver::Texture::Create(int,int,Caver::PixelFormat,float)
 *
 * Callees: 1
 *   0x00000000004CBA08  Caver::Texture::InitWithData(void const*,int,int,Caver::PixelFormat)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6988 string=0x00000000001F698C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Texture::InitWithData()
{
  return _ZN5Caver7Texture12InitWithDataEPKviiNS_11PixelFormatE();
}

