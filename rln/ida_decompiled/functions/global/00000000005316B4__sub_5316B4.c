/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005316B4
 * Mangled: sub_5316B4
 * Demangled: sub_5316B4
 *
 * Callers: 2
 *   0x000000000053175C  sub_53175C
 *   0x0000000000531C5C  sub_531C5C
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x00000000005316B8 string=0x00000000005316F8 "D\t"
 *   insn=0x00000000005316C4 string=0x00000000005316C8 "$|"
 *   insn=0x00000000005316D0 string=0x00000000005316D4 "c"
 *   insn=0x00000000005316D4 string=0x00000000005316D8 "#"
 *   insn=0x00000000005316DC string=0x00000000005316E0 "C"
 *   insn=0x00000000005316E0 string=0x00000000005316E4 "c"
 *   insn=0x00000000005316F8 string=0x00000000005316FC "d"
 *   insn=0x0000000000531704 string=0x0000000000531708 "c"
 *   insn=0x0000000000531714 string=0x0000000000531718 "d"
 *   insn=0x000000000053171C string=0x0000000000531720 "B"
 *   insn=0x0000000000531720 string=0x0000000000531724 "#"
 *   insn=0x0000000000531724 string=0x0000000000531728 "!"
 *   insn=0x0000000000531728 string=0x000000000053172C "Chc8"
 *   insn=0x000000000053173C string=0x0000000000531740 "#@"
 *   insn=0x0000000000531740 string=0x0000000000531744 "!"
 *   insn=0x0000000000531744 string=0x0000000000531748 "C"
 *   insn=0x0000000000531748 string=0x000000000053174C "c"
 *   insn=0x0000000000531750 string=0x0000000000531754 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5316B4(__int64 a1, unsigned __int64 a2, __int64 a3, __int16 a4, char a5)
{
  __int64 v5; // x5
  unsigned __int64 v6; // x3
  __int64 v8; // x4
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x3

  if ( a5 )
  {
    v5 = a1;
    do
    {
      v6 = a2 % 0xA;
      a2 /= 0xAu;
      *(_BYTE *)--v5 = *(_BYTE *)(a3 + v6 + 4);
    }
    while ( a2 );
  }
  else if ( (a4 & 0x4A) == 0x40 )
  {
    v5 = a1;
    do
    {
      v11 = a2 & 7;
      a2 >>= 3;
      *(_BYTE *)--v5 = *(_BYTE *)(a3 + v11 + 4);
    }
    while ( a2 );
  }
  else
  {
    v8 = 4;
    if ( (a4 & 0x4000) != 0 )
      v8 = 20;
    v5 = a1;
    v9 = a3 + v8;
    do
    {
      v10 = a2 & 0xF;
      a2 >>= 4;
      *(_BYTE *)--v5 = *(_BYTE *)(v9 + v10);
    }
    while ( a2 );
  }
  return (unsigned int)(a1 - v5);
}

