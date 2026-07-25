/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054CF18
 * Mangled: sub_54CF18
 * Demangled: sub_54CF18
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000054CF20 string=0x000000000054CF24 "#D@"
 *   insn=0x000000000054CF28 string=0x000000000054CF2C "_"
 *   insn=0x000000000054CF2C string=0x000000000054CF30 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54CF18(__int64 a1, unsigned int *a2, unsigned __int64 a3)
{
  __int64 result; // x0
  unsigned int v4; // t1

  for ( result = 0; a3 > (unsigned __int64)a2; result = v4 + __ROR8__(result, 57) )
    v4 = *a2++;
  return result;
}

