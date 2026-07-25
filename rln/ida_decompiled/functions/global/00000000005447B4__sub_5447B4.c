/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005447B4
 * Mangled: sub_5447B4
 * Demangled: sub_5447B4
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 32
 *   insn=0x00000000005447B4 string=0x00000000005447B8 "j"
 *   insn=0x00000000005447B8 string=0x00000000005447BC "i"
 *   insn=0x00000000005447D4 string=0x00000000005447D8 "_"
 *   insn=0x00000000005447DC string=0x00000000005447E0 "_"
 *   insn=0x00000000005447E4 string=0x00000000005447E8 "?"
 *   insn=0x0000000000544800 string=0x0000000000544804 ""
 *   insn=0x0000000000544800 string=0x0000000000544820 ""
 *   insn=0x0000000000544804 string=0x0000000000544808 "g"
 *   insn=0x0000000000544808 string=0x000000000054480C "A"
 *   insn=0x0000000000544820 string=0x0000000000544824 "G"
 *   insn=0x0000000000544824 string=0x0000000000544828 "A"
 *   insn=0x0000000000544824 string=0x000000000054482C "E"
 *   insn=0x0000000000544838 string=0x000000000054483C "\t"
 *   insn=0x0000000000544838 string=0x0000000000544850 "_"
 *   insn=0x0000000000544840 string=0x0000000000544844 "i"
 *   insn=0x0000000000544844 string=0x0000000000544848 "h"
 *   insn=0x0000000000544854 string=0x0000000000544858 "_"
 *   insn=0x0000000000544860 string=0x0000000000544864 "A"
 *   insn=0x0000000000544870 string=0x0000000000544874 "B"
 *   insn=0x0000000000544874 string=0x0000000000544878 "?"
 *   insn=0x0000000000544880 string=0x0000000000544884 "B"
 *   insn=0x0000000000544888 string=0x000000000054488C "F"
 *   insn=0x0000000000544898 string=0x000000000054489C "G"
 *   insn=0x00000000005448C0 string=0x00000000005448C4 "!"
 *   insn=0x00000000005448C0 string=0x00000000005448D4 "B"
 *   insn=0x00000000005448C4 string=0x00000000005448C8 "B"
 *   insn=0x00000000005448C8 string=0x00000000005448CC "?"
 *   insn=0x0000000000544900 string=0x0000000000544904 "B"
 *   insn=0x0000000000544904 string=0x0000000000544908 "!"
 *   insn=0x0000000000544918 string=0x000000000054491C "B"
 *   insn=0x000000000054491C string=0x0000000000544920 "&"
 *   insn=0x0000000000544920 string=0x0000000000544924 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5447B4(__int64 a1, __int64 a2, int a3, unsigned __int8 a4)
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
  __int64 v14; // x2
  __int64 i; // x1

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
    v13 = a2 + ((__int64)(v12 - v10) >> 2);
    a2 += (*(_QWORD *)(a1 + 16) - v10) >> 2;
  }
  else
  {
    v13 = a2;
    if ( a3 == 2 )
    {
      a2 += (*(_QWORD *)(a1 + 24) - v10) >> 2;
      v13 = a2;
    }
  }
  if ( a2 < 0 || !(v9 | v7) || a2 > (*(_QWORD *)(a1 + 24) - v10) >> 2 )
    a2 = -1;
  else
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 8) + 4 * a2;
  if ( v13 < 0 || !(v9 | v8) || v13 > (*(_QWORD *)(a1 + 24) - v10) >> 2 )
    return a2;
  v14 = *(_QWORD *)(a1 + 32);
  for ( i = v13; i > 0x7FFFFFFF; v14 += 0x1FFFFFFFCLL )
    i -= 0x7FFFFFFF;
  *(_QWORD *)(a1 + 40) = v14 + 4 * i;
  return v13;
}

