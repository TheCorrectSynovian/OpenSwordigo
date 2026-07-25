/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E8E24
 * Mangled: _Z16lua_getmetatableP9lua_Statei
 * Demangled: lua_getmetatable(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001F92F0  lua_getmetatable(lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 59
 *   insn=0x00000000004E8E24 string=0x00000000004E8E28 "+"
 *   insn=0x00000000004E8E28 string=0x00000000004E8E2C "\t A"
 *   insn=0x00000000004E8E30 string=0x00000000004E8E38 ""
 *   insn=0x00000000004E8E38 string=0x00000000004E8E3C "A"
 *   insn=0x00000000004E8E40 string=0x00000000004E8E44 "1"
 *   insn=0x00000000004E8E44 string=0x00000000004E8E48 "*"
 *   insn=0x00000000004E8E48 string=0x00000000004E8EF0 "\t\t@"
 *   insn=0x00000000004E8E4C string=0x00000000004E8E50 "?"
 *   insn=0x00000000004E8E54 string=0x00000000004E8E58 "@"
 *   insn=0x00000000004E8E54 string=0x00000000004E8E64 "("
 *   insn=0x00000000004E8E58 string=0x00000000004E8E5C ""
 *   insn=0x00000000004E8E5C string=0x00000000004E8E60 "$"
 *   insn=0x00000000004E8E64 string=0x00000000004E8E68 "?"
 *   insn=0x00000000004E8E68 string=0x00000000004E8E6C "@"
 *   insn=0x00000000004E8E6C string=0x00000000004E8E70 ""
 *   insn=0x00000000004E8E6C string=0x00000000004E8E94 ""
 *   insn=0x00000000004E8E70 string=0x00000000004E8E74 "?"
 *   insn=0x00000000004E8E74 string=0x00000000004E8E78 " "
 *   insn=0x00000000004E8E78 string=0x00000000004E8E9C ""
 *   insn=0x00000000004E8E7C string=0x00000000004E8E80 "?"
 *   insn=0x00000000004E8E84 string=0x00000000004E8E88 ""
 *   insn=0x00000000004E8E84 string=0x00000000004E8EC0 ""
 *   insn=0x00000000004E8E88 string=0x00000000004E8E8C ""
 *   insn=0x00000000004E8EA0 string=0x00000000004E8EA4 ""
 *   insn=0x00000000004E8EA4 string=0x00000000004E8EA8 ""
 *   insn=0x00000000004E8EA8 string=0x00000000004E8EAC "\t@"
 *   insn=0x00000000004E8EAC string=0x00000000004E8EB0 " "
 *   insn=0x00000000004E8EB0 string=0x00000000004E8EB4 "\n"
 *   insn=0x00000000004E8EB4 string=0x00000000004E8EB8 "\tD"
 *   insn=0x00000000004E8EB8 string=0x00000000004E8EBC ""
 *   insn=0x00000000004E8EC0 string=0x00000000004E8EC4 ")"
 *   insn=0x00000000004E8EC4 string=0x00000000004E8EC8 ")"
 *   insn=0x00000000004E8ECC string=0x00000000004E8ED0 ""
 *   insn=0x00000000004E8ED0 string=0x00000000004E8ED4 "k!/"
 *   insn=0x00000000004E8ED4 string=0x00000000004E8ED8 ""
 *   insn=0x00000000004E8ED8 string=0x00000000004E8EDC "\n-@9"
 *   insn=0x00000000004E8EDC string=0x00000000004E8EE0 ""
 *   insn=0x00000000004E8EE0 string=0x00000000004E8EE4 "a"
 *   insn=0x00000000004E8EE4 string=0x00000000004E8EE8 "?"
 *   insn=0x00000000004E8EE8 string=0x00000000004E8EEC "h"
 *   insn=0x00000000004E8EF0 string=0x00000000004E8EF4 "?"
 *   insn=0x00000000004E8EF4 string=0x00000000004E8EF8 "`"
 *   insn=0x00000000004E8EF8 string=0x00000000004E8EFC "?"
 *   insn=0x00000000004E8EF8 string=0x00000000004E8F04 ""
 *   insn=0x00000000004E8F00 string=0x00000000004E8F38 ""
 *   insn=0x00000000004E8F04 string=0x00000000004E8F08 "A"
 *   insn=0x00000000004E8F08 string=0x00000000004E8F0C ""
 *   insn=0x00000000004E8F0C string=0x00000000004E8F10 ""
 *   insn=0x00000000004E8F10 string=0x00000000004E8F14 "\t@"
 *   insn=0x00000000004E8F18 string=0x00000000004E8F1C "("
 *   insn=0x00000000004E8F1C string=0x00000000004E8F20 "*\t"
 *   insn=0x00000000004E8F20 string=0x00000000004E8F24 "@"
 *   insn=0x00000000004E8F24 string=0x00000000004E8F28 "A"
 *   insn=0x00000000004E8F28 string=0x00000000004E8F2C ""
 *   insn=0x00000000004E8F38 string=0x00000000004E8F3C ")}@"
 *   insn=0x00000000004E8F3C string=0x00000000004E8F40 "\t"
 *   insn=0x00000000004E8F40 string=0x00000000004E8F44 ""
 *   insn=0x00000000004E8F44 string=0x00000000004E8F48 ""
 *   insn=0x00000000004E8F48 string=0x00000000004E8F4C "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_getmetatable(__int64 a1, int a2)
{
  __int64 *v2; // x8
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x8
  int v6; // w10
  int v7; // w9
  __int64 v8; // x8
  __int64 v9; // x9

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
          v3 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          v2 = (__int64 *)(a1 + 136);
          *(_DWORD *)(a1 + 144) = 5;
          *(_QWORD *)(a1 + 136) = v3;
          break;
        case -10000:
          v2 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
          break;
        default:
          v4 = -10002LL - a2;
          v5 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
          v6 = *(unsigned __int8 *)(v5 + 11);
          v2 = (__int64 *)(v5 + 16 * v4 + 24);
          if ( (int)v4 > v6 )
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
  v7 = *((_DWORD *)v2 + 2);
  if ( v7 == 7 || v7 == 5 )
  {
    v8 = *(_QWORD *)(*v2 + 16);
    if ( v8 )
    {
LABEL_18:
      v9 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)v9 = v8;
      *(_DWORD *)(v9 + 8) = 5;
      *(_QWORD *)(a1 + 16) += 16LL;
      return 1;
    }
  }
  else
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v7 + 224);
    if ( v8 )
      goto LABEL_18;
  }
  return 0;
}

