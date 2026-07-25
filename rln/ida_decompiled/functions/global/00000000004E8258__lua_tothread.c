/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E8258
 * Mangled: _Z12lua_tothreadP9lua_Statei
 * Demangled: lua_tothread(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001F9110  lua_tothread(lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 42
 *   insn=0x00000000004E8258 string=0x00000000004E825C "+"
 *   insn=0x00000000004E825C string=0x00000000004E8260 "\t A"
 *   insn=0x00000000004E8264 string=0x00000000004E826C ""
 *   insn=0x00000000004E826C string=0x00000000004E8270 "A"
 *   insn=0x00000000004E8274 string=0x00000000004E8278 "1"
 *   insn=0x00000000004E8278 string=0x00000000004E827C "*"
 *   insn=0x00000000004E827C string=0x00000000004E8324 "\t\t@"
 *   insn=0x00000000004E8280 string=0x00000000004E8284 "?"
 *   insn=0x00000000004E8288 string=0x00000000004E828C "@"
 *   insn=0x00000000004E8288 string=0x00000000004E8298 "("
 *   insn=0x00000000004E828C string=0x00000000004E8290 ""
 *   insn=0x00000000004E8290 string=0x00000000004E8294 "$"
 *   insn=0x00000000004E8298 string=0x00000000004E829C "?"
 *   insn=0x00000000004E829C string=0x00000000004E82A0 "@"
 *   insn=0x00000000004E82A0 string=0x00000000004E82A4 ""
 *   insn=0x00000000004E82A0 string=0x00000000004E82C8 ""
 *   insn=0x00000000004E82A4 string=0x00000000004E82A8 "?"
 *   insn=0x00000000004E82A8 string=0x00000000004E82AC " "
 *   insn=0x00000000004E82AC string=0x00000000004E82D0 ""
 *   insn=0x00000000004E82B0 string=0x00000000004E82B4 "?"
 *   insn=0x00000000004E82B8 string=0x00000000004E82BC ""
 *   insn=0x00000000004E82B8 string=0x00000000004E82F4 ""
 *   insn=0x00000000004E82BC string=0x00000000004E82C0 ""
 *   insn=0x00000000004E82D4 string=0x00000000004E82D8 ""
 *   insn=0x00000000004E82D8 string=0x00000000004E82DC ""
 *   insn=0x00000000004E82DC string=0x00000000004E82E0 "\t@"
 *   insn=0x00000000004E82E0 string=0x00000000004E82E4 " "
 *   insn=0x00000000004E82E4 string=0x00000000004E82E8 "\n"
 *   insn=0x00000000004E82E8 string=0x00000000004E82EC "\tD"
 *   insn=0x00000000004E82EC string=0x00000000004E82F0 ""
 *   insn=0x00000000004E82F4 string=0x00000000004E82F8 ")"
 *   insn=0x00000000004E82F8 string=0x00000000004E82FC ")"
 *   insn=0x00000000004E8300 string=0x00000000004E8304 ""
 *   insn=0x00000000004E8304 string=0x00000000004E8308 "k!/"
 *   insn=0x00000000004E8308 string=0x00000000004E830C ""
 *   insn=0x00000000004E830C string=0x00000000004E8310 "\n-@9"
 *   insn=0x00000000004E8310 string=0x00000000004E8314 ""
 *   insn=0x00000000004E8314 string=0x00000000004E8318 "a"
 *   insn=0x00000000004E8318 string=0x00000000004E831C "?"
 *   insn=0x00000000004E831C string=0x00000000004E8320 "h"
 *   insn=0x00000000004E8324 string=0x00000000004E8328 "?!"
 *   insn=0x00000000004E8328 string=0x00000000004E832C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_tothread(__int64 a1, int a2)
{
  __int64 *v2; // x8
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x8
  int v6; // w10

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
  if ( *((_DWORD *)v2 + 2) == 8 )
    return *v2;
  else
    return 0;
}

