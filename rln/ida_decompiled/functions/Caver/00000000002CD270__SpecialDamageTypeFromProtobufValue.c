/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CD270
 * Mangled: _ZN5Caver34SpecialDamageTypeFromProtobufValueENS_5Proto17SpecialDamageTypeE
 * Demangled: Caver::SpecialDamageTypeFromProtobufValue(Caver::Proto::SpecialDamageType)
 *
 * Callers: 1
 *   0x00000000001F7520  Caver::SpecialDamageTypeFromProtobufValue(Caver::Proto::SpecialDamageType)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SpecialDamageTypeFromProtobufValue(__int64 result)
{
  if ( (unsigned int)result >= 3 )
    return 0;
  else
    return (unsigned int)result;
}

