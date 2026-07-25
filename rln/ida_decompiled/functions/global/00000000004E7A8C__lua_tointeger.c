/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E7A8C
 * Mangled: _Z13lua_tointegerP9lua_Statei
 * Demangled: lua_tointeger(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001FB1C0  lua_tointeger(lua_State *,int)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000004F5EF0  sub_4F5EF0
 *
 * Referenced strings: 45
 *   insn=0x00000000004E7A98 string=0x00000000004E7A9C "S"
 *   insn=0x00000000004E7A9C string=0x00000000004E7AA0 "h"
 *   insn=0x00000000004E7AA0 string=0x00000000004E7AA4 "?"
 *   insn=0x00000000004E7AA8 string=0x00000000004E7AAC "+"
 *   insn=0x00000000004E7AAC string=0x00000000004E7AB0 "\t A"
 *   insn=0x00000000004E7AB4 string=0x00000000004E7ABC ""
 *   insn=0x00000000004E7ABC string=0x00000000004E7AC0 "A"
 *   insn=0x00000000004E7AC4 string=0x00000000004E7AC8 "1"
 *   insn=0x00000000004E7ACC string=0x00000000004E7AE4 "\t\t@"
 *   insn=0x00000000004E7AD0 string=0x00000000004E7AD4 "?"
 *   insn=0x00000000004E7AD8 string=0x00000000004E7ADC "@"
 *   insn=0x00000000004E7AD8 string=0x00000000004E7B2C "("
 *   insn=0x00000000004E7ADC string=0x00000000004E7AE0 ""
 *   insn=0x00000000004E7AE4 string=0x00000000004E7AE8 "?"
 *   insn=0x00000000004E7AFC string=0x00000000004E7B00 "h"
 *   insn=0x00000000004E7B00 string=0x00000000004E7B0C "h"
 *   insn=0x00000000004E7B14 string=0x00000000004E7B18 "!"
 *   insn=0x00000000004E7B2C string=0x00000000004E7B30 "?"
 *   insn=0x00000000004E7B30 string=0x00000000004E7B34 "@"
 *   insn=0x00000000004E7B34 string=0x00000000004E7B38 ""
 *   insn=0x00000000004E7B34 string=0x00000000004E7B5C ""
 *   insn=0x00000000004E7B38 string=0x00000000004E7B3C "?"
 *   insn=0x00000000004E7B3C string=0x00000000004E7B40 " "
 *   insn=0x00000000004E7B40 string=0x00000000004E7B64 ""
 *   insn=0x00000000004E7B44 string=0x00000000004E7B48 "?"
 *   insn=0x00000000004E7B4C string=0x00000000004E7B50 ""
 *   insn=0x00000000004E7B4C string=0x00000000004E7B88 ""
 *   insn=0x00000000004E7B50 string=0x00000000004E7B54 ""
 *   insn=0x00000000004E7B68 string=0x00000000004E7B6C ""
 *   insn=0x00000000004E7B6C string=0x00000000004E7B70 ""
 *   insn=0x00000000004E7B70 string=0x00000000004E7B74 "\t@"
 *   insn=0x00000000004E7B74 string=0x00000000004E7B78 " "
 *   insn=0x00000000004E7B78 string=0x00000000004E7B7C "\n"
 *   insn=0x00000000004E7B7C string=0x00000000004E7B80 "\tD"
 *   insn=0x00000000004E7B88 string=0x00000000004E7B8C ")"
 *   insn=0x00000000004E7B8C string=0x00000000004E7B90 ")"
 *   insn=0x00000000004E7B94 string=0x00000000004E7B98 ""
 *   insn=0x00000000004E7B98 string=0x00000000004E7B9C "k!/"
 *   insn=0x00000000004E7B9C string=0x00000000004E7BA0 ""
 *   insn=0x00000000004E7BA0 string=0x00000000004E7BA4 "\n-@9"
 *   insn=0x00000000004E7BA4 string=0x00000000004E7BA8 ""
 *   insn=0x00000000004E7BA8 string=0x00000000004E7BAC "a"
 *   insn=0x00000000004E7BAC string=0x00000000004E7BB0 "?"
 *   insn=0x00000000004E7BB0 string=0x00000000004E7BB4 "h"
 *   insn=0x00000000004E7BBC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_tointeger(__int64 a1, int a2)
{
  __int64 *v2; // x8
  __int64 result; // x0
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
    return (__int64)*(double *)v2;
  result = sub_4F5EF0(v2, v8);
  v2 = (__int64 *)result;
  if ( result )
    return (__int64)*(double *)v2;
  return result;
}

