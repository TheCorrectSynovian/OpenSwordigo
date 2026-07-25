/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005625D4
 * Mangled: sub_5625D4
 * Demangled: sub_5625D4
 *
 * Callers: 3
 *   0x00000000005626E4  sub_5626E4
 *   0x00000000005628F0  sub_5628F0
 *   0x0000000000562AD0  sub_562AD0
 *
 * Callees: 2
 *   0x000000000051F8B4  sub_51F8B4
 *   0x0000000000562468  sub_562468
 *
 * Referenced strings: 18
 *   insn=0x0000000000562600 string=0x0000000000562658 "`"
 *   insn=0x0000000000562614 string=0x0000000000562618 ""
 *   insn=0x0000000000562618 string=0x000000000056261C ""
 *   insn=0x000000000056261C string=0x0000000000562620 "\t"
 *   insn=0x0000000000562628 string=0x000000000056262C "!"
 *   insn=0x0000000000562640 string=0x0000000000562644 "a"
 *   insn=0x0000000000562648 string=0x000000000056264C "A"
 *   insn=0x0000000000562664 string=0x0000000000562668 "aN@"
 *   insn=0x000000000056266C string=0x0000000000562670 "bj@"
 *   insn=0x0000000000562674 string=0x0000000000562678 "bv"
 *   insn=0x000000000056267C string=0x0000000000562680 "br"
 *   insn=0x0000000000562694 string=0x0000000000562698 "a"
 *   insn=0x000000000056269C string=0x00000000005626A0 "a\n"
 *   insn=0x00000000005626A4 string=0x00000000005626A8 "a"
 *   insn=0x00000000005626B4 string=0x00000000005626B8 "tB"
 *   insn=0x00000000005626D0 string=0x00000000005626D4 ""
 *   insn=0x00000000005626D4 string=0x00000000005626D8 ""
 *   insn=0x00000000005626D8 string=0x00000000005626DC "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__off_t __fastcall sub_5625D4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __off_t result; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  char v13; // [xsp+0h] [xbp+0h]
  int v15; // [xsp+28h] [xbp+28h]

  v15 = a3;
  if ( !(unsigned __int8)sub_562468(a1, a2, a3, a4, a5, a6, a7, a8, v13) )
    return -1;
  result = sub_51F8B4((FILE **)(a1 + 104), a2, v15);
  if ( result != -1 )
  {
    v11 = *(_QWORD *)(a1 + 152);
    v12 = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 232) = v12;
    *(_QWORD *)(a1 + 224) = v12;
    *(_BYTE *)(a1 + 169) = 0;
    *(_BYTE *)(a1 + 170) = 0;
    *(_QWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 16) = v11;
    *(_QWORD *)(a1 + 24) = v11;
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 132) = a4;
  }
  return result;
}

