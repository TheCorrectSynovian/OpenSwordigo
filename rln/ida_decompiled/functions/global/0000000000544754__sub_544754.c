/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000544754
 * Mangled: sub_544754
 * Demangled: sub_544754
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x0000000000544760 string=0x0000000000544770 "?"
 *   insn=0x0000000000544774 string=0x0000000000544778 "C"
 *   insn=0x0000000000544774 string=0x00000000005447A4 "B"
 *   insn=0x0000000000544780 string=0x0000000000544784 "c"
 *   insn=0x0000000000544784 string=0x0000000000544790 "D"
 *   insn=0x0000000000544798 string=0x000000000054479C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_544754(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // x2
  _BOOL4 v4; // w3

  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 8) >= v2 )
    return (unsigned int)-1;
  if ( a2 == -1 )
  {
    a2 = 0;
    *(_QWORD *)(a1 + 16) = v2 - 4;
    return a2;
  }
  v4 = *(_DWORD *)(v2 - 4) == a2;
  if ( *(_DWORD *)(v2 - 4) == a2 || (*(_DWORD *)(a1 + 64) & 0x10) != 0 )
  {
    *(_QWORD *)(a1 + 16) = v2 - 4;
    if ( !v4 )
      *(_DWORD *)(v2 - 4) = a2;
  }
  else
  {
    return (unsigned int)-1;
  }
  return a2;
}

