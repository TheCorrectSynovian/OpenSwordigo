/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004F1CF4
 * Mangled: sub_4F1CF4
 * Demangled: sub_4F1CF4
 *
 * Callers: 3
 *   0x00000000004EFACC  sub_4EFACC
 *   0x00000000004F1154  sub_4F1154
 *   0x00000000004F2CCC  sub_4F2CCC
 *
 * Callees: 17
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004EF3D4  sub_4EF3D4
 *   0x00000000004F1098  sub_4F1098
 *   0x00000000004F1154  sub_4F1154
 *   0x00000000004F2128  sub_4F2128
 *   0x00000000004F2368  sub_4F2368
 *   0x00000000004F244C  sub_4F244C
 *   0x00000000004F2614  sub_4F2614
 *   0x00000000004FE100  sub_4FE100
 *   0x00000000004FE488  sub_4FE488
 *   0x00000000004FE5C0  sub_4FE5C0
 *   0x00000000004FEA48  sub_4FEA48
 *   0x00000000004FEF18  sub_4FEF18
 *   0x00000000004FF394  sub_4FF394
 *   0x000000000050072C  sub_50072C
 *   0x0000000000500968  sub_500968
 *   0x0000000000500A74  sub_500A74
 *
 * Referenced strings: 34
 *   insn=0x00000000004F1D10 string=0x00000000004F1D14 "X"
 *   insn=0x00000000004F1D14 string=0x00000000004F1D18 ""
 *   insn=0x00000000004F1D24 string=0x00000000004F1D28 "h"
 *   insn=0x00000000004F1D28 string=0x00000000004F1D2C "t"
 *   insn=0x00000000004F1D30 string=0x00000000004F1D34 "`"
 *   insn=0x00000000004F1D34 string=0x00000000004F1D80 "v"
 *   insn=0x00000000004F1D38 string=0x00000000004F1D3C "!"
 *   insn=0x00000000004F1D3C string=0x00000000004F1D40 "v"
 *   insn=0x00000000004F1D3C string=0x00000000004F1DC0 "A"
 *   insn=0x00000000004F1D44 string=0x00000000004F1D48 "K;"
 *   insn=0x00000000004F1D58 string=0x00000000004F1D5C "!"
 *   insn=0x00000000004F1D6C string=0x00000000004F1D70 "`"
 *   insn=0x00000000004F1D7C string=0x00000000004F1DD0 "V"
 *   insn=0x00000000004F1D84 string=0x00000000004F1D88 ";;"
 *   insn=0x00000000004F1D88 string=0x00000000004F1D8C "w"
 *   insn=0x00000000004F1DA4 string=0x00000000004F1DA8 "A"
 *   insn=0x00000000004F1DC0 string=0x000000000059A10A "unexpected symbol"
 *   insn=0x00000000004F1DD0 string=0x0000000000599FFC "'%s' expected"
 *   insn=0x00000000004F1DE0 string=0x00000000004F1DF0 "h"
 *   insn=0x00000000004F1DFC string=0x00000000004F1E00 " "
 *   insn=0x00000000004F1E04 string=0x00000000004F1E08 "`"
 *   insn=0x00000000004F1E10 string=0x00000000004F1EF0 ""
 *   insn=0x00000000004F1E18 string=0x00000000004F1E1C "h"
 *   insn=0x00000000004F1E24 string=0x00000000004F1E28 "w"
 *   insn=0x00000000004F1E24 string=0x00000000004F1E54 "w"
 *   insn=0x00000000004F1E30 string=0x00000000004F1E34 ">:"
 *   insn=0x00000000004F1E40 string=0x00000000004F1E44 "d"
 *   insn=0x00000000004F1E5C string=0x00000000004F1E60 "`"
 *   insn=0x00000000004F1E80 string=0x00000000004F1E84 "%4"
 *   insn=0x00000000004F1E94 string=0x00000000004F1E98 "`"
 *   insn=0x00000000004F1EB8 string=0x00000000004F1EBC "+"
 *   insn=0x00000000004F1EE4 string=0x00000000004F1EE8 "+5"
 *   insn=0x00000000004F1EF8 string=0x00000000004F1EFC "!"
 *   insn=0x00000000004F1F20 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4F1CF4(__int64 a1, __int64 a2)
{
  int v4; // w8
  __int64 v5; // x20
  int v6; // w22
  __int64 result; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  int v10; // w8
  _QWORD *v11; // x23
  const char *v12; // x0
  __int64 v13; // x0
  __int64 v14; // x23
  _DWORD v15[4]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v16; // [xsp+10h] [xbp-50h]
  __int64 v17; // [xsp+18h] [xbp-48h]

  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 48);
  if ( v4 == 285 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    sub_500A74(a1);
    v9 = *(_QWORD *)(a1 + 48);
    result = sub_4F2614(v9, v8, a2, 1);
    if ( (_DWORD)result == 8 )
    {
      result = sub_4FE100(v9, v8);
      *(_DWORD *)(a2 + 8) = result;
    }
  }
  else
  {
    if ( v4 != 40 )
      sub_500968(a1, "unexpected symbol");
    v6 = *(_DWORD *)(a1 + 4);
    sub_500A74(a1);
    sub_4F1154(a1, a2, 0);
    sub_4F1098(a1, 41, 40, v6);
    result = sub_4FE488(*(_QWORD *)(a1 + 48), a2);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(a1 + 16);
      if ( v10 > 90 )
        break;
      switch ( v10 )
      {
        case '(':
          goto LABEL_19;
        case '.':
          result = sub_4F2368(a1, a2);
          break;
        case ':':
          sub_500A74(a1);
          if ( *(_DWORD *)(a1 + 16) != 285 )
          {
            v11 = *(_QWORD **)(a1 + 56);
            v12 = (const char *)sub_50072C(a1, 285);
            v13 = sub_4EF3D4(v11, "'%s' expected", v12);
            sub_500968(a1, v13);
          }
          v14 = *(_QWORD *)(a1 + 24);
          sub_500A74(a1);
          v15[2] = sub_4FE100(*(_QWORD *)(a1 + 48), v14);
          v16 = -1;
          v15[0] = 4;
          sub_4FEF18(v5, a2, v15);
LABEL_8:
          result = sub_4F244C(a1, a2);
          break;
        default:
          return result;
      }
    }
    if ( v10 != 91 )
      break;
    sub_4FEA48(v5, a2);
    sub_4F2128(a1, v15);
    result = sub_4FF394(v5, a2, v15);
  }
  if ( v10 == 123 || v10 == 286 )
  {
LABEL_19:
    sub_4FE5C0(v5, a2);
    goto LABEL_8;
  }
  return result;
}

