/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8DE0
 * Mangled: ._ZNK5Caver5Image8GetPixelEii
 * Demangled: Caver::Image::GetPixel(int,int)
 *
 * Callers: 3
 *   0x00000000004D2868  Caver::Image::Resize(int,int)
 *   0x00000000004D2A00  Caver::Image::ConvertToPixelFormat(Caver::PixelFormat,bool)
 *   0x00000000004D3084  Caver::Image::PremultiplyAlpha(void)
 *
 * Callees: 1
 *   0x00000000004D2410  Caver::Image::GetPixel(int,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8DE4 string=0x00000000004D2410 "\t"
 *   insn=0x00000000001F8DE8 string=0x00000000001F8DEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Image::GetPixel(Caver::Image *this, int a2, int a3)
{
  return _ZNK5Caver5Image8GetPixelEii(this, a2, a3);
}

