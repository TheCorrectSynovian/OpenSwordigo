/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EB12C
 * Mangled: sub_4EB12C
 * Demangled: sub_4EB12C
 *
 * Callers: 4
 *   0x00000000004EA630  lua_getinfo(lua_State *,char const*,lua_Debug *)
 *   0x00000000004EB03C  sub_4EB03C
 *   0x00000000004EB474  sub_4EB474
 *   0x00000000004EB578  sub_4EB578
 *
 * Callees: 2
 *   0x00000000004EAB24  sub_4EAB24
 *   0x00000000004ED810  sub_4ED810
 *
 * Referenced strings: 71
 *   insn=0x00000000004EB154 string=0x00000000004EB158 "\t\t@"
 *   insn=0x00000000004EB158 string=0x00000000004EB15C "?"
 *   insn=0x00000000004EB160 string=0x00000000004EB164 "y"
 *   insn=0x00000000004EB164 string=0x00000000004EB168 "z"
 *   insn=0x00000000004EB164 string=0x0000000000599A10 "local"
 *   insn=0x00000000004EB168 string=0x00000000004EB16C "9C("
 *   insn=0x00000000004EB16C string=0x00000000004EB170 "ZS$"
 *   insn=0x00000000004EB170 string=0x00000000004EB174 "\t"
 *   insn=0x00000000004EB174 string=0x00000000004EB178 "*)@9*"
 *   insn=0x00000000004EB178 string=0x00000000004EB17C "*"
 *   insn=0x00000000004EB180 string=0x00000000004EB184 "7"
 *   insn=0x00000000004EB184 string=0x00000000004EB188 "_"
 *   insn=0x00000000004EB188 string=0x00000000004EB18C "`"
 *   insn=0x00000000004EB194 string=0x00000000004EB1A4 "("
 *   insn=0x00000000004EB19C string=0x00000000004EB1A0 "\t"
 *   insn=0x00000000004EB1AC string=0x00000000004EB1B0 "@"
 *   insn=0x00000000004EB1B0 string=0x00000000004EB1B4 "H"
 *   insn=0x00000000004EB1B4 string=0x00000000004EB1B8 ""
 *   insn=0x00000000004EB1C4 string=0x00000000004EB1C8 "`"
 *   insn=0x00000000004EB1C4 string=0x00000000004ED810 "\"
 *   insn=0x00000000004EB1D8 string=0x00000000004EB1DC "R"
 *   insn=0x00000000004EB1E0 string=0x00000000004EB1E4 "\t"
 *   insn=0x00000000004EB1E4 string=0x00000000004EB1E8 "?-"
 *   insn=0x00000000004EB1F0 string=0x00000000004EB1F4 "I{"
 *   insn=0x00000000004EB1F4 string=0x00000000004EB1F8 ")"
 *   insn=0x00000000004EB1F8 string=0x00000000004EB1FC " "
 *   insn=0x00000000004EB1FC string=0x00000000004EB200 "\t}"
 *   insn=0x00000000004EB1FC string=0x00000000004EB2AC "("
 *   insn=0x00000000004EB210 string=0x00000000004EB214 "\t\t@"
 *   insn=0x00000000004EB214 string=0x00000000004EB218 "?"
 *   insn=0x00000000004EB244 string=0x00000000004EB248 "\t"
 *   insn=0x00000000004EB248 string=0x00000000004EB24C "}"
 *   insn=0x00000000004EB248 string=0x00000000004EB308 "h"
 *   insn=0x00000000004EB24C string=0x00000000004EB250 "(Yh"
 *   insn=0x00000000004EB250 string=0x00000000004EB254 "a"
 *   insn=0x00000000004EB254 string=0x00000000004EB258 "."
 *   insn=0x00000000004EB258 string=0x00000000004EB310 "`"
 *   insn=0x00000000004EB25C string=0x00000000004EB260 "}"
 *   insn=0x00000000004EB260 string=0x00000000004EB264 ""
 *   insn=0x00000000004EB264 string=0x00000000004EB268 "`"
 *   insn=0x00000000004EB268 string=0x00000000004EB26C "(ih"
 *   insn=0x00000000004EB268 string=0x0000000000599A16 "global"
 *   insn=0x00000000004EB270 string=0x00000000004EB274 "a"
 *   insn=0x00000000004EB274 string=0x00000000004EB278 "h"
 *   insn=0x00000000004EB280 string=0x00000000004EB2D8 "h"
 *   insn=0x00000000004EB284 string=0x00000000004EB288 "U"
 *   insn=0x00000000004EB288 string=0x00000000004EB28C "*Q("
 *   insn=0x00000000004EB28C string=0x00000000004EB290 "J\t@"
 *   insn=0x00000000004EB290 string=0x00000000004EB294 "_"
 *   insn=0x00000000004EB298 string=0x00000000004EB29C ""
 *   insn=0x00000000004EB29C string=0x00000000004EB2A0 "(ih"
 *   insn=0x00000000004EB2A0 string=0x00000000004EB2A4 "a"
 *   insn=0x00000000004EB2A8 string=0x00000000004EB2E0 "`"
 *   insn=0x00000000004EB2AC string=0x00000000004EB2F0 "h"
 *   insn=0x00000000004EB2B0 string=0x00000000004EB2B4 "U"
 *   insn=0x00000000004EB2B4 string=0x00000000004EB2B8 "*Q("
 *   insn=0x00000000004EB2B8 string=0x00000000004EB2BC "J\t@"
 *   insn=0x00000000004EB2BC string=0x00000000004EB2C0 "_"
 *   insn=0x00000000004EB2C0 string=0x00000000004EB2C4 "a"
 *   insn=0x00000000004EB2C4 string=0x00000000004EB2C8 ""
 *   insn=0x00000000004EB2C8 string=0x00000000004EB2CC "(ih"
 *   insn=0x00000000004EB2CC string=0x00000000004EB2D0 "a"
 *   insn=0x00000000004EB2D0 string=0x00000000004EB2D4 "\t"
 *   insn=0x00000000004EB2D4 string=0x00000000004EB2F8 "`"
 *   insn=0x00000000004EB2D8 string=0x000000000059A393 "?"
 *   insn=0x00000000004EB2E0 string=0x00000000004EB2E8 "h"
 *   insn=0x00000000004EB2E0 string=0x0000000000599A2B "method"
 *   insn=0x00000000004EB2F8 string=0x00000000004EB2FC "h"
 *   insn=0x00000000004EB2F8 string=0x0000000000599A1D "field"
 *   insn=0x00000000004EB310 string=0x00000000004EB314 "h"
 *   insn=0x00000000004EB310 string=0x0000000000599A23 "upvalue"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

