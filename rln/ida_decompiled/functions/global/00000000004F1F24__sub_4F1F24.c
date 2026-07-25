/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F1F24
 * Mangled: sub_4F1F24
 * Demangled: sub_4F1F24
 *
 * Callers: 1
 *   0x00000000004F14B4  sub_4F14B4
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004F1154  sub_4F1154
 *   0x00000000004F2128  sub_4F2128
 *   0x00000000004FDB84  sub_4FDB84
 *   0x00000000004FE100  sub_4FE100
 *   0x00000000004FEB5C  sub_4FEB5C
 *   0x000000000050072C  sub_50072C
 *   0x00000000005007A0  sub_5007A0
 *   0x0000000000500968  sub_500968
 *   0x0000000000500A74  sub_500A74
 *
 * Referenced strings: 39
 *   insn=0x00000000004F1F3C string=0x00000000004F1F40 "W"
 *   insn=0x00000000004F1F58 string=0x00000000004F1F5C "x>@"
 *   insn=0x00000000004F1F60 string=0x00000000004F1F64 "a"
 *   insn=0x00000000004F1F68 string=0x00000000004F1F6C "("
 *   insn=0x00000000004F1F7C string=0x00000000004F1F80 "h"
 *   insn=0x00000000004F1F80 string=0x00000000004F1F84 "`"
 *   insn=0x00000000004F1F8C string=0x00000000004F1F90 "A"
 *   insn=0x00000000004F1F8C string=0x00000000004F1FC4 "A"
 *   insn=0x00000000004F1F90 string=0x00000000004F1F94 "D"
 *   insn=0x00000000004F1F90 string=0x000000000059A08F "function at line %d has more than %d %s"
 *   insn=0x00000000004F1F94 string=0x000000000059A056 "items in a constructor"
 *   insn=0x00000000004F1F98 string=0x00000000004F1F9C "!<"
 *   insn=0x00000000004F1FA4 string=0x00000000004F1FA8 ""
 *   insn=0x00000000004F1FA8 string=0x00000000004F1FAC ""
 *   insn=0x00000000004F1FB4 string=0x00000000004F1FB8 "\"
 *   insn=0x00000000004F1FBC string=0x00000000004F1FC0 "&"
 *   insn=0x00000000004F1FC0 string=0x00000000004F2058 "("
 *   insn=0x00000000004F1FC4 string=0x00000000004F1FC8 "C"
 *   insn=0x00000000004F1FC4 string=0x000000000059A06D "main function has more than %d %s"
 *   insn=0x00000000004F1FCC string=0x00000000004F1FD0 "!"
 *   insn=0x00000000004F1FD0 string=0x00000000004F1FD4 "cX"
 *   insn=0x00000000004F1FE0 string=0x00000000004F1FE4 "`"
 *   insn=0x00000000004F2008 string=0x00000000004F200C "!"
 *   insn=0x00000000004F200C string=0x0000000000599FFC "'%s' expected"
 *   insn=0x00000000004F2010 string=0x00000000004F2014 "!"
 *   insn=0x00000000004F2024 string=0x00000000004F2028 "P:"
 *   insn=0x00000000004F203C string=0x00000000004F2040 "00"
 *   insn=0x00000000004F2058 string=0x00000000004F205C ""
 *   insn=0x00000000004F205C string=0x00000000004F2060 "("
 *   insn=0x00000000004F207C string=0x00000000004F2080 "!"
 *   insn=0x00000000004F2084 string=0x00000000004F2088 "!"
 *   insn=0x00000000004F2098 string=0x00000000004F209C "3:"
 *   insn=0x00000000004F20A0 string=0x00000000004F20A4 "t:"
 *   insn=0x00000000004F20C0 string=0x00000000004F20C4 "$"
 *   insn=0x00000000004F20DC string=0x00000000004F20E0 "!"
 *   insn=0x00000000004F20F0 string=0x00000000004F20F4 "x>"
 *   insn=0x00000000004F20F0 string=0x00000000004FDB84 ""
 *   insn=0x00000000004F2104 string=0x00000000004F2124 "k"
 *   insn=0x00000000004F2124 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F1F24(__int64 a1, __int64 a2)
{
  __int64 v4; // x19
  int v5; // w24
  _DWORD *v6; // x25
  _QWORD *v7; // x0
  int v8; // w2
  __int64 v9; // x0
  __int64 v10; // x22
  int v11; // w0
  _QWORD *v12; // x22
  const char *v13; // x0
  __int64 v14; // x0
  __int64 result; // x0
  _BYTE v16[24]; // [xsp+8h] [xbp-78h] BYREF
  _DWORD v17[4]; // [xsp+20h] [xbp-60h] BYREF
  __int64 v18; // [xsp+30h] [xbp-50h]
  __int64 v19; // [xsp+38h] [xbp-48h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_DWORD *)(v4 + 60);
  if ( *(_DWORD *)(a1 + 16) == 285 )
  {
    v6 = (_DWORD *)(a2 + 32);
    if ( *(int *)(a2 + 32) > 2147483645 )
    {
      v7 = *(_QWORD **)(v4 + 32);
      v8 = *(_DWORD *)(*(_QWORD *)v4 + 96LL);
      if ( v8 )
        v9 = sub_4EF3D4(v7, "function at line %d has more than %d %s", v8, 2147483645, "items in a constructor");
      else
        v9 = sub_4EF3D4(v7, "main function has more than %d %s", 2147483645, "items in a constructor");
      sub_5007A0(*(_QWORD *)(v4 + 24), v9, 0);
    }
    v10 = *(_QWORD *)(a1 + 24);
    sub_500A74(a1);
    v11 = sub_4FE100(*(_QWORD *)(a1 + 48), v10);
    v18 = -1;
    v17[0] = 4;
    v17[2] = v11;
  }
  else
  {
    sub_4F2128(a1, v17);
    v6 = (_DWORD *)(a2 + 32);
  }
  ++*v6;
  if ( *(_DWORD *)(a1 + 16) != 61 )
  {
    v12 = *(_QWORD **)(a1 + 56);
    v13 = (const char *)sub_50072C(a1, 61);
    v14 = sub_4EF3D4(v12, "'%s' expected", v13);
    sub_500968(a1, v14);
  }
  sub_500A74(a1);
  sub_4FEB5C(v4, v17);
  sub_4F1154(a1, (__int64)v16, 0);
  sub_4FEB5C(v4, v16);
  result = sub_4FDB84(v4, 9);
  *(_DWORD *)(v4 + 60) = v5;
  return result;
}

