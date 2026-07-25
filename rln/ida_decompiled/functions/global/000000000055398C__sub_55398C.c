/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055398C
 * Mangled: sub_55398C
 * Demangled: sub_55398C
 *
 * Callers: 2
 *   0x0000000000553A38  sub_553A38
 *   0x0000000000553F40  sub_553F40
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x000000000055398C string=0x0000000000553990 "$"
 *   insn=0x0000000000553990 string=0x00000000005539D4 "D\t"
 *   insn=0x000000000055399C string=0x00000000005539A0 "$|"
 *   insn=0x00000000005539A8 string=0x00000000005539AC "c"
 *   insn=0x00000000005539AC string=0x00000000005539B0 "#"
 *   insn=0x00000000005539B4 string=0x00000000005539B8 "c"
 *   insn=0x00000000005539B8 string=0x00000000005539BC "Cxc"
 *   insn=0x00000000005539D4 string=0x00000000005539D8 "d"
 *   insn=0x00000000005539E0 string=0x00000000005539E4 "c"
 *   insn=0x00000000005539F0 string=0x00000000005539F4 "d"
 *   insn=0x00000000005539F8 string=0x00000000005539FC "#"
 *   insn=0x00000000005539FC string=0x0000000000553A00 "!"
 *   insn=0x0000000000553A00 string=0x0000000000553A04 "c"
 *   insn=0x0000000000553A04 string=0x0000000000553A08 "Cxc"
 *   insn=0x0000000000553A0C string=0x0000000000553A10 "a"
 *   insn=0x0000000000553A18 string=0x0000000000553A1C "#@"
 *   insn=0x0000000000553A1C string=0x0000000000553A20 "!"
 *   insn=0x0000000000553A20 string=0x0000000000553A24 "c"
 *   insn=0x0000000000553A24 string=0x0000000000553A28 "Cxc"
 *   insn=0x0000000000553A2C string=0x0000000000553A30 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_55398C(__int64 a1, unsigned __int64 a2, __int64 a3, __int16 a4, char a5)
{
  __int64 v5; // x5
  unsigned __int64 v6; // x3
  __int64 v8; // x4
  __int64 v9; // x3
  __int64 v10; // x3

  if ( a5 )
  {
    v5 = a1;
    do
    {
      v6 = a2 % 0xA;
      a2 /= 0xAu;
      *(_DWORD *)(v5 - 4) = *(_DWORD *)(a3 + 4 * (v6 + 4));
      v5 -= 4;
    }
    while ( a2 );
  }
  else if ( (a4 & 0x4A) == 0x40 )
  {
    v5 = a1;
    do
    {
      v10 = a2 & 7;
      a2 >>= 3;
      *(_DWORD *)(v5 - 4) = *(_DWORD *)(a3 + 4 * (v10 + 4));
      v5 -= 4;
    }
    while ( a2 );
  }
  else
  {
    v8 = 4;
    if ( (a4 & 0x4000) != 0 )
      v8 = 20;
    v5 = a1;
    do
    {
      v9 = a2 & 0xF;
      a2 >>= 4;
      *(_DWORD *)(v5 - 4) = *(_DWORD *)(a3 + 4 * (v9 + v8));
      v5 -= 4;
    }
    while ( a2 );
  }
  return (unsigned __int64)(a1 - v5) >> 2;
}

