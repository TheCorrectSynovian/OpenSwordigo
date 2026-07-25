/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D2D24
 * Mangled: _ZN5Caver5Image12LoadFromFileERKSsNS_9ImageTypeEb
 * Demangled: Caver::Image::LoadFromFile(std::string const&,Caver::ImageType,bool)
 *
 * Callers: 2
 *   0x00000000001F5C20  Caver::Image::LoadFromFile(std::string const&,Caver::ImageType,bool)
 *   0x00000000004D2A00  Caver::Image::ConvertToPixelFormat(Caver::PixelFormat,bool)
 *
 * Callees: 2
 *   0x00000000001F8FC0  Caver::Image::LoadFromTEXFile(std::string const&,bool)
 *   0x0000000000201E60  Caver::Image::LoadFromPNGFile(std::string const&,bool)
 *
 * Referenced strings: 7
 *   insn=0x00000000004D2D30 string=0x00000000004D2D34 "_"
 *   insn=0x00000000004D2D3C string=0x00000000004D2D40 "_"
 *   insn=0x00000000004D2D40 string=0x00000000004D2D44 "A"
 *   insn=0x00000000004D2D4C string=0x00000000004D2D50 "D"
 *   insn=0x00000000004D2D58 string=0x00000000004D2D5C "`"
 *   insn=0x00000000004D2D60 string=0x00000000004D2D64 "`"
 *   insn=0x00000000004D2D8C string=0x00000000001F8FC0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Image::LoadFromFile(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // x0

  if ( a3 == 3 )
    return Caver::Image::LoadFromTEXFile();
  if ( a3 != 1 || (Caver::Image::LoadFromPNGFile() & 1) == 0 )
    return 0;
  result = 1;
  *(_DWORD *)(a1 + 12) = 1;
  if ( (a4 & 1) != 0 )
    *(_BYTE *)a1 = 1;
  return result;
}

