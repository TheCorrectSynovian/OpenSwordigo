/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005443B0
 * Mangled: sub_5443B0
 * Demangled: sub_5443B0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000005443BC string=0x00000000005443C0 "a"
 *   insn=0x00000000005443C0 string=0x00000000005443C4 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5443B0(__int64 a1)
{
  unsigned __int64 v1; // x1
  unsigned __int64 v2; // x2
  unsigned __int8 *v3; // x0

  if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
    return 0xFFFFFFFFLL;
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
  v3 = *(unsigned __int8 **)(a1 + 16);
  if ( (unsigned __int64)v3 < v2 )
    return *v3;
  else
    return 0xFFFFFFFFLL;
}

