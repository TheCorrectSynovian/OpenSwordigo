/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E69B4
 * Mangled: _Z10lua_removeP9lua_Statei
 * Demangled: lua_remove(lua_State *,int)
 *
 * Callers: 1
 *   0x0000000000203DC0  lua_remove(lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 48
 *   insn=0x00000000004E69B4 string=0x00000000004E69B8 "+"
 *   insn=0x00000000004E69B8 string=0x00000000004E69BC "\t A"
 *   insn=0x00000000004E69C0 string=0x00000000004E69C8 ""
 *   insn=0x00000000004E69C8 string=0x00000000004E69CC "A"
 *   insn=0x00000000004E69D0 string=0x00000000004E69D4 "1"
 *   insn=0x00000000004E69D4 string=0x00000000004E69D8 "/"
 *   insn=0x00000000004E69D8 string=0x00000000004E6A94 "\t@"
 *   insn=0x00000000004E69DC string=0x00000000004E69E0 "?"
 *   insn=0x00000000004E69E4 string=0x00000000004E69E8 "@"
 *   insn=0x00000000004E69E4 string=0x00000000004E69F4 "("
 *   insn=0x00000000004E69E8 string=0x00000000004E69EC ""
 *   insn=0x00000000004E69EC string=0x00000000004E69F0 ")"
 *   insn=0x00000000004E69F4 string=0x00000000004E69F8 "?"
 *   insn=0x00000000004E69F8 string=0x00000000004E69FC "@"
 *   insn=0x00000000004E69FC string=0x00000000004E6A00 ""
 *   insn=0x00000000004E69FC string=0x00000000004E6A24 ""
 *   insn=0x00000000004E6A00 string=0x00000000004E6A04 "?"
 *   insn=0x00000000004E6A04 string=0x00000000004E6A08 " "
 *   insn=0x00000000004E6A08 string=0x00000000004E6A2C ""
 *   insn=0x00000000004E6A0C string=0x00000000004E6A10 "?"
 *   insn=0x00000000004E6A14 string=0x00000000004E6A18 ""
 *   insn=0x00000000004E6A14 string=0x00000000004E6A50 ""
 *   insn=0x00000000004E6A18 string=0x00000000004E6A1C ""
 *   insn=0x00000000004E6A24 string=0x00000000004E6A28 ""
 *   insn=0x00000000004E6A30 string=0x00000000004E6A34 ""
 *   insn=0x00000000004E6A34 string=0x00000000004E6A38 ""
 *   insn=0x00000000004E6A38 string=0x00000000004E6A3C "\t@"
 *   insn=0x00000000004E6A3C string=0x00000000004E6A40 " "
 *   insn=0x00000000004E6A40 string=0x00000000004E6A44 "\n"
 *   insn=0x00000000004E6A44 string=0x00000000004E6A48 "\tD"
 *   insn=0x00000000004E6A50 string=0x00000000004E6A54 ")"
 *   insn=0x00000000004E6A54 string=0x00000000004E6A58 ")"
 *   insn=0x00000000004E6A5C string=0x00000000004E6A60 ""
 *   insn=0x00000000004E6A60 string=0x00000000004E6A64 "k!/"
 *   insn=0x00000000004E6A64 string=0x00000000004E6A68 ""
 *   insn=0x00000000004E6A68 string=0x00000000004E6A6C "\n-@9"
 *   insn=0x00000000004E6A6C string=0x00000000004E6A70 ""
 *   insn=0x00000000004E6A70 string=0x00000000004E6A74 "a"
 *   insn=0x00000000004E6A74 string=0x00000000004E6A78 "?"
 *   insn=0x00000000004E6A78 string=0x00000000004E6A7C "h"
 *   insn=0x00000000004E6A84 string=0x00000000004E6A88 "\n\t@"
 *   insn=0x00000000004E6A88 string=0x00000000004E6A8C "\t"
 *   insn=0x00000000004E6A8C string=0x00000000004E6A90 "\n"
 *   insn=0x00000000004E6A94 string=0x00000000004E6A98 "A"
 *   insn=0x00000000004E6A9C string=0x00000000004E6AA0 "#"
 *   insn=0x00000000004E6AA0 string=0x00000000004E6AA4 "(A"
 *   insn=0x00000000004E6AA0 string=0x00000000004E6A84 "\t"
 *   insn=0x00000000004E6AA4 string=0x00000000004E6AA8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_remove(__int64 result, int a2)
{
  __int64 *v2; // x8
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x8
  int v6; // w10
  int v7; // w10
  unsigned __int64 v8; // x9

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
  while ( 1 )
  {
    v8 = *(_QWORD *)(result + 16);
    v2 += 2;
    if ( (unsigned __int64)v2 >= v8 )
      break;
    v7 = *((_DWORD *)v2 + 2);
    *(v2 - 2) = *v2;
    *((_DWORD *)v2 - 2) = v7;
  }
  *(_QWORD *)(result + 16) = v8 - 16;
  return result;
}

