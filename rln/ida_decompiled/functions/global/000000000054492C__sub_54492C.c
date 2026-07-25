/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054492C
 * Mangled: sub_54492C
 * Demangled: sub_54492C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 31
 *   insn=0x0000000000544950 string=0x0000000000544954 "C"
 *   insn=0x0000000000544954 string=0x0000000000544958 "!"
 *   insn=0x000000000054496C string=0x0000000000544970 ""
 *   insn=0x0000000000544970 string=0x0000000000544974 ""
 *   insn=0x0000000000544974 string=0x0000000000544978 "\t"
 *   insn=0x0000000000544980 string=0x0000000000544984 "!"
 *   insn=0x0000000000544994 string=0x0000000000544998 "a"
 *   insn=0x00000000005449A0 string=0x00000000005449A4 "A"
 *   insn=0x00000000005449AC string=0x00000000005449B0 "C"
 *   insn=0x00000000005449B0 string=0x00000000005449B4 "A"
 *   insn=0x00000000005449B0 string=0x00000000005449B8 "("
 *   insn=0x00000000005449C0 string=0x00000000005449C4 "\t"
 *   insn=0x00000000005449C0 string=0x00000000005449D8 "!"
 *   insn=0x00000000005449C8 string=0x00000000005449CC "i"
 *   insn=0x00000000005449E0 string=0x00000000005449E4 "?"
 *   insn=0x00000000005449EC string=0x00000000005449FC ""
 *   insn=0x00000000005449F0 string=0x00000000005449F4 "c"
 *   insn=0x00000000005449FC string=0x0000000000544A3C "I"
 *   insn=0x0000000000544A08 string=0x0000000000544A0C "?"
 *   insn=0x0000000000544A0C string=0x0000000000544A10 ""
 *   insn=0x0000000000544A18 string=0x0000000000544A1C "c"
 *   insn=0x0000000000544A1C string=0x0000000000544A20 "!"
 *   insn=0x0000000000544A24 string=0x0000000000544A28 "?"
 *   insn=0x0000000000544A28 string=0x0000000000544A2C "c"
 *   insn=0x0000000000544A3C string=0x0000000000544A40 "H<H"
 *   insn=0x0000000000544A40 string=0x0000000000544A44 "G\P"
 *   insn=0x0000000000544A44 string=0x0000000000544A48 "F|X"
 *   insn=0x0000000000544A48 string=0x0000000000544A4C "D"
 *   insn=0x0000000000544A4C string=0x0000000000544A50 "C"
 *   insn=0x0000000000544A50 string=0x0000000000544A54 "@"
 *   insn=0x0000000000544A54 string=0x0000000000544A58 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54492C(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // x5
  _BOOL4 v5; // w6
  _BOOL4 v6; // w8
  __int64 v7; // x3
  unsigned __int64 v9; // x4
  __int64 v10; // x3
  __int64 v11; // x3
  __int64 v12; // x7

  v4 = a2;
  v5 = (a4 & *(_BYTE *)(a1 + 64) & 8) != 0;
  v6 = (*(_BYTE *)(a1 + 64) & 0x10 & a4) != 0;
  if ( (a4 & *(_BYTE *)(a1 + 64) & 8) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( !v7 && a2 )
      return -1;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 32);
    if ( !v7 && a2 || !v6 )
      return -1;
  }
  v9 = *(_QWORD *)(a1 + 40);
  if ( v9 && v9 > *(_QWORD *)(a1 + 24) )
  {
    if ( (*(_DWORD *)(a1 + 64) & 8) == 0 )
    {
      *(_QWORD *)(a1 + 8) = v9;
      *(_QWORD *)(a1 + 16) = v9;
    }
    *(_QWORD *)(a1 + 24) = v9;
  }
  if ( a2 < 0 || a2 > (*(_QWORD *)(a1 + 24) - v7) >> 2 )
    return -1;
  if ( v5 )
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 8) + 4 * a2;
  if ( v6 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 40) = v10;
    if ( a2 <= 0x7FFFFFFF )
    {
      v12 = v10;
    }
    else
    {
      v11 = v10 + 0x1FFFFFFFCLL;
      do
      {
        a2 -= 0x7FFFFFFF;
        v12 = v11;
        v11 += 0x1FFFFFFFCLL;
      }
      while ( a2 > 0x7FFFFFFF );
    }
    *(_QWORD *)(a1 + 40) = v12 + 4 * a2;
  }
  return v4;
}

