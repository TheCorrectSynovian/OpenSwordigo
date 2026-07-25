/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ED504
 * Mangled: sub_4ED504
 * Demangled: sub_4ED504
 *
 * Callers: 1
 *   0x00000000004F6B64  sub_4F6B64
 *
 * Callees: 1
 *   0x00000000004EED74  sub_4EED74
 *
 * Referenced strings: 16
 *   insn=0x00000000004ED528 string=0x00000000004ED52C "\t@"
 *   insn=0x00000000004ED52C string=0x00000000004ED530 "?"
 *   insn=0x00000000004ED538 string=0x00000000004ED5A8 "$@9"
 *   insn=0x00000000004ED540 string=0x00000000004ED544 "@"
 *   insn=0x00000000004ED554 string=0x00000000004ED558 ""
 *   insn=0x00000000004ED558 string=0x00000000004ED55C "H"
 *   insn=0x00000000004ED55C string=0x00000000004ED560 " "
 *   insn=0x00000000004ED56C string=0x00000000004ED570 ""
 *   insn=0x00000000004ED570 string=0x00000000004ED574 "$"
 *   insn=0x00000000004ED578 string=0x00000000004ED57C ""
 *   insn=0x00000000004ED580 string=0x00000000004ED584 "\t"
 *   insn=0x00000000004ED588 string=0x00000000004ED58C ""
 *   insn=0x00000000004ED5AC string=0x00000000004ED5B0 "\t"
 *   insn=0x00000000004ED5B0 string=0x00000000004ED5B4 "?"
 *   insn=0x00000000004ED5B8 string=0x00000000004ED5BC ""
 *   insn=0x00000000004ED5BC string=0x00000000004ED5C0 "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ED504(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // x0
  _QWORD *v4; // x21
  __int64 i; // x20
  unsigned __int64 v7; // x9
  char v8; // w8
  __int64 v9; // x8
  unsigned __int8 v10; // w8

  v4 = (_QWORD *)(a1 + 152);
  result = *(_QWORD *)(a1 + 152);
  for ( i = *(v4 - 15); result; result = *(_QWORD *)result )
  {
    v7 = *(_QWORD *)(result + 16);
    if ( v7 < a2 )
      break;
    if ( v7 == a2 )
    {
      v10 = *(_BYTE *)(result + 9);
      if ( (v10 & (unsigned __int8)~*(_BYTE *)(i + 32) & 3) != 0 )
        *(_BYTE *)(result + 9) = v10 ^ 3;
      return result;
    }
    v4 = (_QWORD *)result;
  }
  result = sub_4EED74(a1, 0, 0, 40);
  *(_BYTE *)(result + 8) = 10;
  v8 = *(_BYTE *)(i + 32);
  *(_QWORD *)(result + 16) = a2;
  *(_BYTE *)(result + 9) = v8 & 3;
  *(_QWORD *)result = *v4;
  *v4 = result;
  *(_QWORD *)(result + 24) = i + 184;
  v9 = *(_QWORD *)(i + 216);
  *(_QWORD *)(result + 32) = v9;
  *(_QWORD *)(v9 + 24) = result;
  *(_QWORD *)(i + 216) = result;
  return result;
}

