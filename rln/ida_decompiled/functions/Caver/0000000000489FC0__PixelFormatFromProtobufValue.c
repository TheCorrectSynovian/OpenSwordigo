/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000489FC0
 * Mangled: _ZN5Caver28PixelFormatFromProtobufValueENS_5Proto11PixelFormatE
 * Demangled: Caver::PixelFormatFromProtobufValue(Caver::Proto::PixelFormat)
 *
 * Callers: 1
 *   0x00000000001F4900  Caver::PixelFormatFromProtobufValue(Caver::Proto::PixelFormat)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PixelFormatFromProtobufValue(__int64 result)
{
  if ( (unsigned int)(result - 1) >= 8 )
    return 0;
  else
    return (unsigned int)result;
}

