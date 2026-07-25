/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000489FB0
 * Mangled: _ZN5Caver26ProtobufValueFromImageTypeENS_9ImageTypeE
 * Demangled: Caver::ProtobufValueFromImageType(Caver::ImageType)
 *
 * Callers: 1
 *   0x00000000001F91D0  Caver::ProtobufValueFromImageType(Caver::ImageType)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProtobufValueFromImageType(__int64 result)
{
  if ( (unsigned int)(result - 1) >= 3 )
    return 0;
  else
    return (unsigned int)result;
}

