/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB6C0
 * Mangled: ._ZN5Caver5Image6ResizeEii
 * Demangled: Caver::Image::Resize(int,int)
 *
 * Callers: 1
 *   0x00000000004CC28C  Caver::TextureConversionInfo::ConvertTexture(Caver::Texture *,Caver::Image *)
 *
 * Callees: 1
 *   0x00000000004D2868  Caver::Image::Resize(int,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB6C8 string=0x00000000001FB6CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Image::Resize(Caver::Image *this, int a2, int a3)
{
  return _ZN5Caver5Image6ResizeEii(this, a2, a3);
}

