/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6E6C
 * Mangled: _Z8lua_typeP9lua_Statei
 * Demangled: lua_type(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001FB5A0  lua_type(lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 37
 *   insn=0x00000000004E6E6C string=0x00000000004E6E70 ""
 *   insn=0x00000000004E6E70 string=0x00000000004E6E74 "\t A"
 *   insn=0x00000000004E6E74 string=0x00000000004E6E78 ""
 *   insn=0x00000000004E6E78 string=0x00000000004E6E7C "A"
 *   insn=0x00000000004E6E90 string=0x00000000004E6E94 "?"
 *   insn=0x00000000004E6E98 string=0x00000000004E6E9C "@"
 *   insn=0x00000000004E6E98 string=0x00000000004E6EA8 "("
 *   insn=0x00000000004E6E9C string=0x00000000004E6EA0 ""
 *   insn=0x00000000004E6EA0 string=0x00000000004E6EA4 "$"
 *   insn=0x00000000004E6EA8 string=0x00000000004E6EAC "?"
 *   insn=0x00000000004E6EAC string=0x00000000004E6EB0 "@"
 *   insn=0x00000000004E6EB0 string=0x00000000004E6EB4 ""
 *   insn=0x00000000004E6EB0 string=0x00000000004E6ED8 ""
 *   insn=0x00000000004E6EB4 string=0x00000000004E6EB8 "?"
 *   insn=0x00000000004E6EB8 string=0x00000000004E6EBC " "
 *   insn=0x00000000004E6EBC string=0x00000000004E6EE0 ""
 *   insn=0x00000000004E6EC0 string=0x00000000004E6EC4 "?"
 *   insn=0x00000000004E6EC8 string=0x00000000004E6ECC ""
 *   insn=0x00000000004E6EC8 string=0x00000000004E6F04 ""
 *   insn=0x00000000004E6ECC string=0x00000000004E6ED0 ""
 *   insn=0x00000000004E6EE4 string=0x00000000004E6EE8 ""
 *   insn=0x00000000004E6EE8 string=0x00000000004E6EEC ""
 *   insn=0x00000000004E6EEC string=0x00000000004E6EF0 "\t@"
 *   insn=0x00000000004E6EF0 string=0x00000000004E6EF4 " "
 *   insn=0x00000000004E6EF4 string=0x00000000004E6EF8 "\n"
 *   insn=0x00000000004E6EF8 string=0x00000000004E6EFC "\tD"
 *   insn=0x00000000004E6EFC string=0x00000000004E6F00 ""
 *   insn=0x00000000004E6F04 string=0x00000000004E6F08 ")"
 *   insn=0x00000000004E6F08 string=0x00000000004E6F0C ")"
 *   insn=0x00000000004E6F0C string=0x00000000004E6F10 ""
 *   insn=0x00000000004E6F10 string=0x00000000004E6F14 ""
 *   insn=0x00000000004E6F14 string=0x00000000004E6F18 "\n-@9?"
 *   insn=0x00000000004E6F18 string=0x00000000004E6F1C "?"
 *   insn=0x00000000004E6F1C string=0x00000000004E6F20 "m"
 *   insn=0x00000000004E6F20 string=0x00000000004E6F2C ""
 *   insn=0x00000000004E6F2C string=0x00000000004E6F30 "a"
 *   insn=0x00000000004E6F3C string=0x00000000004E6F40 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_type(__int64 a1, int a2)
{
  unsigned __int64 v2; // x8
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x8

  if ( a2 < 1 )
  {
    if ( a2 < -9999 )
    {
      switch ( a2 )
      {
        case -10002:
          v2 = a1 + 120;
          break;
        case -10001:
          v4 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          v2 = a1 + 136;
          *(_DWORD *)(a1 + 144) = 5;
          *(_QWORD *)(a1 + 136) = v4;
          break;
        case -10000:
          v2 = *(_QWORD *)(a1 + 32) + 160LL;
          break;
        default:
          v5 = -10002LL - a2;
          v6 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
          if ( (int)v5 > *(unsigned __int8 *)(v6 + 11) )
            return 0xFFFFFFFFLL;
          v2 = v6 + 16 * v5 + 24;
          break;
      }
    }
    else
    {
      v2 = *(_QWORD *)(a1 + 16) + 16LL * a2;
    }
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 24) + 16LL * a2 - 16;
    if ( v2 >= *(_QWORD *)(a1 + 16) )
      return 0xFFFFFFFFLL;
  }
  if ( (__int64 *)v2 == &qword_599BC8 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(v2 + 8);
}

