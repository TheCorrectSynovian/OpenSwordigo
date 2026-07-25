/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CC1C0
 * Mangled: _ZN5Caver21TextureConversionInfo23LoadFromProtobufMessageERKNS_5Proto22Texture_ConversionInfoE
 * Demangled: Caver::TextureConversionInfo::LoadFromProtobufMessage(Caver::Proto::Texture_ConversionInfo const&)
 *
 * Callers: 1
 *   0x00000000001F9F60  Caver::TextureConversionInfo::LoadFromProtobufMessage(Caver::Proto::Texture_ConversionInfo const&)
 *
 * Callees: 2
 *   0x00000000001F4900  Caver::PixelFormatFromProtobufValue(Caver::Proto::PixelFormat)
 *   0x00000000001F9F50  Caver::ImageTypeFromProtobufValue(Caver::Proto::ImageType)
 *
 * Referenced strings: 9
 *   insn=0x00000000004CC1D4 string=0x00000000004CC1D8 "hB"
 *   insn=0x00000000004CC1E4 string=0x00000000004CC1E8 "Z"
 *   insn=0x00000000004CC1E8 string=0x00000000004CC1EC "`"
 *   insn=0x00000000004CC1E8 string=0x00000000001F9F50 "0'"
 *   insn=0x00000000004CC1F4 string=0x00000000004CC1F8 "`"
 *   insn=0x00000000004CC1F4 string=0x00000000001F4900 "P'"
 *   insn=0x00000000004CC1F8 string=0x00000000004CC1FC "`"
 *   insn=0x00000000004CC200 string=0x00000000004CC204 "!"
 *   insn=0x00000000004CC208 string=0x00000000004CC20C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::TextureConversionInfo::LoadFromProtobufMessage(
        Caver::TextureConversionInfo *this,
        const Caver::Proto::Texture_ConversionInfo *a2)
{
  int v3; // w0
  int v4; // s0
  int v5; // s1
  float result; // s0

  *(_QWORD *)((char *)this + 4) = *(_QWORD *)((char *)a2 + 12);
  if ( (*((_BYTE *)a2 + 28) & 4) != 0 )
    *((_DWORD *)this + 3) = Caver::ImageTypeFromProtobufValue();
  v3 = Caver::PixelFormatFromProtobufValue();
  v4 = *((_DWORD *)this + 1);
  v5 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 4) = v3;
  result = (float)v4 / (float)v5;
  *((float *)this + 5) = result;
  return result;
}

