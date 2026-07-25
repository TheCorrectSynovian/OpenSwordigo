/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005445E4
 * Mangled: sub_5445E4
 * Demangled: sub_5445E4
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 27
 *   insn=0x0000000000544608 string=0x000000000054460C "C"
 *   insn=0x000000000054460C string=0x0000000000544610 "!"
 *   insn=0x0000000000544624 string=0x0000000000544628 ""
 *   insn=0x0000000000544628 string=0x000000000054462C ""
 *   insn=0x000000000054462C string=0x0000000000544630 "\t"
 *   insn=0x0000000000544638 string=0x000000000054463C "!"
 *   insn=0x000000000054464C string=0x0000000000544650 "a"
 *   insn=0x0000000000544658 string=0x000000000054465C "A"
 *   insn=0x0000000000544664 string=0x0000000000544668 "C"
 *   insn=0x0000000000544668 string=0x000000000054466C "A"
 *   insn=0x0000000000544668 string=0x0000000000544670 "("
 *   insn=0x0000000000544678 string=0x000000000054467C "\t"
 *   insn=0x0000000000544678 string=0x0000000000544690 "!"
 *   insn=0x0000000000544680 string=0x0000000000544684 "i"
 *   insn=0x0000000000544684 string=0x0000000000544688 ""
 *   insn=0x00000000005446A8 string=0x00000000005446AC "c"
 *   insn=0x00000000005446B4 string=0x00000000005446E4 "I"
 *   insn=0x00000000005446C0 string=0x00000000005446C4 "?"
 *   insn=0x00000000005446C8 string=0x00000000005446CC "!"
 *   insn=0x00000000005446D0 string=0x00000000005446D4 "?"
 *   insn=0x00000000005446E4 string=0x00000000005446E8 "H<H"
 *   insn=0x00000000005446E8 string=0x00000000005446EC "G\P"
 *   insn=0x00000000005446EC string=0x00000000005446F0 "F|X"
 *   insn=0x00000000005446F0 string=0x00000000005446F4 "D"
 *   insn=0x00000000005446F4 string=0x00000000005446F8 "C"
 *   insn=0x00000000005446F8 string=0x00000000005446FC "@"
 *   insn=0x00000000005446FC string=0x0000000000544700 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5445E4(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v4; // x5
  _BOOL4 v5; // w6
  _BOOL4 v6; // w8
  __int64 v7; // x3
  unsigned __int64 v9; // x4
  __int64 v10; // x4

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
  if ( a2 < 0 || *(_QWORD *)(a1 + 24) - v7 < a2 )
    return -1;
  if ( v5 )
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 8) + a2;
  if ( v6 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    for ( *(_QWORD *)(a1 + 40) = v10; a2 > 0x7FFFFFFF; v10 += 0x7FFFFFFF )
      a2 -= 0x7FFFFFFF;
    *(_QWORD *)(a1 + 40) = v10 + (int)a2;
  }
  return v4;
}

