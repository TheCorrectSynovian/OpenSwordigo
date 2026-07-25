/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CB944
 * Mangled: _ZN5Caver7Texture12InitWithFileERKSsNS_9ImageTypeEf
 * Demangled: Caver::Texture::InitWithFile(std::string const&,Caver::ImageType,float)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 3
 *   insn=0x00000000004CB960 string=0x00000000004CB964 ""
 *   insn=0x00000000004CB96C string=0x00000000001FDDD0 "0'"
 *   insn=0x00000000004CB978 string=0x00000000004CB97C "K{"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Texture::InitWithFile(__int64 a1, float a2, __int64 a3, int a4)
{
  __int64 result; // x0

  if ( (Caver::FileExistsAtPath() & 1) == 0 )
    return 0;
  sub_56A6A8(a1 + 32);
  result = 1;
  *(_DWORD *)(a1 + 40) = a4;
  *(float *)(a1 + 108) = a2;
  return result;
}

