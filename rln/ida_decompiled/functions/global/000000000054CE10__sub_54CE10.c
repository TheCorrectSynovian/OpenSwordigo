/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054CE10
 * Mangled: sub_54CE10
 * Demangled: sub_54CE10
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000054CE24 string=0x000000000054CE28 "B"
 *   insn=0x000000000054CE2C string=0x000000000054CE30 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54CE10(__int64 a1, __int64 a2)
{
  unsigned int v2; // w2

  if ( !a1 )
    return 0;
  v2 = 0;
  while ( 1 )
  {
    if ( *(_DWORD *)a1 == 1 )
      ++v2;
    if ( a1 == a2 )
      break;
    a1 = *(_QWORD *)(a1 + 8);
  }
  return v2;
}

