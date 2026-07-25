/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004EA180
 * Mangled: _Z14lua_setupvalueP9lua_Stateii
 * Demangled: lua_setupvalue(lua_State *,int,int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000004EE334  sub_4EE334
 *
 * Referenced strings: 78
 *   insn=0x00000000004EA180 string=0x00000000004EA184 "+"
 *   insn=0x00000000004EA184 string=0x00000000004EA188 "\t A"
 *   insn=0x00000000004EA188 string=0x00000000004EA18C "j"
 *   insn=0x00000000004EA18C string=0x00000000004EA194 ""
 *   insn=0x00000000004EA194 string=0x00000000004EA198 "A"
 *   insn=0x00000000004EA19C string=0x00000000004EA1A0 "1"
 *   insn=0x00000000004EA1A8 string=0x00000000004EA1AC "?"
 *   insn=0x00000000004EA1B0 string=0x00000000004EA1B4 "@"
 *   insn=0x00000000004EA1B0 string=0x00000000004EA208 "("
 *   insn=0x00000000004EA1B4 string=0x00000000004EA1B8 ""
 *   insn=0x00000000004EA1C4 string=0x00000000004EA1C8 "\t\t@"
 *   insn=0x00000000004EA1C8 string=0x00000000004EA1CC "?"
 *   insn=0x00000000004EA1D0 string=0x00000000004EA1D4 "\t"
 *   insn=0x00000000004EA1D4 string=0x00000000004EA1D8 "*)@9"
 *   insn=0x00000000004EA1DC string=0x00000000004EA1E0 "_"
 *   insn=0x00000000004EA1DC string=0x00000000004EA238 "_"
 *   insn=0x00000000004EA1E0 string=0x00000000004EA1E4 "k"
 *   insn=0x00000000004EA1E4 string=0x00000000004EA1E8 "*-@9_"
 *   insn=0x00000000004EA1E8 string=0x00000000004EA1EC "_"
 *   insn=0x00000000004EA1EC string=0x00000000004EA1F0 ""
 *   insn=0x00000000004EA1F0 string=0x00000000004EA1F4 ")"
 *   insn=0x00000000004EA1F4 string=0x00000000004EA1F8 "3"
 *   insn=0x00000000004EA1F8 string=0x00000000004EA1FC ")a"
 *   insn=0x00000000004EA1FC string=0x00000000004EA200 "s"
 *   insn=0x00000000004EA200 string=0x00000000004EA204 " "
 *   insn=0x00000000004EA204 string=0x00000000004EA284 "\n@"
 *   insn=0x00000000004EA208 string=0x00000000004EA20C "?"
 *   insn=0x00000000004EA20C string=0x00000000004EA210 " "
 *   insn=0x00000000004EA210 string=0x00000000004EA214 ""
 *   insn=0x00000000004EA210 string=0x00000000004EA2D4 ""
 *   insn=0x00000000004EA214 string=0x00000000004EA218 "?"
 *   insn=0x00000000004EA21C string=0x00000000004EA2DC ""
 *   insn=0x00000000004EA220 string=0x00000000004EA224 "?"
 *   insn=0x00000000004EA228 string=0x00000000004EA22C ""
 *   insn=0x00000000004EA228 string=0x00000000004EA300 ""
 *   insn=0x00000000004EA22C string=0x00000000004EA230 ""
 *   insn=0x00000000004EA23C string=0x00000000004EA240 "*"
 *   insn=0x00000000004EA240 string=0x00000000004EA244 "KI@"
 *   insn=0x00000000004EA24C string=0x00000000004EA264 "K|}"
 *   insn=0x00000000004EA264 string=0x00000000004EA268 "k!"
 *   insn=0x00000000004EA268 string=0x00000000004EA26C ")"
 *   insn=0x00000000004EA26C string=0x00000000004EA270 "J"
 *   insn=0x00000000004EA270 string=0x00000000004EA274 ")"
 *   insn=0x00000000004EA274 string=0x00000000004EA278 "Jik"
 *   insn=0x00000000004EA278 string=0x00000000004EA27C ")\t@"
 *   insn=0x00000000004EA27C string=0x00000000004EA280 "Sa"
 *   insn=0x00000000004EA284 string=0x00000000004EA288 "KA"
 *   insn=0x00000000004EA288 string=0x00000000004EA28C ""
 *   insn=0x00000000004EA28C string=0x00000000004EA290 "K"
 *   insn=0x00000000004EA290 string=0x00000000004EA294 "+"
 *   insn=0x00000000004EA294 string=0x00000000004EA298 "J"
 *   insn=0x00000000004EA298 string=0x00000000004EA29C "*\t"
 *   insn=0x00000000004EA29C string=0x00000000004EA2A0 "\t@"
 *   insn=0x00000000004EA2A0 string=0x00000000004EA2A4 "*\t@"
 *   insn=0x00000000004EA2A4 string=0x00000000004EA2A8 "_"
 *   insn=0x00000000004EA2A8 string=0x00000000004EA2AC "K"
 *   insn=0x00000000004EA2AC string=0x00000000004EA2B0 """
 *   insn=0x00000000004EA2B0 string=0x00000000004EA2B4 "I$@9?"
 *   insn=0x00000000004EA2B4 string=0x00000000004EA2B8 "?"
 *   insn=0x00000000004EA2C0 string=0x00000000004EA2C4 "($@9h"
 *   insn=0x00000000004EA2C4 string=0x00000000004EA2C8 "h"
 *   insn=0x00000000004EA2E0 string=0x00000000004EA2E4 ""
 *   insn=0x00000000004EA2E4 string=0x00000000004EA2E8 ""
 *   insn=0x00000000004EA2E8 string=0x00000000004EA2EC "\t@"
 *   insn=0x00000000004EA2EC string=0x00000000004EA2F0 " "
 *   insn=0x00000000004EA2F0 string=0x00000000004EA2F4 "\n"
 *   insn=0x00000000004EA2F4 string=0x00000000004EA2F8 "\tD"
 *   insn=0x00000000004EA300 string=0x00000000004EA304 ")"
 *   insn=0x00000000004EA304 string=0x00000000004EA308 ")"
 *   insn=0x00000000004EA308 string=0x00000000004EA30C "k"
 *   insn=0x00000000004EA30C string=0x00000000004EA310 ""
 *   insn=0x00000000004EA310 string=0x00000000004EA314 "k!/"
 *   insn=0x00000000004EA314 string=0x00000000004EA318 ""
 *   insn=0x00000000004EA318 string=0x00000000004EA31C "\n-@9"
 *   insn=0x00000000004EA31C string=0x00000000004EA320 ""
 *   insn=0x00000000004EA320 string=0x00000000004EA324 "a"
 *   insn=0x00000000004EA324 string=0x00000000004EA328 "?"
 *   insn=0x00000000004EA328 string=0x00000000004EA32C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

char *__fastcall lua_setupvalue(__int64 a1, int a2, int a3)
{
  __int64 *v3; // x8
  __int64 v4; // x9
  __int64 v5; // x9
  char *v6; // x19
  __int64 v7; // x10
  __int64 v9; // x11
  __int64 v10; // x10
  int *v11; // x9
  __int64 v12; // x9
  __int64 v13; // x9
  __int64 v14; // x8
  int v15; // w10

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
          v12 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          v3 = (__int64 *)(a1 + 136);
          *(_DWORD *)(a1 + 144) = 5;
          *(_QWORD *)(a1 + 136) = v12;
          break;
        case -10000:
          v3 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
          break;
        default:
          v13 = -10002LL - a2;
          v14 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
          v15 = *(unsigned __int8 *)(v14 + 11);
          v3 = (__int64 *)(v14 + 16 * v13 + 24);
          if ( (int)v13 > v15 )
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
  if ( *((_DWORD *)v3 + 2) != 6 )
    return 0;
  v4 = *v3;
  if ( !*(_BYTE *)(*v3 + 10) )
  {
    if ( a3 >= 1 )
    {
      v7 = *(_QWORD *)(v4 + 32);
      if ( *(_DWORD *)(v7 + 72) >= a3 )
      {
        v9 = 8LL * a3 - 8;
        v5 = *(_QWORD *)(*(_QWORD *)(v4 + v9 + 40) + 16LL);
        v6 = (char *)(*(_QWORD *)(*(_QWORD *)(v7 + 56) + v9) + 24LL);
        goto LABEL_21;
      }
    }
    return 0;
  }
  if ( a3 < 1 || *(unsigned __int8 *)(v4 + 11) < a3 )
    return 0;
  v5 = v4 + 16LL * a3 + 24;
  v6 = "";
LABEL_21:
  v10 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v10 - 16;
  *(_QWORD *)v5 = *(_QWORD *)(v10 - 16);
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(v10 - 8);
  v11 = *(int **)(a1 + 16);
  if ( v11[2] >= 4 && (*(_BYTE *)(*(_QWORD *)v11 + 9LL) & 3) != 0 && (*(_BYTE *)(*v3 + 9) & 4) != 0 )
    sub_4EE334(a1);
  return v6;
}

