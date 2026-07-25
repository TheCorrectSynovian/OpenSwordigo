/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CC28C
 * Mangled: _ZN5Caver21TextureConversionInfo14ConvertTextureEPNS_7TextureEPNS_5ImageE
 * Demangled: Caver::TextureConversionInfo::ConvertTexture(Caver::Texture *,Caver::Image *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7E30  Caver::Image::ConvertToPixelFormat(Caver::PixelFormat,bool)
 *   0x00000000001FB6C0  Caver::Image::Resize(int,int)
 *
 * Referenced strings: 9
 *   insn=0x00000000004CC29C string=0x00000000004CC2A0 "h"
 *   insn=0x00000000004CC2A4 string=0x00000000004CC2A8 "?"
 *   insn=0x00000000004CC2AC string=0x00000000004CC2B0 "h\n@"
 *   insn=0x00000000004CC2B0 string=0x00000000004CC2B4 "_"
 *   insn=0x00000000004CC2B4 string=0x00000000004CC2B8 "a"
 *   insn=0x00000000004CC2C8 string=0x00000000001FB6C0 "0'"
 *   insn=0x00000000004CC2DC string=0x00000000004CC2E0 "h"
 *   insn=0x00000000004CC2E0 string=0x00000000004CC2E4 "?"
 *   insn=0x00000000004CC2F4 string=0x00000000001F7E30 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextureConversionInfo::ConvertTexture(
        Caver::TextureConversionInfo *this,
        Caver::Texture *a2,
        Caver::Image *a3)
{
  unsigned int v5; // w8
  int v6; // w1
  int v7; // w2
  __int64 result; // x0

  v5 = *((_DWORD *)a3 + 1);
  v6 = *((_DWORD *)this + 1);
  v7 = *((_DWORD *)this + 2);
  if ( __PAIR64__(v7, v6) == __PAIR64__(*((_DWORD *)a3 + 2), v5) )
  {
    result = 0;
  }
  else
  {
    Caver::Image::Resize(a3, v6, v7);
    result = 1;
  }
  if ( *((_DWORD *)this + 3) != 2 )
  {
    if ( *((_DWORD *)this + 4) == *((_DWORD *)a3 + 3) )
      return result;
    Caver::Image::ConvertToPixelFormat();
  }
  return 1;
}

