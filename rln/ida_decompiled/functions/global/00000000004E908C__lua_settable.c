/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E908C
 * Mangled: _Z12lua_settableP9lua_Statei
 * Demangled: lua_settable(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001FEF60  lua_settable(lua_State *,int)
 *
 * Callees: 1
 *   0x00000000004F61E8  sub_4F61E8
 *
 * Referenced strings: 41
 *   insn=0x00000000004E9094 string=0x00000000004E9098 "?"
 *   insn=0x00000000004E909C string=0x00000000004E90A0 "+"
 *   insn=0x00000000004E90A0 string=0x00000000004E90A4 "i"A"
 *   insn=0x00000000004E90A8 string=0x00000000004E90B0 ""
 *   insn=0x00000000004E90B0 string=0x00000000004E90B4 "A"
 *   insn=0x00000000004E90BC string=0x00000000004E90C0 "*"
 *   insn=0x00000000004E90C0 string=0x00000000004E9168 "h\n@"
 *   insn=0x00000000004E90C4 string=0x00000000004E90C8 "?"
 *   insn=0x00000000004E90CC string=0x00000000004E90D0 "h\n@"
 *   insn=0x00000000004E90CC string=0x00000000004E90DC "("
 *   insn=0x00000000004E90D4 string=0x00000000004E90D8 "$"
 *   insn=0x00000000004E90DC string=0x00000000004E90E0 "?"
 *   insn=0x00000000004E90E0 string=0x00000000004E90E4 "@"
 *   insn=0x00000000004E90E4 string=0x00000000004E90E8 ""
 *   insn=0x00000000004E90E4 string=0x00000000004E910C "a"
 *   insn=0x00000000004E90E8 string=0x00000000004E90EC "?"
 *   insn=0x00000000004E90EC string=0x00000000004E90F0 " "
 *   insn=0x00000000004E90F0 string=0x00000000004E9114 "h"
 *   insn=0x00000000004E90F4 string=0x00000000004E90F8 "?"
 *   insn=0x00000000004E90FC string=0x00000000004E9100 "h"
 *   insn=0x00000000004E90FC string=0x00000000004E9138 "h"
 *   insn=0x00000000004E9118 string=0x00000000004E911C "a""
 *   insn=0x00000000004E911C string=0x00000000004E9120 ""
 *   insn=0x00000000004E9120 string=0x00000000004E9124 ""
 *   insn=0x00000000004E9124 string=0x00000000004E9128 "@"
 *   insn=0x00000000004E9128 string=0x00000000004E912C "i"
 *   insn=0x00000000004E912C string=0x00000000004E9130 "hF"
 *   insn=0x00000000004E9130 string=0x00000000004E9134 ""
 *   insn=0x00000000004E9138 string=0x00000000004E913C ")"
 *   insn=0x00000000004E913C string=0x00000000004E9140 ")"
 *   insn=0x00000000004E9144 string=0x00000000004E9148 ""
 *   insn=0x00000000004E9148 string=0x00000000004E914C "k!/"
 *   insn=0x00000000004E914C string=0x00000000004E9150 ""
 *   insn=0x00000000004E9150 string=0x00000000004E9154 "\n-@9"
 *   insn=0x00000000004E9154 string=0x00000000004E9158 ""
 *   insn=0x00000000004E9158 string=0x00000000004E915C "a"
 *   insn=0x00000000004E915C string=0x00000000004E9160 "?"
 *   insn=0x00000000004E9160 string=0x00000000004E9164 "a"
 *   insn=0x00000000004E9178 string=0x00000000004E917C "h\n@"
 *   insn=0x00000000004E917C string=0x00000000004E9180 ""
 *   insn=0x00000000004E9180 string=0x00000000004E9184 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_settable(__int64 a1, int a2)
{
  __int64 *v3; // x1
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x8
  int v7; // w10
  __int64 v8; // x8
  __int64 result; // x0

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
          v3 = (__int64 *)(a1 + 136);
          v4 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
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
          v8 = v6 + 16 * v5 + 24;
          if ( (int)v5 <= v7 )
            v3 = (__int64 *)v8;
          else
            v3 = &qword_599BC8;
          break;
      }
    }
    else
    {
      v3 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
    }
  }
  else if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16) >= *(_QWORD *)(a1 + 16) )
  {
    v3 = &qword_599BC8;
  }
  else
  {
    v3 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
  }
  result = sub_4F61E8(a1, v3, *(_QWORD *)(a1 + 16) - 32LL, *(_QWORD *)(a1 + 16) - 16LL);
  *(_QWORD *)(a1 + 16) -= 32LL;
  return result;
}

