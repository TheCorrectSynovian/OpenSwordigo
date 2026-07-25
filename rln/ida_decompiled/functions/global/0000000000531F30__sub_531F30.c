/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000531F30
 * Mangled: sub_531F30
 * Demangled: sub_531F30
 *
 * Callers: 2
 *   0x0000000000531FD8  sub_531FD8
 *   0x000000000053228C  sub_53228C
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x0000000000531F34 string=0x0000000000531F74 "D\t"
 *   insn=0x0000000000531F40 string=0x0000000000531F44 "$|"
 *   insn=0x0000000000531F4C string=0x0000000000531F50 "c"
 *   insn=0x0000000000531F50 string=0x0000000000531F54 "#"
 *   insn=0x0000000000531F58 string=0x0000000000531F5C "C"
 *   insn=0x0000000000531F5C string=0x0000000000531F60 "c"
 *   insn=0x0000000000531F74 string=0x0000000000531F78 "d"
 *   insn=0x0000000000531F80 string=0x0000000000531F84 "c"
 *   insn=0x0000000000531F90 string=0x0000000000531F94 "d"
 *   insn=0x0000000000531F98 string=0x0000000000531F9C "B"
 *   insn=0x0000000000531F9C string=0x0000000000531FA0 "#"
 *   insn=0x0000000000531FA0 string=0x0000000000531FA4 "!"
 *   insn=0x0000000000531FA4 string=0x0000000000531FA8 "Chc8"
 *   insn=0x0000000000531FB8 string=0x0000000000531FBC "#@"
 *   insn=0x0000000000531FBC string=0x0000000000531FC0 "!"
 *   insn=0x0000000000531FC0 string=0x0000000000531FC4 "C"
 *   insn=0x0000000000531FC4 string=0x0000000000531FC8 "c"
 *   insn=0x0000000000531FCC string=0x0000000000531FD0 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_531F30(__int64 a1, unsigned __int64 a2, __int64 a3, __int16 a4, char a5)
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

