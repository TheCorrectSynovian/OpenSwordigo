/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F2128
 * Mangled: sub_4F2128
 * Demangled: sub_4F2128
 *
 * Callers: 2
 *   0x00000000004F1CF4  sub_4F1CF4
 *   0x00000000004F1F24  sub_4F1F24
 *
 * Callees: 6
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004F1154  sub_4F1154
 *   0x00000000004FEACC  sub_4FEACC
 *   0x000000000050072C  sub_50072C
 *   0x0000000000500968  sub_500968
 *   0x0000000000500A74  sub_500A74
 *
 * Referenced strings: 10
 *   insn=0x00000000004F2138 string=0x00000000004F213C "N:"
 *   insn=0x00000000004F214C string=0x00000000004F2150 "`"
 *   insn=0x00000000004F2154 string=0x00000000004F2158 "]2"
 *   insn=0x00000000004F2158 string=0x00000000004F215C "h"
 *   insn=0x00000000004F2164 string=0x00000000004F2168 "t"
 *   insn=0x00000000004F2170 string=0x00000000004F2174 "n9"
 *   insn=0x00000000004F2174 string=0x00000000004F2178 "!"
 *   insn=0x00000000004F2178 string=0x0000000000599FFC "'%s' expected"
 *   insn=0x00000000004F217C string=0x00000000004F2180 "!"
 *   insn=0x00000000004F21A0 string=0x00000000004F21A4 "4:"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F2128(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x20
  const char *v5; // x0
  __int64 v6; // x0

  sub_500A74(a1);
  sub_4F1154(a1, a2, 0);
  sub_4FEACC(*(_QWORD *)(a1 + 48), a2);
  if ( *(_DWORD *)(a1 + 16) != 93 )
  {
    v4 = *(_QWORD **)(a1 + 56);
    v5 = (const char *)sub_50072C(a1, 93);
    v6 = sub_4EF3D4(v4, "'%s' expected", v5);
    sub_500968(a1, v6);
  }
  return sub_500A74(a1);
}

