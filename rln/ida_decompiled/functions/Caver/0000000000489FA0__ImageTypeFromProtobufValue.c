/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000489FA0
 * Mangled: _ZN5Caver26ImageTypeFromProtobufValueENS_5Proto9ImageTypeE
 * Demangled: Caver::ImageTypeFromProtobufValue(Caver::Proto::ImageType)
 *
 * Callers: 2
 *   0x00000000001F9F50  Caver::ImageTypeFromProtobufValue(Caver::Proto::ImageType)
 *   0x0000000000489E98  Caver::SavePolygonToProtobufMessage(Caver::Polygon const&,Caver::Proto::Polygon *)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ImageTypeFromProtobufValue(__int64 result)
{
  if ( (unsigned int)(result - 1) >= 3 )
    return 0;
  else
    return (unsigned int)result;
}

