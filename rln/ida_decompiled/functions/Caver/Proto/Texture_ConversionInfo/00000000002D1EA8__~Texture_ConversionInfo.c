/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1EA8
 * Mangled: _ZN5Caver5Proto22Texture_ConversionInfoD0Ev
 * Demangled: Caver::Proto::Texture_ConversionInfo::~Texture_ConversionInfo()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7600  google::protobuf::MessageLite::~MessageLite()
 *   0x00000000002D1EF0  Caver::Proto::Texture_ConversionInfo::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 6
 *   insn=0x00000000002D1EB4 string=0x00000000002D1EB8 ""
 *   insn=0x00000000002D1EBC string=0x00000000002D1EC0 "A"
 *   insn=0x00000000002D1EC0 string=0x00000000002D1EC4 "h"
 *   insn=0x00000000002D1EC8 string=0x00000000001F7600 "0'"
 *   insn=0x00000000002D1ED8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002D1EE8 string=0x00000000002D1EEC "v"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Texture_ConversionInfo::~Texture_ConversionInfo(
        Caver::Proto::Texture_ConversionInfo *this)
{
  *(_QWORD *)this = off_6C5DC8;
  google::protobuf::MessageLite::~MessageLite(this);
  operator delete(this);
}

