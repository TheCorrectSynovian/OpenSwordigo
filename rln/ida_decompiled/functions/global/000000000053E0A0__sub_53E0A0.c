/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053E0A0
 * Mangled: sub_53E0A0
 * Demangled: sub_53E0A0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203760  .putwc
 *
 * Referenced strings: 3
 *   insn=0x000000000053E0AC string=0x000000000053E0B0 "b"
 *   insn=0x000000000053E0E0 string=0x000000000053E0E4 "!"
 *   insn=0x000000000053E0E4 string=0x000000000053E0C8 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53E0A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // x19

  if ( !a3 )
    return 0;
  for ( i = 0; i != a3; ++i )
  {
    if ( putwc(*(_DWORD *)(a2 + 4 * i), *(__FILE **)(a1 + 64)) == -1 )
      break;
  }
  return i;
}

