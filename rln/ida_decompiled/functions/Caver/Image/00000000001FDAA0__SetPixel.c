/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDAA0
 * Mangled: ._ZN5Caver5Image8SetPixelEiiRKNS_10FloatColorE
 * Demangled: Caver::Image::SetPixel(int,int,Caver::FloatColor const&)
 *
 * Callers: 3
 *   0x00000000004D2868  Caver::Image::Resize(int,int)
 *   0x00000000004D2A00  Caver::Image::ConvertToPixelFormat(Caver::PixelFormat,bool)
 *   0x00000000004D3084  Caver::Image::PremultiplyAlpha(void)
 *
 * Callees: 1
 *   0x00000000004D25C8  Caver::Image::SetPixel(int,int,Caver::FloatColor const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FDAA4 string=0x00000000004D25C8 ""
 *   insn=0x00000000001FDAA8 string=0x00000000001FDAAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Image::SetPixel(Caver::Image *this, int a2, int a3, const Caver::FloatColor *a4)
{
  return _ZN5Caver5Image8SetPixelEiiRKNS_10FloatColorE(this, a2, a3, a4);
}

