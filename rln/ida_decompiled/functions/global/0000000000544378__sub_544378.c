/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000544378
 * Mangled: sub_544378
 * Demangled: sub_544378
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000544378 string=0x000000000054437C "a"
 *   insn=0x0000000000544388 string=0x000000000054438C "_"
 *   insn=0x000000000054438C string=0x0000000000544390 "i"
 *   insn=0x000000000054439C string=0x00000000005443A0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_544378(__int64 a1)
{
  unsigned __int64 v1; // x2
  unsigned __int64 v2; // x1

  if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
    return -1;
  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    if ( v1 > v2 )
    {
      *(_QWORD *)(a1 + 24) = v1;
      v2 = v1;
    }
  }
  return v2 - *(_QWORD *)(a1 + 16);
}

