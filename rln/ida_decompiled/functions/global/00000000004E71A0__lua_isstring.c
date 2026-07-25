/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E71A0
 * Mangled: _Z12lua_isstringP9lua_Statei
 * Demangled: lua_isstring(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001F7AA0  lua_isstring(lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 38
 *   insn=0x00000000004E71A0 string=0x00000000004E71A4 ""
 *   insn=0x00000000004E71A4 string=0x00000000004E71A8 "\t A"
 *   insn=0x00000000004E71A8 string=0x00000000004E71AC ""
 *   insn=0x00000000004E71AC string=0x00000000004E71B0 "A"
 *   insn=0x00000000004E71C4 string=0x00000000004E71C8 "?"
 *   insn=0x00000000004E71CC string=0x00000000004E71D0 "@"
 *   insn=0x00000000004E71CC string=0x00000000004E71DC "("
 *   insn=0x00000000004E71D0 string=0x00000000004E71D4 ""
 *   insn=0x00000000004E71D4 string=0x00000000004E71D8 "$"
 *   insn=0x00000000004E71DC string=0x00000000004E71E0 "?"
 *   insn=0x00000000004E71E0 string=0x00000000004E71E4 "@"
 *   insn=0x00000000004E71E4 string=0x00000000004E71E8 ""
 *   insn=0x00000000004E71E4 string=0x00000000004E720C ""
 *   insn=0x00000000004E71E8 string=0x00000000004E71EC "?"
 *   insn=0x00000000004E71EC string=0x00000000004E71F0 " "
 *   insn=0x00000000004E71F0 string=0x00000000004E7214 ""
 *   insn=0x00000000004E71F4 string=0x00000000004E71F8 "?"
 *   insn=0x00000000004E71FC string=0x00000000004E7200 ""
 *   insn=0x00000000004E71FC string=0x00000000004E7238 ""
 *   insn=0x00000000004E7200 string=0x00000000004E7204 ""
 *   insn=0x00000000004E7218 string=0x00000000004E721C ""
 *   insn=0x00000000004E721C string=0x00000000004E7220 ""
 *   insn=0x00000000004E7220 string=0x00000000004E7224 "\t@"
 *   insn=0x00000000004E7224 string=0x00000000004E7228 " "
 *   insn=0x00000000004E7228 string=0x00000000004E722C "\n"
 *   insn=0x00000000004E722C string=0x00000000004E7230 "\tD"
 *   insn=0x00000000004E7230 string=0x00000000004E7234 ""
 *   insn=0x00000000004E7238 string=0x00000000004E723C ")"
 *   insn=0x00000000004E723C string=0x00000000004E7240 ")"
 *   insn=0x00000000004E7240 string=0x00000000004E7244 ""
 *   insn=0x00000000004E7244 string=0x00000000004E7248 ""
 *   insn=0x00000000004E7248 string=0x00000000004E724C "\n-@9?"
 *   insn=0x00000000004E724C string=0x00000000004E7250 "?"
 *   insn=0x00000000004E7250 string=0x00000000004E7254 "m"
 *   insn=0x00000000004E7254 string=0x00000000004E7260 ""
 *   insn=0x00000000004E7260 string=0x00000000004E7264 "a"
 *   insn=0x00000000004E7274 string=0x00000000004E7278 "\t@"
 *   insn=0x00000000004E7278 string=0x00000000004E727C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall lua_isstring(__int64 a1, int a2)
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
            return 0;
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
      return 0;
  }
  return (__int64 *)v2 != &qword_599BC8 && (unsigned int)(*(_DWORD *)(v2 + 8) - 3) < 2;
}

