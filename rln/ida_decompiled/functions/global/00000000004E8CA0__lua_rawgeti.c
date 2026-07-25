/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E8CA0
 * Mangled: _Z11lua_rawgetiP9lua_Stateii
 * Demangled: lua_rawgeti(lua_State *,int,int)
 *
 * Callers: 1
 *   0x00000000001F6640  lua_rawgeti(lua_State *,int,int)
 *
 * Callees: 1
 *   0x00000000004F4034  sub_4F4034
 *
 * Referenced strings: 49
 *   insn=0x00000000004E8CA8 string=0x00000000004E8CAC "?"
 *   insn=0x00000000004E8CB0 string=0x00000000004E8CB4 "+"
 *   insn=0x00000000004E8CB4 string=0x00000000004E8CB8 "i"A"
 *   insn=0x00000000004E8CBC string=0x00000000004E8CC4 ""
 *   insn=0x00000000004E8CC4 string=0x00000000004E8CC8 "A"
 *   insn=0x00000000004E8CCC string=0x00000000004E8CD0 "1"
 *   insn=0x00000000004E8CD0 string=0x00000000004E8CD4 "*"
 *   insn=0x00000000004E8CD8 string=0x00000000004E8CDC "?"
 *   insn=0x00000000004E8CE0 string=0x00000000004E8CE4 "h\n@"
 *   insn=0x00000000004E8CE0 string=0x00000000004E8CF0 "("
 *   insn=0x00000000004E8CE4 string=0x00000000004E8CE8 ""
 *   insn=0x00000000004E8CE8 string=0x00000000004E8CEC "$"
 *   insn=0x00000000004E8CF0 string=0x00000000004E8CF4 "?"
 *   insn=0x00000000004E8CF4 string=0x00000000004E8CF8 "@"
 *   insn=0x00000000004E8CF8 string=0x00000000004E8CFC ""
 *   insn=0x00000000004E8CF8 string=0x00000000004E8D20 "h"
 *   insn=0x00000000004E8CFC string=0x00000000004E8D00 "?"
 *   insn=0x00000000004E8D00 string=0x00000000004E8D04 " "
 *   insn=0x00000000004E8D04 string=0x00000000004E8D28 "h"
 *   insn=0x00000000004E8D08 string=0x00000000004E8D0C "?"
 *   insn=0x00000000004E8D10 string=0x00000000004E8D14 "h"
 *   insn=0x00000000004E8D10 string=0x00000000004E8D4C "h"
 *   insn=0x00000000004E8D14 string=0x00000000004E8D18 ""
 *   insn=0x00000000004E8D2C string=0x00000000004E8D30 ""
 *   insn=0x00000000004E8D30 string=0x00000000004E8D34 ""
 *   insn=0x00000000004E8D34 string=0x00000000004E8D38 "\t@"
 *   insn=0x00000000004E8D38 string=0x00000000004E8D3C "h""
 *   insn=0x00000000004E8D3C string=0x00000000004E8D40 "j"
 *   insn=0x00000000004E8D40 string=0x00000000004E8D44 "iF"
 *   insn=0x00000000004E8D44 string=0x00000000004E8D48 ""
 *   insn=0x00000000004E8D4C string=0x00000000004E8D50 ")"
 *   insn=0x00000000004E8D50 string=0x00000000004E8D54 ")"
 *   insn=0x00000000004E8D58 string=0x00000000004E8D5C ""
 *   insn=0x00000000004E8D5C string=0x00000000004E8D60 "k!/"
 *   insn=0x00000000004E8D60 string=0x00000000004E8D64 ""
 *   insn=0x00000000004E8D64 string=0x00000000004E8D68 "\n-@9"
 *   insn=0x00000000004E8D68 string=0x00000000004E8D6C ""
 *   insn=0x00000000004E8D6C string=0x00000000004E8D70 "a"
 *   insn=0x00000000004E8D70 string=0x00000000004E8D74 "?"
 *   insn=0x00000000004E8D74 string=0x00000000004E8D78 "h"
 *   insn=0x00000000004E8D84 string=0x00000000004E8D88 "h\n@"
 *   insn=0x00000000004E8D84 string=0x00000000004F4034 "\t8@"
 *   insn=0x00000000004E8D88 string=0x00000000004E8D8C "\t"
 *   insn=0x00000000004E8D8C string=0x00000000004E8D90 "\t"
 *   insn=0x00000000004E8D90 string=0x00000000004E8D94 "\t@"
 *   insn=0x00000000004E8D94 string=0x00000000004E8D98 "\t\t"
 *   insn=0x00000000004E8D98 string=0x00000000004E8D9C "h\n@"
 *   insn=0x00000000004E8D9C string=0x00000000004E8DA0 "A"
 *   insn=0x00000000004E8DA0 string=0x00000000004E8DA4 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_rawgeti(__int64 a1, int a2, unsigned int a3)
{
  __int64 *v4; // x8
  __int64 v5; // x9
  __int64 v6; // x9
  __int64 v7; // x8
  int v8; // w10
  __int64 result; // x0
  __int64 v10; // x8

  if ( a2 < 1 )
  {
    if ( a2 < -9999 )
    {
      switch ( a2 )
      {
        case -10002:
          v4 = (__int64 *)(a1 + 120);
          break;
        case -10001:
          v5 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          v4 = (__int64 *)(a1 + 136);
          *(_DWORD *)(a1 + 144) = 5;
          *(_QWORD *)(a1 + 136) = v5;
          break;
        case -10000:
          v4 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
          break;
        default:
          v6 = -10002LL - a2;
          v7 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
          v8 = *(unsigned __int8 *)(v7 + 11);
          v4 = (__int64 *)(v7 + 16 * v6 + 24);
          if ( (int)v6 > v8 )
            v4 = &qword_599BC8;
          break;
      }
    }
    else
    {
      v4 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
    }
  }
  else
  {
    v4 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 16) )
      v4 = &qword_599BC8;
  }
  result = sub_4F4034(*v4, a3);
  v10 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)v10 = *(_QWORD *)result;
  *(_DWORD *)(v10 + 8) = *(_DWORD *)(result + 8);
  *(_QWORD *)(a1 + 16) += 16LL;
  return result;
}