const char *__fastcall sub_4EB12C(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  _DWORD *v5; // x8
  __int64 v9; // x9
  __int64 v10; // x23
  __int64 v11; // x10
  unsigned int v12; // w24
  __int64 v13; // x0
  unsigned int v14; // w8
  const char *result; // x0
  __int64 v16; // x9
  char *v17; // x8
  __int64 v18; // x9
  __int64 v19; // x8
  char *v20; // x8
  __int64 v21; // x9
  __int64 v22; // x8
  char *v23; // x8

  v5 = *(_DWORD **)(a2 + 8);
  if ( v5[2] != 6 )
    return 0;
  while ( 2 )
  {
    v9 = *(_QWORD *)v5;
    if ( *(_BYTE *)(*(_QWORD *)v5 + 10LL) )
      return 0;
    v10 = *(_QWORD *)(v9 + 32);
    if ( *(_QWORD *)(a1 + 40) == a2 )
    {
      v11 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a2 + 24) = v11;
      v9 = *(_QWORD *)v5;
    }
    else
    {
      v11 = *(_QWORD *)(a2 + 24);
    }
    v12 = ((unsigned __int64)(v11 - *(_QWORD *)(*(_QWORD *)(v9 + 32) + 24LL)) >> 2) - 1;
    v13 = sub_4ED810(v10, (unsigned int)(a3 + 1), v12);
    *a4 = v13;
    if ( v13 )
      return "local";
    v14 = sub_4EAB24(v10, v12, a3);
    result = 0;
    switch ( v14 & 0x3F )
    {
      case 0u:
        a3 = v14 >> 23;
        if ( v14 >> 23 >= (unsigned __int8)(v14 >> 6) )
          return 0;
        v5 = *(_DWORD **)(a2 + 8);
        if ( v5[2] != 6 )
          return 0;
        continue;
      case 4u:
        v16 = *(_QWORD *)(v10 + 56);
        if ( v16 )
          v17 = (char *)(*(_QWORD *)(v16 + 8LL * (v14 >> 23)) + 24LL);
        else
          v17 = "?";
        *a4 = v17;
        result = "upvalue";
        break;
      case 5u:
        result = "global";
        *a4 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL * (v14 >> 14)) + 24LL;
        break;
      case 6u:
        if ( (v14 & 0x400000) != 0
          && (v21 = *(_QWORD *)(v10 + 16),
              v22 = (unsigned __int8)(v14 >> 14),
              *(_DWORD *)(v21 + 16LL * (unsigned int)v22 + 8) == 4) )
        {
          v23 = (char *)(*(_QWORD *)(v21 + 16 * v22) + 24LL);
        }
        else
        {
          v23 = "?";
        }
        *a4 = v23;
        result = "field";
        break;
      case 0xBu:
        if ( (v14 & 0x400000) != 0
          && (v18 = *(_QWORD *)(v10 + 16),
              v19 = (unsigned __int8)(v14 >> 14),
              *(_DWORD *)(v18 + 16LL * (unsigned int)v19 + 8) == 4) )
        {
          v20 = (char *)(*(_QWORD *)(v18 + 16 * v19) + 24LL);
        }
        else
        {
          v20 = "?";
        }
        result = "method";
        *a4 = v20;
        break;
      default:
        return result;
    }
    break;
  }
  return result;
}

