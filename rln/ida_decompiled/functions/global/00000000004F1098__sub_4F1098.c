/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F1098
 * Mangled: sub_4F1098
 * Demangled: sub_4F1098
 *
 * Callers: 5
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F14B4  sub_4F14B4
 *   0x00000000004F17E0  sub_4F17E0
 *   0x00000000004F1CF4  sub_4F1CF4
 *   0x00000000004F244C  sub_4F244C
 *
 * Callees: 4
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x000000000050072C  sub_50072C
 *   0x0000000000500968  sub_500968
 *   0x0000000000500A74  sub_500A74
 *
 * Referenced strings: 10
 *   insn=0x00000000004F10AC string=0x00000000004F10B0 "h"
 *   insn=0x00000000004F10C0 string=0x00000000004F10DC "w"
 *   insn=0x00000000004F10D4 string=0x00000000004F10D8 "g>"
 *   insn=0x00000000004F10DC string=0x00000000004F10E0 "u"
 *   insn=0x00000000004F10F4 string=0x00000000004F10F8 "A"
 *   insn=0x00000000004F10F8 string=0x0000000000599FFC "'%s' expected"
 *   insn=0x00000000004F1108 string=0x00000000004F110C ""
 *   insn=0x00000000004F1118 string=0x00000000004F111C "A"
 *   insn=0x00000000004F111C string=0x000000000059A172 "'%s' expected (to close '%s' at line %d)"
 *   insn=0x00000000004F1120 string=0x00000000004F1124 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F1098(__int64 a1, int a2, int a3, int a4)
{
  int v8; // w23
  _QWORD *v9; // x21
  const char *v10; // x0
  bool v11; // zf
  const char *v12; // x23
  const char *v13; // x0
  __int64 v14; // x0

  if ( *(_DWORD *)(a1 + 16) != a2 )
  {
    v8 = *(_DWORD *)(a1 + 4);
    v9 = *(_QWORD **)(a1 + 56);
    v10 = (const char *)sub_50072C(a1, a2);
    v11 = v8 == a4;
    v12 = v10;
    if ( v11 )
    {
      v14 = sub_4EF3D4(v9, "'%s' expected", v10);
    }
    else
    {
      v13 = (const char *)sub_50072C(a1, a3);
      v14 = sub_4EF3D4(v9, "'%s' expected (to close '%s' at line %d)", v12, v13, a4);
    }
    sub_500968(a1, v14);
  }
  return sub_500A74(a1);
}

