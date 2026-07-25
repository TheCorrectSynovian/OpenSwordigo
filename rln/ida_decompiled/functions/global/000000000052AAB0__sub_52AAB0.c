/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052AAB0
 * Mangled: sub_52AAB0
 * Demangled: sub_52AAB0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000052AAB8 string=0x000000000052AABC "#"
 *   insn=0x000000000052AAC0 string=0x000000000052AAC4 "?"
 *   insn=0x000000000052AAC4 string=0x000000000052AAC8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52AAB0(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  __int64 result; // x0
  unsigned int v4; // t1

  result = 0;
  if ( a2 < a3 )
  {
    do
    {
      v4 = *a2++;
      result = v4 + __ROR8__(result, 57);
    }
    while ( a2 != a3 );
  }
  return result;
}

