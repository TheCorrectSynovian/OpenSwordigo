/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ED9A0
 * Mangled: sub_4ED9A0
 * Demangled: sub_4ED9A0
 *
 * Callers: 2
 *   0x00000000004ED96C  sub_4ED96C
 *   0x00000000004EDD78  sub_4EDD78
 *
 * Callees: 2
 *   0x00000000004EC63C  sub_4EC63C
 *   0x00000000004F4E8C  sub_4F4E8C
 *
 * Referenced strings: 21
 *   insn=0x00000000004ED9B4 string=0x00000000004ED9B8 "t"
 *   insn=0x00000000004ED9CC string=0x00000000004ED9D0 "\t"
 *   insn=0x00000000004ED9DC string=0x00000000004ED9E0 ""
 *   insn=0x00000000004ED9F8 string=0x00000000004ED9FC ""
 *   insn=0x00000000004ED9FC string=0x00000000004EDA00 "("
 *   insn=0x00000000004EDA08 string=0x00000000004EDA0C "(@9"
 *   insn=0x00000000004EDA10 string=0x00000000004EDA14 "h"
 *   insn=0x00000000004EDA1C string=0x00000000004EDA20 ""
 *   insn=0x00000000004EDA24 string=0x00000000004EDA28 "v"
 *   insn=0x00000000004EDA38 string=0x00000000004EDA3C ""
 *   insn=0x00000000004EDA40 string=0x00000000004EDA44 "h\n@"
 *   insn=0x00000000004EDA44 string=0x00000000004EDA48 "\t"
 *   insn=0x00000000004EDA48 string=0x00000000004EDA4C "\t"
 *   insn=0x00000000004EDA4C string=0x00000000004EDA50 "\t@"
 *   insn=0x00000000004EDA54 string=0x00000000004EDA58 "\t\t"
 *   insn=0x00000000004EDA58 string=0x00000000004EDA5C "h\n@"
 *   insn=0x00000000004EDA64 string=0x00000000004EDA68 "\t"
 *   insn=0x00000000004EDA68 string=0x00000000004EDA6C "a\n@"
 *   insn=0x00000000004EDA6C string=0x00000000004EDA70 "("
 *   insn=0x00000000004EDA70 string=0x00000000004EDA74 "h\n"
 *   insn=0x00000000004EDA78 string=0x00000000004EDA7C "v"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4ED9A0(__int64 a1)
{
  __int64 v2; // x20
  _QWORD *v3; // x8
  _QWORD *v4; // x21
  __int64 result; // x0
  char v6; // w22
  __int64 v7; // x23
  __int64 v8; // x8
  __int64 v9; // x8
  unsigned __int64 v10; // x1

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD **)(v2 + 80);
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 == v3 )
    *(_QWORD *)(v2 + 80) = 0;
  else
    *v3 = *v4;
  *v4 = **(_QWORD **)(v2 + 176);
  **(_QWORD **)(v2 + 176) = v4;
  result = v4[2];
  *((_BYTE *)v4 + 9) = *((_BYTE *)v4 + 9) & 0xF8 | *(_BYTE *)(v2 + 32) & 3;
  if ( result && (*(_BYTE *)(result + 10) & 4) == 0 )
  {
    result = sub_4F4E8C();
    if ( result )
    {
      v6 = *(_BYTE *)(a1 + 101);
      v7 = *(_QWORD *)(v2 + 112);
      *(_BYTE *)(a1 + 101) = 0;
      *(_QWORD *)(v2 + 112) = 2LL * *(_QWORD *)(v2 + 120);
      v8 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)v8 = *(_QWORD *)result;
      *(_DWORD *)(v8 + 8) = *(_DWORD *)(result + 8);
      v9 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(v9 + 16) = v4;
      *(_DWORD *)(v9 + 24) = 7;
      v10 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = v10 + 32;
      result = sub_4EC63C(a1, v10, 0);
      *(_BYTE *)(a1 + 101) = v6;
      *(_QWORD *)(v2 + 112) = v7;
    }
  }
  return result;
}

