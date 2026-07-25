/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E7BC0
 * Mangled: _Z13lua_tobooleanP9lua_Statei
 * Demangled: lua_toboolean(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001F4010  lua_toboolean(lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 44
 *   insn=0x00000000004E7BC0 string=0x00000000004E7BC4 ""
 *   insn=0x00000000004E7BC4 string=0x00000000004E7BC8 "\t A"
 *   insn=0x00000000004E7BCC string=0x00000000004E7BD4 ""
 *   insn=0x00000000004E7BD4 string=0x00000000004E7BD8 "A"
 *   insn=0x00000000004E7BDC string=0x00000000004E7BE0 "1"
 *   insn=0x00000000004E7BE0 string=0x00000000004E7BE4 "\t\t@"
 *   insn=0x00000000004E7BE8 string=0x00000000004E7BEC "?"
 *   insn=0x00000000004E7BF0 string=0x00000000004E7BF4 ""
 *   insn=0x00000000004E7C04 string=0x00000000004E7C08 "?"
 *   insn=0x00000000004E7C08 string=0x00000000004E7C0C "+"
 *   insn=0x00000000004E7C0C string=0x00000000004E7C10 "@"
 *   insn=0x00000000004E7C0C string=0x00000000004E7C30 "("
 *   insn=0x00000000004E7C10 string=0x00000000004E7C14 ""
 *   insn=0x00000000004E7C14 string=0x00000000004E7C18 "\t\t@"
 *   insn=0x00000000004E7C30 string=0x00000000004E7C34 "?"
 *   insn=0x00000000004E7C38 string=0x00000000004E7C3C ""
 *   insn=0x00000000004E7C38 string=0x00000000004E7C68 ""
 *   insn=0x00000000004E7C3C string=0x00000000004E7C40 "?"
 *   insn=0x00000000004E7C44 string=0x00000000004E7C78 ""
 *   insn=0x00000000004E7C48 string=0x00000000004E7C4C "?"
 *   insn=0x00000000004E7C50 string=0x00000000004E7C54 ""
 *   insn=0x00000000004E7C50 string=0x00000000004E7CA4 ""
 *   insn=0x00000000004E7C54 string=0x00000000004E7C58 ""
 *   insn=0x00000000004E7C58 string=0x00000000004E7C5C "\t\t@"
 *   insn=0x00000000004E7C5C string=0x00000000004E7C60 "i"
 *   insn=0x00000000004E7C68 string=0x00000000004E7C6C "\t\t@"
 *   insn=0x00000000004E7C7C string=0x00000000004E7C80 ""
 *   insn=0x00000000004E7C80 string=0x00000000004E7C84 ""
 *   insn=0x00000000004E7C84 string=0x00000000004E7C88 "\t@"
 *   insn=0x00000000004E7C88 string=0x00000000004E7C8C " "
 *   insn=0x00000000004E7C8C string=0x00000000004E7C90 "\n"
 *   insn=0x00000000004E7C90 string=0x00000000004E7C94 "\tD"
 *   insn=0x00000000004E7C94 string=0x00000000004E7C98 "\t\t@"
 *   insn=0x00000000004E7CA4 string=0x00000000004E7CA8 ")"
 *   insn=0x00000000004E7CA8 string=0x00000000004E7CAC ")"
 *   insn=0x00000000004E7CB0 string=0x00000000004E7CB4 ""
 *   insn=0x00000000004E7CB4 string=0x00000000004E7CB8 "k!/"
 *   insn=0x00000000004E7CB8 string=0x00000000004E7CBC ""
 *   insn=0x00000000004E7CBC string=0x00000000004E7CC0 "\n-@9"
 *   insn=0x00000000004E7CC0 string=0x00000000004E7CC4 ""
 *   insn=0x00000000004E7CC4 string=0x00000000004E7CC8 "a"
 *   insn=0x00000000004E7CC8 string=0x00000000004E7CCC "?"
 *   insn=0x00000000004E7CCC string=0x00000000004E7CD0 "h"
 *   insn=0x00000000004E7CD0 string=0x00000000004E7CD4 "\t\t@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall lua_toboolean(__int64 a1, int a2)
{
  __int64 *v2; // x8
  int v3; // w9
  __int64 v5; // x9
  __int64 v6; // x9
  __int64 v7; // x8
  int v8; // w10

  if ( a2 >= 1 )
  {
    v2 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
    if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 16) )
      v2 = &qword_599BC8;
    v3 = *((_DWORD *)v2 + 2);
    if ( v3 )
      return v3 != 1 || *(_DWORD *)v2 != 0;
    return 0;
  }
  if ( a2 < -9999 )
  {
    switch ( a2 )
    {
      case -10002:
        v2 = (__int64 *)(a1 + 120);
        v3 = *(_DWORD *)(a1 + 128);
        if ( !v3 )
          return 0;
        break;
      case -10001:
        v5 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
        v2 = (__int64 *)(a1 + 136);
        *(_DWORD *)(a1 + 144) = 5;
        *(_QWORD *)(a1 + 136) = v5;
        v3 = *(_DWORD *)(a1 + 144);
        if ( !v3 )
          return 0;
        break;
      case -10000:
        v2 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
        v3 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 168LL);
        if ( !v3 )
          return 0;
        break;
      default:
        v6 = -10002LL - a2;
        v7 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
        v8 = *(unsigned __int8 *)(v7 + 11);
        v2 = (__int64 *)(v7 + 16 * v6 + 24);
        if ( (int)v6 > v8 )
          v2 = &qword_599BC8;
        v3 = *((_DWORD *)v2 + 2);
        if ( v3 )
          break;
        return 0;
    }
  }
  else
  {
    v2 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
    v3 = *((_DWORD *)v2 + 2);
    if ( !v3 )
      return 0;
  }
  return v3 != 1 || *(_DWORD *)v2 != 0;
}

