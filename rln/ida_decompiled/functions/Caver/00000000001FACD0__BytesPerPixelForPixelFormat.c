/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FACD0
 * Mangled: ._ZN5Caver27BytesPerPixelForPixelFormatENS_11PixelFormatE
 * Demangled: Caver::BytesPerPixelForPixelFormat(Caver::PixelFormat)
 *
 * Callers: 1
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Callees: 1
 *   0x00000000004D228C  Caver::BytesPerPixelForPixelFormat(Caver::PixelFormat)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FACD4 string=0x00000000004D228C ""
 *   insn=0x00000000001FACD8 string=0x00000000001FACDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::BytesPerPixelForPixelFormat()
{
  return _ZN5Caver27BytesPerPixelForPixelFormatENS_11PixelFormatE();
}

