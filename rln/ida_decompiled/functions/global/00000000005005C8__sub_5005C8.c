/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005005C8
 * Mangled: sub_5005C8
 * Demangled: sub_5005C8
 *
 * Callers: 2
 *   0x00000000004FF268  sub_4FF268
 *   0x00000000004FFC04  sub_4FFC04
 *
 * Callees: 2
 *   0x00000000005001E8  sub_5001E8
 *   0x0000000000500968  sub_500968
 *
 * Referenced strings: 22
 *   insn=0x00000000005005DC string=0x00000000005005E0 "h"
 *   insn=0x00000000005005E0 string=0x00000000005005E4 ")"
 *   insn=0x00000000005005E4 string=0x00000000005005E8 ")]"
 *   insn=0x00000000005005E8 string=0x00000000005005EC "!9"
 *   insn=0x00000000005005EC string=0x00000000005005F0 "\t@"
 *   insn=0x00000000005005F8 string=0x00000000005005FC "h"
 *   insn=0x00000000005005FC string=0x0000000000500600 "\t"
 *   insn=0x0000000000500600 string=0x0000000000500604 "v:@"
 *   insn=0x0000000000500604 string=0x0000000000500608 "i:"
 *   insn=0x0000000000500624 string=0x0000000000500628 " "
 *   insn=0x0000000000500630 string=0x0000000000500634 "h"
 *   insn=0x0000000000500638 string=0x000000000050063C "\n"
 *   insn=0x000000000050064C string=0x0000000000500650 ",9Hm"
 *   insn=0x0000000000500650 string=0x0000000000500654 "m"
 *   insn=0x0000000000500658 string=0x000000000050065C "L"
 *   insn=0x0000000000500660 string=0x0000000000500664 "!"
 *   insn=0x0000000000500664 string=0x0000000000500668 "w}@"
 *   insn=0x0000000000500674 string=0x0000000000500678 "?"
 *   insn=0x000000000050067C string=0x0000000000500680 "`"
 *   insn=0x0000000000500684 string=0x000000000059B07B "control structure too long"
 *   insn=0x0000000000500694 string=0x0000000000500698 ")9"
 *   insn=0x0000000000500698 string=0x000000000050069C "\t5"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5005C8(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v6; // x8
  unsigned int v7; // w22
  unsigned int v8; // w20
  int v9; // w12
  __int64 v10; // x21
  int v11; // w11
  unsigned int v12; // w8
  int v13; // w22
  int v14; // w9

  sub_5001E8(a1, a2 | (a3 << 6) | (a4 << 23) | (a5 << 14), *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 56) = -1;
  v8 = sub_5001E8(a1, 2147450902, *(_DWORD *)(v6 + 8));
  if ( v7 != -1 )
  {
    if ( v8 == -1 )
    {
      return v7;
    }
    else
    {
      v9 = v8;
      v10 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      do
      {
        v11 = v9;
        v12 = *(_DWORD *)(v10 + 4LL * v9);
        if ( v12 >> 14 == 131070 )
          v9 = -1;
        else
          v9 += (v12 >> 14) - 0x1FFFF + 1;
      }
      while ( v9 != -1 );
      v13 = v7 + ~v11;
      if ( v13 >= 0 )
        v14 = v13;
      else
        v14 = -v13;
      if ( v14 >= 0x20000 )
        sub_500968(*(_QWORD *)(a1 + 24), "control structure too long");
      *(_DWORD *)(v10 + 4LL * v11) = ((v13 << 14) + 2147467264) & 0xFFFFC000 | v12 & 0x3FFF;
    }
  }
  return v8;
}

