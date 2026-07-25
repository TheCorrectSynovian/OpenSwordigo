/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000544A78
 * Mangled: sub_544A78
 * Demangled: sub_544A78
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000544A78 string=0x0000000000544A7C "a"
 *   insn=0x0000000000544A90 string=0x0000000000544A94 "?"
 *   insn=0x0000000000544A94 string=0x0000000000544A98 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_544A78(__int64 a1)
{
  unsigned __int64 v2; // x1
  unsigned __int64 v3; // x2
  unsigned int *v4; // x0

  if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
    return 0xFFFFFFFFLL;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    if ( v2 > v3 )
    {
      *(_QWORD *)(a1 + 24) = v2;
      v3 = v2;
    }
  }
  v4 = *(unsigned int **)(a1 + 16);
  if ( (unsigned __int64)v4 < v3 )
    return *v4;
  else
    return 0xFFFFFFFFLL;
}

