/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E7954
 * Mangled: _Z12lua_tonumberP9lua_Statei
 * Demangled: lua_tonumber(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001F5030  lua_tonumber(lua_State *,int)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004F5EF0  sub_4F5EF0
 *
 * Referenced strings: 45
 *   insn=0x00000000004E7960 string=0x00000000004E7964 "S"
 *   insn=0x00000000004E7964 string=0x00000000004E7968 "h"
 *   insn=0x00000000004E7968 string=0x00000000004E796C "?"
 *   insn=0x00000000004E7970 string=0x00000000004E7974 "+"
 *   insn=0x00000000004E7974 string=0x00000000004E7978 "\t A"
 *   insn=0x00000000004E797C string=0x00000000004E7984 ""
 *   insn=0x00000000004E7984 string=0x00000000004E7988 "A"
 *   insn=0x00000000004E798C string=0x00000000004E7990 "1"
 *   insn=0x00000000004E7994 string=0x00000000004E79AC "\t\t@"
 *   insn=0x00000000004E7998 string=0x00000000004E799C "?"
 *   insn=0x00000000004E79A0 string=0x00000000004E79A4 "@"
 *   insn=0x00000000004E79A0 string=0x00000000004E79F0 "("
 *   insn=0x00000000004E79A4 string=0x00000000004E79A8 ""
 *   insn=0x00000000004E79AC string=0x00000000004E79B0 "?"
 *   insn=0x00000000004E79BC string=0x00000000004E79C0 "L9"
 *   insn=0x00000000004E79CC string=0x00000000004E79D0 "h"
 *   insn=0x00000000004E79D8 string=0x00000000004E79DC "a"
 *   insn=0x00000000004E79F0 string=0x00000000004E79F4 "?"
 *   insn=0x00000000004E79F8 string=0x00000000004E79FC ""
 *   insn=0x00000000004E79F8 string=0x00000000004E7A28 ""
 *   insn=0x00000000004E79FC string=0x00000000004E7A00 "?"
 *   insn=0x00000000004E7A00 string=0x00000000004E7A04 "`"
 *   insn=0x00000000004E7A04 string=0x00000000004E7A30 ""
 *   insn=0x00000000004E7A08 string=0x00000000004E7A0C "?"
 *   insn=0x00000000004E7A0C string=0x00000000004E7A10 "!"
 *   insn=0x00000000004E7A10 string=0x00000000004E7A14 ""
 *   insn=0x00000000004E7A10 string=0x00000000004E7A54 ""
 *   insn=0x00000000004E7A14 string=0x00000000004E7A18 ""
 *   insn=0x00000000004E7A34 string=0x00000000004E7A38 ""
 *   insn=0x00000000004E7A38 string=0x00000000004E7A3C ""
 *   insn=0x00000000004E7A3C string=0x00000000004E7A40 "\t@"
 *   insn=0x00000000004E7A40 string=0x00000000004E7A44 " "
 *   insn=0x00000000004E7A44 string=0x00000000004E7A48 "\n"
 *   insn=0x00000000004E7A48 string=0x00000000004E7A4C "\tD"
 *   insn=0x00000000004E7A54 string=0x00000000004E7A58 ")"
 *   insn=0x00000000004E7A58 string=0x00000000004E7A5C ")"
 *   insn=0x00000000004E7A60 string=0x00000000004E7A64 ""
 *   insn=0x00000000004E7A64 string=0x00000000004E7A68 "k!/"
 *   insn=0x00000000004E7A68 string=0x00000000004E7A6C ""
 *   insn=0x00000000004E7A6C string=0x00000000004E7A70 "\n-@9"
 *   insn=0x00000000004E7A70 string=0x00000000004E7A74 ""
 *   insn=0x00000000004E7A74 string=0x00000000004E7A78 "a"
 *   insn=0x00000000004E7A78 string=0x00000000004E7A7C "?"
 *   insn=0x00000000004E7A7C string=0x00000000004E7A80 "h"
 *   insn=0x00000000004E7A88 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall lua_tonumber(__int64 a1, int a2)
{
  __int64 *v2; // x8
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x8
  int v7; // w10
  _BYTE v8[16]; // [xsp+8h] [xbp-28h] BYREF
  __int64 v9; // [xsp+18h] [xbp-18h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 < 1 )
  {
    if ( a2 < -9999 )
    {
      switch ( a2 )
      {
        case -10002:
          v2 = (__int64 *)(a1 + 120);
          break;
        case -10001:
          v4 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          v2 = (__int64 *)(a1 + 136);
          *(_DWORD *)(a1 + 144) = 5;
          *(_QWORD *)(a1 + 136) = v4;
          break;
        case -10000:
          v2 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
          break;
        default:
          v5 = -10002LL - a2;
          v6 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
          v7 = *(unsigned __int8 *)(v6 + 11);
          v2 = (__int64 *)(v6 + 16 * v5 + 24);
          if ( (int)v5 > v7 )
            v2 = &qword_599BC8;
          break;
      }
    }
    else
    {
      v2 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
    }
  }
  else
  {
    v2 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
    if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 16) )
      v2 = &qword_599BC8;
  }
  if ( *((_DWORD *)v2 + 2) == 3 )
    return *(double *)v2;
  v2 = (__int64 *)sub_4F5EF0(v2, v8);
  if ( v2 )
    return *(double *)v2;
  else
    return 0.0;
}

