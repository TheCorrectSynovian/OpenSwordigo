/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E815C
 * Mangled: _Z14lua_touserdataP9lua_Statei
 * Demangled: lua_touserdata(lua_State *,int)
 *
 * Callers: 1
 *   0x0000000000203D20  lua_touserdata(lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 43
 *   insn=0x00000000004E815C string=0x00000000004E8160 "+"
 *   insn=0x00000000004E8160 string=0x00000000004E8164 "\t A"
 *   insn=0x00000000004E8168 string=0x00000000004E8170 ""
 *   insn=0x00000000004E8170 string=0x00000000004E8174 "A"
 *   insn=0x00000000004E8178 string=0x00000000004E817C "1"
 *   insn=0x00000000004E817C string=0x00000000004E8180 "*"
 *   insn=0x00000000004E8180 string=0x00000000004E8228 "\t\t@"
 *   insn=0x00000000004E8184 string=0x00000000004E8188 "?"
 *   insn=0x00000000004E818C string=0x00000000004E8190 "@"
 *   insn=0x00000000004E818C string=0x00000000004E819C "("
 *   insn=0x00000000004E8190 string=0x00000000004E8194 ""
 *   insn=0x00000000004E8194 string=0x00000000004E8198 "$"
 *   insn=0x00000000004E819C string=0x00000000004E81A0 "?"
 *   insn=0x00000000004E81A0 string=0x00000000004E81A4 "@"
 *   insn=0x00000000004E81A4 string=0x00000000004E81A8 ""
 *   insn=0x00000000004E81A4 string=0x00000000004E81CC ""
 *   insn=0x00000000004E81A8 string=0x00000000004E81AC "?"
 *   insn=0x00000000004E81AC string=0x00000000004E81B0 " "
 *   insn=0x00000000004E81B0 string=0x00000000004E81D4 ""
 *   insn=0x00000000004E81B4 string=0x00000000004E81B8 "?"
 *   insn=0x00000000004E81BC string=0x00000000004E81C0 ""
 *   insn=0x00000000004E81BC string=0x00000000004E81F8 ""
 *   insn=0x00000000004E81C0 string=0x00000000004E81C4 ""
 *   insn=0x00000000004E81D8 string=0x00000000004E81DC ""
 *   insn=0x00000000004E81DC string=0x00000000004E81E0 ""
 *   insn=0x00000000004E81E0 string=0x00000000004E81E4 "\t@"
 *   insn=0x00000000004E81E4 string=0x00000000004E81E8 " "
 *   insn=0x00000000004E81E8 string=0x00000000004E81EC "\n"
 *   insn=0x00000000004E81EC string=0x00000000004E81F0 "\tD"
 *   insn=0x00000000004E81F0 string=0x00000000004E81F4 ""
 *   insn=0x00000000004E81F8 string=0x00000000004E81FC ")"
 *   insn=0x00000000004E81FC string=0x00000000004E8200 ")"
 *   insn=0x00000000004E8204 string=0x00000000004E8208 ""
 *   insn=0x00000000004E8208 string=0x00000000004E820C "k!/"
 *   insn=0x00000000004E820C string=0x00000000004E8210 ""
 *   insn=0x00000000004E8210 string=0x00000000004E8214 "\n-@9"
 *   insn=0x00000000004E8214 string=0x00000000004E8218 ""
 *   insn=0x00000000004E8218 string=0x00000000004E821C "a"
 *   insn=0x00000000004E821C string=0x00000000004E8220 "?"
 *   insn=0x00000000004E8220 string=0x00000000004E8224 "h"
 *   insn=0x00000000004E8228 string=0x00000000004E822C "?\t"
 *   insn=0x00000000004E8230 string=0x00000000004E8234 "?"
 *   insn=0x00000000004E8238 string=0x00000000004E823C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_touserdata(__int64 a1, int a2)
{
  __int64 *v2; // x8
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x8
  int v6; // w10
  int v7; // w9

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
  if ( v7 == 2 )
    return *v2;
  if ( v7 == 7 )
    return *v2 + 40;
  return 0;
}

