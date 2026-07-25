/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055421C
 * Mangled: sub_55421C
 * Demangled: sub_55421C
 *
 * Callers: 2
 *   0x00000000005542C8  sub_5542C8
 *   0x0000000000554584  sub_554584
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x000000000055421C string=0x0000000000554220 "$"
 *   insn=0x0000000000554220 string=0x0000000000554264 "D\t"
 *   insn=0x000000000055422C string=0x0000000000554230 "$|"
 *   insn=0x0000000000554238 string=0x000000000055423C "c"
 *   insn=0x000000000055423C string=0x0000000000554240 "#"
 *   insn=0x0000000000554244 string=0x0000000000554248 "c"
 *   insn=0x0000000000554248 string=0x000000000055424C "Cxc"
 *   insn=0x0000000000554264 string=0x0000000000554268 "d"
 *   insn=0x0000000000554270 string=0x0000000000554274 "c"
 *   insn=0x0000000000554280 string=0x0000000000554284 "d"
 *   insn=0x0000000000554288 string=0x000000000055428C "#"
 *   insn=0x000000000055428C string=0x0000000000554290 "!"
 *   insn=0x0000000000554290 string=0x0000000000554294 "c"
 *   insn=0x0000000000554294 string=0x0000000000554298 "Cxc"
 *   insn=0x000000000055429C string=0x00000000005542A0 "a"
 *   insn=0x00000000005542A8 string=0x00000000005542AC "#@"
 *   insn=0x00000000005542AC string=0x00000000005542B0 "!"
 *   insn=0x00000000005542B0 string=0x00000000005542B4 "c"
 *   insn=0x00000000005542B4 string=0x00000000005542B8 "Cxc"
 *   insn=0x00000000005542BC string=0x00000000005542C0 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_55421C(__int64 a1, unsigned __int64 a2, __int64 a3, __int16 a4, char a5)
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

