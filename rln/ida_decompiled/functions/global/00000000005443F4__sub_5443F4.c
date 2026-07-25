/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005443F4
 * Mangled: sub_5443F4
 * Demangled: sub_5443F4
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x0000000000544400 string=0x0000000000544404 "?"
 *   insn=0x0000000000544408 string=0x000000000054440C "C"
 *   insn=0x000000000054440C string=0x0000000000544410 "$"
 *   insn=0x0000000000544418 string=0x000000000054441C "c"
 *   insn=0x000000000054441C string=0x0000000000544428 "E"
 *   insn=0x000000000054442C string=0x0000000000544430 "C"
 *   insn=0x0000000000544430 string=0x0000000000544434 "D"
 *   insn=0x0000000000544440 string=0x0000000000544444 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5443F4(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // x2
  _BOOL4 v3; // w3

  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 8) >= v2 )
    return (unsigned int)-1;
  if ( a2 != -1 )
  {
    v3 = *(unsigned __int8 *)(v2 - 1) == (unsigned __int8)a2;
    if ( *(unsigned __int8 *)(v2 - 1) == (unsigned __int8)a2 || (*(_DWORD *)(a1 + 64) & 0x10) != 0 )
    {
      *(_QWORD *)(a1 + 16) = v2 - 1;
      if ( !v3 )
        *(_BYTE *)(v2 - 1) = a2;
      return a2;
    }
    return (unsigned int)-1;
  }
  *(_QWORD *)(a1 + 16) = v2 - 1;
  return 0;
}

