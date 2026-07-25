/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055FF8C
 * Mangled: sub_55FF8C
 * Demangled: sub_55FF8C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000051F654  sub_51F654
 *   0x000000000055FA7C  sub_55FA7C
 *
 * Referenced strings: 25
 *   insn=0x000000000055FFB0 string=0x000000000055FFB4 "`"
 *   insn=0x000000000055FFB8 string=0x000000000055FFBC "`"
 *   insn=0x000000000055FFBC string=0x0000000000560048 "c\n@"
 *   insn=0x000000000055FFCC string=0x000000000055FFD0 ")"
 *   insn=0x000000000055FFD0 string=0x000000000055FFD4 "(<H"
 *   insn=0x000000000055FFD4 string=0x000000000055FFD8 "'\P"
 *   insn=0x000000000055FFD8 string=0x000000000055FFDC "&|X"
 *   insn=0x000000000055FFDC string=0x000000000055FFE0 "%"
 *   insn=0x000000000055FFE0 string=0x000000000055FFE4 "$"
 *   insn=0x000000000055FFE4 string=0x000000000055FFE8 "#"
 *   insn=0x000000000055FFE8 string=0x000000000055FFEC """
 *   insn=0x000000000055FFF0 string=0x000000000055FFF4 "!"
 *   insn=0x0000000000560008 string=0x000000000056000C "a"
 *   insn=0x0000000000560010 string=0x0000000000560014 "A"
 *   insn=0x0000000000560030 string=0x0000000000560034 ""
 *   insn=0x0000000000560034 string=0x0000000000560038 ""
 *   insn=0x0000000000560038 string=0x000000000056003C "\t"
 *   insn=0x0000000000560048 string=0x000000000056004C "b"
 *   insn=0x000000000056004C string=0x0000000000560050 "`Z@"
 *   insn=0x0000000000560054 string=0x0000000000560058 "b^@"
 *   insn=0x0000000000560058 string=0x000000000056005C "cN@"
 *   insn=0x0000000000560060 string=0x0000000000560064 "c"
 *   insn=0x0000000000560064 string=0x0000000000560068 "`Z"
 *   insn=0x0000000000560068 string=0x000000000056006C "`\n"
 *   insn=0x000000000056006C string=0x0000000000560070 "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__off_t __fastcall sub_55FF8C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  __int64 v10; // x0
  __int64 v11; // x2

  if ( !sub_51F654((_QWORD *)(a1 + 104)) )
    return -1;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v10 = *(_QWORD *)(a1 + 176);
    v11 = *(_QWORD *)(a1 + 184);
    if ( *(_QWORD *)(a1 + 16) != *(_QWORD *)(a1 + 8) )
      ++v10;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 152);
    *(_QWORD *)(a1 + 176) = v10;
    *(_QWORD *)(a1 + 16) = v10;
    *(_QWORD *)(a1 + 24) = v11;
    *(_BYTE *)(a1 + 192) = 0;
  }
  return sub_55FA7C(a1, a2, 0, a3, v5, v6, v7, v8);
}

