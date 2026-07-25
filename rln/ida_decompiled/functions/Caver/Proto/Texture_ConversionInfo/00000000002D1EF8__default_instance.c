/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1EF8
 * Mangled: _ZN5Caver5Proto22Texture_ConversionInfo16default_instanceEv
 * Demangled: Caver::Proto::Texture_ConversionInfo::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002D1F04 string=0x00000000002D1F08 "szE"
 *   insn=0x00000000002D1F08 string=0x00000000002D1F0C "`"
 *   insn=0x00000000002D1F0C string=0x00000000002D1F10 "`"
 *   insn=0x00000000002D1F14 string=0x00000000002D1F18 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture_ConversionInfo::default_instance(Caver::Proto::Texture_ConversionInfo *this)
{
  __int64 result; // x0

  result = Caver::Proto::Texture_ConversionInfo::default_instance_;
  if ( !Caver::Proto::Texture_ConversionInfo::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::Texture_ConversionInfo::default_instance_;
  }
  return result;
}

