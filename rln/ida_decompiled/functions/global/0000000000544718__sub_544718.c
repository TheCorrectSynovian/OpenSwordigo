/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000544718
 * Mangled: sub_544718
 * Demangled: sub_544718
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000544728 string=0x000000000054472C "_"
 *   insn=0x000000000054472C string=0x0000000000544730 "i"
 *   insn=0x000000000054473C string=0x0000000000544740 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_544718(__int64 a1)
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
  return (__int64)(v2 - *(_QWORD *)(a1 + 16)) >> 2;
}

