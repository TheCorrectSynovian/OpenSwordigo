/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000572BBC
 * Mangled: sub_572BBC
 * Demangled: sub_572BBC
 *
 * Callers: 7
 *   0x0000000000572EC4  sub_572EC4
 *   0x00000000005743B0  sub_5743B0
 *   0x0000000000574B04  sub_574B04
 *   0x00000000005764B0  sub_5764B0
 *   0x0000000000576A34  sub_576A34
 *   0x000000000057781C  sub_57781C
 *   0x0000000000577FB4  sub_577FB4
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x0000000000572BBC string=0x0000000000572BC0 "D"
 *   insn=0x0000000000572BC4 string=0x0000000000572BC8 "`"
 *   insn=0x0000000000572BD4 string=0x0000000000572BD8 "!"
 *   insn=0x0000000000572BD8 string=0x0000000000572BDC "?$"
 *   insn=0x0000000000572BDC string=0x0000000000572BE0 "H"
 *   insn=0x0000000000572BE0 string=0x0000000000572BE4 "E"
 *   insn=0x0000000000572BEC string=0x0000000000572BF0 "#"
 *   insn=0x0000000000572BF0 string=0x0000000000572BF4 "a"
 *   insn=0x0000000000572BF4 string=0x0000000000572BF8 "!"
 *   insn=0x0000000000572C00 string=0x0000000000572C04 "!"
 *   insn=0x0000000000572C0C string=0x0000000000572C10 "c"
 *   insn=0x0000000000572C1C string=0x0000000000572C20 "!"
 *   insn=0x0000000000572C24 string=0x0000000000572C38 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_572BBC(__int64 a1)
{
  unsigned __int8 *v1; // x2
  int v2; // w4
  unsigned __int8 *v3; // x5
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1

  v1 = *(unsigned __int8 **)(a1 + 24);
  v2 = *v1;
  if ( v2 == 95 )
  {
    v6 = 0;
  }
  else
  {
    if ( v2 == 110 )
      return -1;
    if ( (unsigned __int8)(v2 - 48) > 9u )
      return -1;
    v3 = v1 + 1;
    v4 = 0;
    do
    {
      *(_QWORD *)(a1 + 24) = v3;
      v5 = 10 * v4 + (unsigned __int8)v2;
      v2 = *v3;
      v1 = v3;
      v4 = v5 - 48;
      ++v3;
    }
    while ( (unsigned __int8)(v2 - 48) <= 9u );
    v6 = v4 + 1;
    if ( v2 != 95 )
      return -1;
  }
  *(_QWORD *)(a1 + 24) = v1 + 1;
  return v6;
}

