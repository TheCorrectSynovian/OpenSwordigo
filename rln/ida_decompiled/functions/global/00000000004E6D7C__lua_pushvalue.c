/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6D7C
 * Mangled: _Z13lua_pushvalueP9lua_Statei
 * Demangled: lua_pushvalue(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001FCF60  lua_pushvalue(lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 47
 *   insn=0x00000000004E6D7C string=0x00000000004E6D80 "+"
 *   insn=0x00000000004E6D80 string=0x00000000004E6D84 "\t A"
 *   insn=0x00000000004E6D88 string=0x00000000004E6D90 ""
 *   insn=0x00000000004E6D90 string=0x00000000004E6D94 "A"
 *   insn=0x00000000004E6D98 string=0x00000000004E6D9C "1"
 *   insn=0x00000000004E6D9C string=0x00000000004E6DA0 "*"
 *   insn=0x00000000004E6DA0 string=0x00000000004E6E48 "\t@"
 *   insn=0x00000000004E6DA4 string=0x00000000004E6DA8 "?"
 *   insn=0x00000000004E6DAC string=0x00000000004E6DB0 "@"
 *   insn=0x00000000004E6DAC string=0x00000000004E6DBC "("
 *   insn=0x00000000004E6DB0 string=0x00000000004E6DB4 ""
 *   insn=0x00000000004E6DB4 string=0x00000000004E6DB8 "$"
 *   insn=0x00000000004E6DBC string=0x00000000004E6DC0 "?"
 *   insn=0x00000000004E6DC0 string=0x00000000004E6DC4 "@"
 *   insn=0x00000000004E6DC4 string=0x00000000004E6DC8 ""
 *   insn=0x00000000004E6DC4 string=0x00000000004E6DEC ""
 *   insn=0x00000000004E6DC8 string=0x00000000004E6DCC "?"
 *   insn=0x00000000004E6DCC string=0x00000000004E6DD0 " "
 *   insn=0x00000000004E6DD0 string=0x00000000004E6DF4 ""
 *   insn=0x00000000004E6DD4 string=0x00000000004E6DD8 "?"
 *   insn=0x00000000004E6DDC string=0x00000000004E6DE0 ""
 *   insn=0x00000000004E6DDC string=0x00000000004E6E18 ""
 *   insn=0x00000000004E6DE0 string=0x00000000004E6DE4 ""
 *   insn=0x00000000004E6DF8 string=0x00000000004E6DFC ""
 *   insn=0x00000000004E6DFC string=0x00000000004E6E00 ""
 *   insn=0x00000000004E6E00 string=0x00000000004E6E04 "\t@"
 *   insn=0x00000000004E6E04 string=0x00000000004E6E08 " "
 *   insn=0x00000000004E6E08 string=0x00000000004E6E0C "\n"
 *   insn=0x00000000004E6E0C string=0x00000000004E6E10 "\tD"
 *   insn=0x00000000004E6E10 string=0x00000000004E6E14 ""
 *   insn=0x00000000004E6E18 string=0x00000000004E6E1C ")"
 *   insn=0x00000000004E6E1C string=0x00000000004E6E20 ")"
 *   insn=0x00000000004E6E24 string=0x00000000004E6E28 ""
 *   insn=0x00000000004E6E28 string=0x00000000004E6E2C "k!/"
 *   insn=0x00000000004E6E2C string=0x00000000004E6E30 ""
 *   insn=0x00000000004E6E30 string=0x00000000004E6E34 "\n-@9"
 *   insn=0x00000000004E6E34 string=0x00000000004E6E38 ""
 *   insn=0x00000000004E6E38 string=0x00000000004E6E3C "a"
 *   insn=0x00000000004E6E3C string=0x00000000004E6E40 "?"
 *   insn=0x00000000004E6E40 string=0x00000000004E6E44 "h"
 *   insn=0x00000000004E6E48 string=0x00000000004E6E4C "\n"
 *   insn=0x00000000004E6E4C string=0x00000000004E6E50 "*"
 *   insn=0x00000000004E6E50 string=0x00000000004E6E54 "\t@"
 *   insn=0x00000000004E6E54 string=0x00000000004E6E58 "(\t"
 *   insn=0x00000000004E6E58 string=0x00000000004E6E5C "@"
 *   insn=0x00000000004E6E5C string=0x00000000004E6E60 "A"
 *   insn=0x00000000004E6E60 string=0x00000000004E6E64 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_pushvalue(__int64 result, int a2)
{
  __int64 *v2; // x8
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x8
  int v6; // w10
  __int64 v7; // x9

  if ( a2 < 1 )
  {
    if ( a2 < -9999 )
    {
      switch ( a2 )
      {
        case -10002:
          v2 = (__int64 *)(result + 120);
          break;
        case -10001:
          v3 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(result + 40) + 8LL) + 24LL);
          v2 = (__int64 *)(result + 136);
          *(_DWORD *)(result + 144) = 5;
          *(_QWORD *)(result + 136) = v3;
          break;
        case -10000:
          v2 = (__int64 *)(*(_QWORD *)(result + 32) + 160LL);
          break;
        default:
          v4 = -10002LL - a2;
          v5 = **(_QWORD **)(*(_QWORD *)(result + 40) + 8LL);
          v6 = *(unsigned __int8 *)(v5 + 11);
          v2 = (__int64 *)(v5 + 16 * v4 + 24);
          if ( (int)v4 > v6 )
            v2 = &qword_599BC8;
          break;
      }
    }
    else
    {
      v2 = (__int64 *)(*(_QWORD *)(result + 16) + 16LL * a2);
    }
  }
  else
  {
    v2 = (__int64 *)(*(_QWORD *)(result + 24) + 16LL * a2 - 16);
    if ( (unsigned __int64)v2 >= *(_QWORD *)(result + 16) )
      v2 = &qword_599BC8;
  }
  v7 = *(_QWORD *)(result + 16);
  *(_QWORD *)v7 = *v2;
  *(_DWORD *)(v7 + 8) = *((_DWORD *)v2 + 2);
  *(_QWORD *)(result + 16) += 16LL;
  return result;
}

