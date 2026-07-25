/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E9D5C
 * Mangled: _Z8lua_nextP9lua_Statei
 * Demangled: lua_next(lua_State *,int)
 *
 * Callers: 1
 *   0x0000000000203830  lua_next(lua_State *,int)
 *
 * Callees: 1
 *   0x00000000004F3794  sub_4F3794
 *
 * Referenced strings: 48
 *   insn=0x00000000004E9D64 string=0x00000000004E9D68 "?"
 *   insn=0x00000000004E9D6C string=0x00000000004E9D70 "+"
 *   insn=0x00000000004E9D70 string=0x00000000004E9D74 "i"A"
 *   insn=0x00000000004E9D78 string=0x00000000004E9D80 ""
 *   insn=0x00000000004E9D80 string=0x00000000004E9D84 "A"
 *   insn=0x00000000004E9D88 string=0x00000000004E9D8C "1"
 *   insn=0x00000000004E9D8C string=0x00000000004E9D90 "*"
 *   insn=0x00000000004E9D90 string=0x00000000004E9E38 "i\n@"
 *   insn=0x00000000004E9D94 string=0x00000000004E9D98 "?"
 *   insn=0x00000000004E9D9C string=0x00000000004E9DA0 "h\n@"
 *   insn=0x00000000004E9D9C string=0x00000000004E9DAC "("
 *   insn=0x00000000004E9DA0 string=0x00000000004E9DA4 ""
 *   insn=0x00000000004E9DA4 string=0x00000000004E9DA8 "$"
 *   insn=0x00000000004E9DAC string=0x00000000004E9DB0 "?"
 *   insn=0x00000000004E9DB0 string=0x00000000004E9DB4 "@"
 *   insn=0x00000000004E9DB4 string=0x00000000004E9DB8 ""
 *   insn=0x00000000004E9DB4 string=0x00000000004E9DDC "h"
 *   insn=0x00000000004E9DB8 string=0x00000000004E9DBC "?"
 *   insn=0x00000000004E9DBC string=0x00000000004E9DC0 " "
 *   insn=0x00000000004E9DC0 string=0x00000000004E9DE4 "h"
 *   insn=0x00000000004E9DC4 string=0x00000000004E9DC8 "?"
 *   insn=0x00000000004E9DCC string=0x00000000004E9DD0 "h"
 *   insn=0x00000000004E9DCC string=0x00000000004E9E08 "h"
 *   insn=0x00000000004E9DD0 string=0x00000000004E9DD4 ""
 *   insn=0x00000000004E9DE8 string=0x00000000004E9DEC ""
 *   insn=0x00000000004E9DEC string=0x00000000004E9DF0 ""
 *   insn=0x00000000004E9DF0 string=0x00000000004E9DF4 "\t@"
 *   insn=0x00000000004E9DF4 string=0x00000000004E9DF8 "h""
 *   insn=0x00000000004E9DF8 string=0x00000000004E9DFC "j"
 *   insn=0x00000000004E9DFC string=0x00000000004E9E00 "iF"
 *   insn=0x00000000004E9E00 string=0x00000000004E9E04 ""
 *   insn=0x00000000004E9E08 string=0x00000000004E9E0C ")"
 *   insn=0x00000000004E9E0C string=0x00000000004E9E10 ")"
 *   insn=0x00000000004E9E14 string=0x00000000004E9E18 ""
 *   insn=0x00000000004E9E18 string=0x00000000004E9E1C "k!/"
 *   insn=0x00000000004E9E1C string=0x00000000004E9E20 ""
 *   insn=0x00000000004E9E20 string=0x00000000004E9E24 "\n-@9"
 *   insn=0x00000000004E9E24 string=0x00000000004E9E28 ""
 *   insn=0x00000000004E9E28 string=0x00000000004E9E2C "a"
 *   insn=0x00000000004E9E2C string=0x00000000004E9E30 "?"
 *   insn=0x00000000004E9E30 string=0x00000000004E9E34 "h"
 *   insn=0x00000000004E9E40 string=0x00000000004E9E44 ""A"
 *   insn=0x00000000004E9E44 string=0x00000000004E9E48 "S&"
 *   insn=0x00000000004E9E48 string=0x00000000004E9E4C "h\n@"
 *   insn=0x00000000004E9E50 string=0x00000000004E9E54 "\tA"
 *   insn=0x00000000004E9E54 string=0x00000000004E9E58 "A"
 *   insn=0x00000000004E9E58 string=0x00000000004E9E5C "("
 *   insn=0x00000000004E9E5C string=0x00000000004E9E60 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_next(__int64 a1, int a2)
{
  __int64 *v3; // x8
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x8
  int v7; // w10
  __int64 result; // x0
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x8

  if ( a2 < 1 )
  {
    if ( a2 < -9999 )
    {
      switch ( a2 )
      {
        case -10002:
          v3 = (__int64 *)(a1 + 120);
          break;
        case -10001:
          v4 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          v3 = (__int64 *)(a1 + 136);
          *(_DWORD *)(a1 + 144) = 5;
          *(_QWORD *)(a1 + 136) = v4;
          break;
        case -10000:
          v3 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
          break;
        default:
          v5 = -10002LL - a2;
          v6 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
          v7 = *(unsigned __int8 *)(v6 + 11);
          v3 = (__int64 *)(v6 + 16 * v5 + 24);
          if ( (int)v5 > v7 )
            v3 = &qword_599BC8;
          break;
      }
    }
    else
    {
      v3 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
    }
  }
  else
  {
    v3 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
    if ( (unsigned __int64)v3 >= *(_QWORD *)(a1 + 16) )
      v3 = &qword_599BC8;
  }
  result = sub_4F3794(a1, *v3, *(_QWORD *)(a1 + 16) - 16LL);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = v9 - 16;
  v11 = v9 + 16;
  if ( !(_DWORD)result )
    v11 = v10;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}

