/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054445C
 * Mangled: sub_54445C
 * Demangled: sub_54445C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 35
 *   insn=0x000000000054445C string=0x0000000000544460 "j"
 *   insn=0x0000000000544460 string=0x0000000000544464 "i"
 *   insn=0x000000000054447C string=0x0000000000544480 "_"
 *   insn=0x0000000000544484 string=0x0000000000544488 "_"
 *   insn=0x000000000054448C string=0x0000000000544490 "?"
 *   insn=0x00000000005444A8 string=0x00000000005444AC ""
 *   insn=0x00000000005444A8 string=0x00000000005444C8 ""
 *   insn=0x00000000005444AC string=0x00000000005444B0 "g"
 *   insn=0x00000000005444B0 string=0x00000000005444B4 "A"
 *   insn=0x00000000005444C8 string=0x00000000005444CC "G"
 *   insn=0x00000000005444CC string=0x00000000005444D0 "A"
 *   insn=0x00000000005444CC string=0x00000000005444D4 "E"
 *   insn=0x00000000005444E0 string=0x00000000005444E4 "\t"
 *   insn=0x00000000005444E0 string=0x00000000005444F8 "_"
 *   insn=0x00000000005444E8 string=0x00000000005444EC "i"
 *   insn=0x00000000005444F8 string=0x00000000005444FC " "
 *   insn=0x00000000005444FC string=0x0000000000544500 "_"
 *   insn=0x0000000000544504 string=0x0000000000544508 " "
 *   insn=0x0000000000544508 string=0x000000000054450C "a"
 *   insn=0x0000000000544510 string=0x0000000000544514 "#"
 *   insn=0x0000000000544518 string=0x000000000054451C "B"
 *   insn=0x000000000054451C string=0x0000000000544520 "?"
 *   insn=0x0000000000544528 string=0x000000000054452C "B"
 *   insn=0x0000000000544530 string=0x0000000000544534 "F"
 *   insn=0x0000000000544540 string=0x0000000000544544 "G"
 *   insn=0x000000000054455C string=0x0000000000544560 "c"
 *   insn=0x0000000000544568 string=0x000000000054456C "!"
 *   insn=0x0000000000544570 string=0x0000000000544574 "?"
 *   insn=0x0000000000544574 string=0x0000000000544578 "c"
 *   insn=0x000000000054457C string=0x0000000000544580 "B"
 *   insn=0x00000000005445AC string=0x00000000005445B0 "B"
 *   insn=0x00000000005445B0 string=0x00000000005445B4 "!"
 *   insn=0x00000000005445C4 string=0x00000000005445C8 "&"
 *   insn=0x00000000005445C8 string=0x00000000005445CC "B"
 *   insn=0x00000000005445CC string=0x00000000005445D0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54445C(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
{
  int v4; // w9
  _BOOL4 v5; // w4
  _BOOL4 v6; // w6
  int v7; // w3
  int v8; // w5
  int v9; // w4
  __int64 v10; // x7
  unsigned __int64 v12; // x6
  __int64 v13; // x6
  __int64 v14; // x3
  __int64 i; // x1
  __int64 v16; // x2

  v4 = a4 & 8;
  v5 = (a4 & *(_BYTE *)(a1 + 64) & 8) != 0;
  v6 = (*(_BYTE *)(a1 + 64) & 0x10 & a4) != 0;
  v7 = v5 && (a4 & 0x10) == 0;
  v8 = v6 && v4 == 0;
  v9 = a3 != 1 && v5 && v6;
  if ( v7 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( !v10 && a2 )
      return -1;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 32);
    if ( !v10 && a2 || (!v6 || v4 != 0) && !v9 )
      return -1;
  }
  v12 = *(_QWORD *)(a1 + 40);
  if ( v12 && v12 > *(_QWORD *)(a1 + 24) )
  {
    if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
    {
      *(_QWORD *)(a1 + 8) = v12;
      *(_QWORD *)(a1 + 16) = v12;
    }
    *(_QWORD *)(a1 + 24) = v12;
  }
  if ( a3 == 1 )
  {
    v13 = a2 + v12 - v10;
    a2 += *(_QWORD *)(a1 + 16) - v10;
  }
  else
  {
    v13 = a2;
    if ( a3 == 2 )
    {
      a2 += *(_QWORD *)(a1 + 24) - v10;
      v13 = a2;
    }
  }
  if ( a2 < 0 || !(v9 | v7) || a2 > *(_QWORD *)(a1 + 24) - v10 )
    a2 = -1;
  else
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 8) + a2;
  if ( v13 < 0 || !(v9 | v8) || v13 > *(_QWORD *)(a1 + 24) - v10 )
    return a2;
  if ( v13 <= 0x7FFFFFFF )
  {
    v16 = *(_QWORD *)(a1 + 32);
    LODWORD(i) = v13;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 32) + 0x7FFFFFFFLL;
    for ( i = v13; i > 0x7FFFFFFF; i -= 0x7FFFFFFF )
    {
      v16 = v14;
      v14 += 0x7FFFFFFF;
    }
  }
  *(_QWORD *)(a1 + 40) = v16 + (int)i;
  return v13;
}

