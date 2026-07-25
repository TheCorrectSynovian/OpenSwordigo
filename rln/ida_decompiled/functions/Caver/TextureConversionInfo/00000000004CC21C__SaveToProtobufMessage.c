/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CC21C
 * Mangled: _ZNK5Caver21TextureConversionInfo21SaveToProtobufMessageEPNS_5Proto22Texture_ConversionInfoE
 * Demangled: Caver::TextureConversionInfo::SaveToProtobufMessage(Caver::Proto::Texture_ConversionInfo *)
 *
 * Callers: 1
 *   0x00000000001FADC0  Caver::TextureConversionInfo::SaveToProtobufMessage(Caver::Proto::Texture_ConversionInfo *)
 *
 * Callees: 2
 *   0x00000000001F91D0  Caver::ProtobufValueFromImageType(Caver::ImageType)
 *   0x0000000000201D40  Caver::ProtobufValueFromPixelFormat(Caver::PixelFormat)
 *
 * Referenced strings: 15
 *   insn=0x00000000004CC22C string=0x00000000004CC230 "h"
 *   insn=0x00000000004CC234 string=0x00000000004CC238 "\n"
 *   insn=0x00000000004CC238 string=0x00000000004CC23C "j"
 *   insn=0x00000000004CC23C string=0x00000000004CC240 "i"
 *   insn=0x00000000004CC244 string=0x00000000004CC248 ""
 *   insn=0x00000000004CC248 string=0x00000000004CC24C "h"
 *   insn=0x00000000004CC24C string=0x00000000004CC250 "i"
 *   insn=0x00000000004CC258 string=0x00000000004CC25C "h"
 *   insn=0x00000000004CC258 string=0x00000000001F91D0 "0'"
 *   insn=0x00000000004CC25C string=0x00000000004CC260 "`"
 *   insn=0x00000000004CC260 string=0x00000000004CC264 ""
 *   insn=0x00000000004CC264 string=0x00000000004CC268 "h"
 *   insn=0x00000000004CC270 string=0x00000000004CC274 "h"
 *   insn=0x00000000004CC274 string=0x00000000004CC278 ""
 *   insn=0x00000000004CC278 string=0x00000000004CC27C "`""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextureConversionInfo::SaveToProtobufMessage(
        Caver::TextureConversionInfo *this,
        Caver::Proto::Texture_ConversionInfo *a2)
{
  int v3; // w8
  int v4; // w9
  int v5; // w9
  int v6; // w0
  int v7; // w8
  __int64 result; // x0
  int v9; // w8

  v3 = *((_DWORD *)a2 + 7);
  v4 = *((_DWORD *)this + 1);
  *((_DWORD *)a2 + 7) = v3 | 1;
  *((_DWORD *)a2 + 3) = v4;
  v5 = *((_DWORD *)this + 2);
  *((_DWORD *)a2 + 7) = v3 | 3;
  *((_DWORD *)a2 + 4) = v5;
  v6 = Caver::ProtobufValueFromImageType();
  v7 = *((_DWORD *)a2 + 7);
  *((_DWORD *)a2 + 5) = v6;
  *((_DWORD *)a2 + 7) = v7 | 4;
  result = Caver::ProtobufValueFromPixelFormat();
  v9 = *((_DWORD *)a2 + 7) | 8;
  *((_DWORD *)a2 + 6) = result;
  *((_DWORD *)a2 + 7) = v9;
  return result;
}

