/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000489FD0
 * Mangled: _ZN5Caver28ProtobufValueFromPixelFormatENS_11PixelFormatE
 * Demangled: Caver::ProtobufValueFromPixelFormat(Caver::PixelFormat)
 *
 * Callers: 1
 *   0x0000000000201D40  Caver::ProtobufValueFromPixelFormat(Caver::PixelFormat)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProtobufValueFromPixelFormat(__int64 result)
{
  if ( (unsigned int)(result - 1) >= 8 )
    return 0;
  else
    return (unsigned int)result;
}

