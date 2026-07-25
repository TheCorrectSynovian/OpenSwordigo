/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7E30
 * Mangled: ._ZN5Caver5Image20ConvertToPixelFormatENS_11PixelFormatEb
 * Demangled: Caver::Image::ConvertToPixelFormat(Caver::PixelFormat,bool)
 *
 * Callers: 1
 *   0x00000000004CC28C  Caver::TextureConversionInfo::ConvertTexture(Caver::Texture *,Caver::Image *)
 *
 * Callees: 1
 *   0x00000000004D2A00  Caver::Image::ConvertToPixelFormat(Caver::PixelFormat,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7E38 string=0x00000000001F7E3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Image::ConvertToPixelFormat()
{
  return _ZN5Caver5Image20ConvertToPixelFormatENS_11PixelFormatEb();
}

