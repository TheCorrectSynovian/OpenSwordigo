/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054BA28
 * Mangled: sub_54BA28
 * Demangled: sub_54BA28
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000053B7DC  sub_53B7DC
 *
 * Referenced strings: 17
 *   insn=0x000000000054BA2C string=0x000000000054BA30 "!"
 *   insn=0x000000000054BA34 string=0x000000000054BA38 "d"
 *   insn=0x000000000054BA38 string=0x000000000054BA3C "h"
 *   insn=0x000000000054BA3C string=0x000000000054BA40 "g@"
 *   insn=0x000000000054BA40 string=0x000000000054BA44 "f"
 *   insn=0x000000000054BA44 string=0x000000000054BA48 "e"
 *   insn=0x000000000054BA48 string=0x000000000054BA4C "D"
 *   insn=0x000000000054BA4C string=0x000000000054BA50 "d"
 *   insn=0x000000000054BA50 string=0x000000000054BA58 "D"
 *   insn=0x000000000054BA58 string=0x000000000054BA5C "c"
 *   insn=0x000000000054BA5C string=0x000000000054BA60 "C"
 *   insn=0x000000000054BA60 string=0x000000000054BA64 "H"
 *   insn=0x000000000054BA64 string=0x000000000054BA68 "G"
 *   insn=0x000000000054BA68 string=0x000000000054BA6C "F"
 *   insn=0x000000000054BA6C string=0x000000000054BA70 "E"
 *   insn=0x000000000054BA70 string=0x000000000054BA74 "Z"
 *   insn=0x000000000054BA74 string=0x000000000053B7DC "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54BA28(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x7
  __int64 v4; // x6
  __int64 v5; // x5

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)a1 = off_6B7790;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 32) = v5;
  return sub_53B7DC((unsigned int **)(a1 + 56), (unsigned int **)(a2 + 56));
}

