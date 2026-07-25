/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CC0CC
 * Mangled: _ZN5Caver7Texture6CreateEiiNS_11PixelFormatEf
 * Demangled: Caver::Texture::Create(int,int,Caver::PixelFormat,float)
 *
 * Callers: 1
 *   0x0000000000200D60  Caver::Texture::Create(int,int,Caver::PixelFormat,float)
 *
 * Callees: 1
 *   0x00000000001F6980  Caver::Texture::InitWithData(void const*,int,int,Caver::PixelFormat)
 *
 * Referenced strings: 6
 *   insn=0x00000000004CC0CC string=0x00000000004CC0D0 "" "
 *   insn=0x00000000004CC0D0 string=0x00000000004CC0D4 "I"
 *   insn=0x00000000004CC0D4 string=0x00000000004CC0D8 "B"
 *   insn=0x00000000004CC0E0 string=0x00000000004CC0E4 "@ "
 *   insn=0x00000000004CC0F4 string=0x00000000004CC0F8 "D"
 *   insn=0x00000000004CC104 string=0x00000000001F6980 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Texture::Create(__int64 a1, int a2, int a3, int a4, float a5)
{
  *(float *)(a1 + 108) = a5;
  *(_DWORD *)(a1 + 68) = a4;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(float *)(a1 + 84) = (float)a2;
  *(float *)(a1 + 88) = (float)a3;
  return Caver::Texture::InitWithData();
}

