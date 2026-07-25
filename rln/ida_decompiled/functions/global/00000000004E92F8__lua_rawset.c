/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E92F8
 * Mangled: _Z10lua_rawsetP9lua_Statei
 * Demangled: lua_rawset(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001F8F00  lua_rawset(lua_State *,int)
 *
 * Callees: 2
 *   0x00000000004EE46C  sub_4EE46C
 *   0x00000000004F4320  sub_4F4320
 *
 * Referenced strings: 52
 *   insn=0x00000000004E9304 string=0x00000000004E9308 "?"
 *   insn=0x00000000004E930C string=0x00000000004E9310 "+"
 *   insn=0x00000000004E9310 string=0x00000000004E9314 "i"A"
 *   insn=0x00000000004E9318 string=0x00000000004E9320 ""
 *   insn=0x00000000004E9320 string=0x00000000004E9324 "A"
 *   insn=0x00000000004E932C string=0x00000000004E9330 "*"
 *   insn=0x00000000004E9330 string=0x00000000004E93D8 "u\n@"
 *   insn=0x00000000004E9334 string=0x00000000004E9338 "?"
 *   insn=0x00000000004E933C string=0x00000000004E9340 "h\n@"
 *   insn=0x00000000004E933C string=0x00000000004E934C "("
 *   insn=0x00000000004E9344 string=0x00000000004E9348 "$"
 *   insn=0x00000000004E934C string=0x00000000004E9350 "?"
 *   insn=0x00000000004E9350 string=0x00000000004E9354 "@"
 *   insn=0x00000000004E9354 string=0x00000000004E9358 ""
 *   insn=0x00000000004E9354 string=0x00000000004E937C "t"
 *   insn=0x00000000004E9358 string=0x00000000004E935C "?"
 *   insn=0x00000000004E935C string=0x00000000004E9360 " "
 *   insn=0x00000000004E9360 string=0x00000000004E9384 "h"
 *   insn=0x00000000004E9364 string=0x00000000004E9368 "?"
 *   insn=0x00000000004E936C string=0x00000000004E9370 "h"
 *   insn=0x00000000004E936C string=0x00000000004E93A8 "h"
 *   insn=0x00000000004E9388 string=0x00000000004E938C "t""
 *   insn=0x00000000004E938C string=0x00000000004E9390 ""
 *   insn=0x00000000004E9390 string=0x00000000004E9394 ""
 *   insn=0x00000000004E9394 string=0x00000000004E9398 "@"
 *   insn=0x00000000004E9398 string=0x00000000004E939C "i"
 *   insn=0x00000000004E939C string=0x00000000004E93A0 "hF"
 *   insn=0x00000000004E93A0 string=0x00000000004E93A4 ""
 *   insn=0x00000000004E93A8 string=0x00000000004E93AC ")"
 *   insn=0x00000000004E93AC string=0x00000000004E93B0 ")"
 *   insn=0x00000000004E93B4 string=0x00000000004E93B8 ""
 *   insn=0x00000000004E93B8 string=0x00000000004E93BC "k!/"
 *   insn=0x00000000004E93BC string=0x00000000004E93C0 ""
 *   insn=0x00000000004E93C0 string=0x00000000004E93C4 "\n-@9"
 *   insn=0x00000000004E93C4 string=0x00000000004E93C8 ""
 *   insn=0x00000000004E93C8 string=0x00000000004E93CC "a"
 *   insn=0x00000000004E93CC string=0x00000000004E93D0 "?"
 *   insn=0x00000000004E93D0 string=0x00000000004E93D4 "t"
 *   insn=0x00000000004E93EC string=0x00000000004E93F0 ""
 *   insn=0x00000000004E93F4 string=0x00000000004E93F8 ""
 *   insn=0x00000000004E93F8 string=0x00000000004E93FC "h\n@"
 *   insn=0x00000000004E93FC string=0x00000000004E9400 "\t"
 *   insn=0x00000000004E9400 string=0x00000000004E9404 "?"
 *   insn=0x00000000004E9404 string=0x00000000004E9408 "k"
 *   insn=0x00000000004E9408 string=0x00000000004E940C "\t"
 *   insn=0x00000000004E9408 string=0x00000000004E9434 ""
 *   insn=0x00000000004E940C string=0x00000000004E9410 ")%@9?"
 *   insn=0x00000000004E9410 string=0x00000000004E9414 "?"
 *   insn=0x00000000004E941C string=0x00000000004E9420 ")$@9"
 *   insn=0x00000000004E942C string=0x00000000004E9430 "h\n@"
 *   insn=0x00000000004E942C string=0x00000000004EE46C "($@9\t"
 *   insn=0x00000000004E9434 string=0x00000000004E9438 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_rawset(__int64 a1, int a2)
{
  __int64 *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x8
  int v7; // w10
  __int64 v8; // x8
  __int64 v9; // x21
  __int64 result; // x0
  __int64 v11; // x8

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
  v9 = *(_QWORD *)(a1 + 16);
  result = sub_4F4320(a1, *v3, v9 - 32);
  *(_QWORD *)result = *(_QWORD *)(v9 - 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(v9 - 8);
  v11 = *(_QWORD *)(a1 + 16);
  if ( *(int *)(v11 - 8) >= 4 && (*(_BYTE *)(*(_QWORD *)(v11 - 16) + 9LL) & 3) != 0 && (*(_BYTE *)(*v3 + 9) & 4) != 0 )
  {
    result = sub_4EE46C(a1);
    v11 = *(_QWORD *)(a1 + 16);
  }
  *(_QWORD *)(a1 + 16) = v11 - 32;
  return result;
}

