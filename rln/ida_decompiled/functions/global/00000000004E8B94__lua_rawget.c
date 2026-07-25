/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E8B94
 * Mangled: _Z10lua_rawgetP9lua_Statei
 * Demangled: lua_rawget(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001F5E90  lua_rawget(lua_State *,int)
 *
 * Callees: 1
 *   0x00000000004F4118  sub_4F4118
 *
 * Referenced strings: 48
 *   insn=0x00000000004E8B9C string=0x00000000004E8BA0 "?"
 *   insn=0x00000000004E8BA4 string=0x00000000004E8BA8 "+"
 *   insn=0x00000000004E8BA8 string=0x00000000004E8BAC "i"A"
 *   insn=0x00000000004E8BB0 string=0x00000000004E8BB8 ""
 *   insn=0x00000000004E8BB8 string=0x00000000004E8BBC "A"
 *   insn=0x00000000004E8BC0 string=0x00000000004E8BC4 "1"
 *   insn=0x00000000004E8BC4 string=0x00000000004E8BC8 "*"
 *   insn=0x00000000004E8BC8 string=0x00000000004E8C70 "i\n@"
 *   insn=0x00000000004E8BCC string=0x00000000004E8BD0 "?"
 *   insn=0x00000000004E8BD4 string=0x00000000004E8BD8 "h\n@"
 *   insn=0x00000000004E8BD4 string=0x00000000004E8BE4 "("
 *   insn=0x00000000004E8BD8 string=0x00000000004E8BDC ""
 *   insn=0x00000000004E8BDC string=0x00000000004E8BE0 "$"
 *   insn=0x00000000004E8BE4 string=0x00000000004E8BE8 "?"
 *   insn=0x00000000004E8BE8 string=0x00000000004E8BEC "@"
 *   insn=0x00000000004E8BEC string=0x00000000004E8BF0 ""
 *   insn=0x00000000004E8BEC string=0x00000000004E8C14 "h"
 *   insn=0x00000000004E8BF0 string=0x00000000004E8BF4 "?"
 *   insn=0x00000000004E8BF4 string=0x00000000004E8BF8 " "
 *   insn=0x00000000004E8BF8 string=0x00000000004E8C1C "h"
 *   insn=0x00000000004E8BFC string=0x00000000004E8C00 "?"
 *   insn=0x00000000004E8C04 string=0x00000000004E8C08 "h"
 *   insn=0x00000000004E8C04 string=0x00000000004E8C40 "h"
 *   insn=0x00000000004E8C08 string=0x00000000004E8C0C ""
 *   insn=0x00000000004E8C20 string=0x00000000004E8C24 ""
 *   insn=0x00000000004E8C24 string=0x00000000004E8C28 ""
 *   insn=0x00000000004E8C28 string=0x00000000004E8C2C "\t@"
 *   insn=0x00000000004E8C2C string=0x00000000004E8C30 "h""
 *   insn=0x00000000004E8C30 string=0x00000000004E8C34 "j"
 *   insn=0x00000000004E8C34 string=0x00000000004E8C38 "iF"
 *   insn=0x00000000004E8C38 string=0x00000000004E8C3C ""
 *   insn=0x00000000004E8C40 string=0x00000000004E8C44 ")"
 *   insn=0x00000000004E8C44 string=0x00000000004E8C48 ")"
 *   insn=0x00000000004E8C4C string=0x00000000004E8C50 ""
 *   insn=0x00000000004E8C50 string=0x00000000004E8C54 "k!/"
 *   insn=0x00000000004E8C54 string=0x00000000004E8C58 ""
 *   insn=0x00000000004E8C58 string=0x00000000004E8C5C "\n-@9"
 *   insn=0x00000000004E8C5C string=0x00000000004E8C60 ""
 *   insn=0x00000000004E8C60 string=0x00000000004E8C64 "a"
 *   insn=0x00000000004E8C64 string=0x00000000004E8C68 "?"
 *   insn=0x00000000004E8C68 string=0x00000000004E8C6C "h"
 *   insn=0x00000000004E8C74 string=0x00000000004E8C78 "!A"
 *   insn=0x00000000004E8C78 string=0x00000000004E8C7C "'-"
 *   insn=0x00000000004E8C7C string=0x00000000004E8C80 "h\n@"
 *   insn=0x00000000004E8C80 string=0x00000000004E8C84 "\t"
 *   insn=0x00000000004E8C84 string=0x00000000004E8C88 "\t"
 *   insn=0x00000000004E8C88 string=0x00000000004E8C8C "\t@"
 *   insn=0x00000000004E8C8C string=0x00000000004E8C90 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_rawget(__int64 a1, int a2)
{
  __int64 *v3; // x8
  __int64 v4; // x9
  __int64 v5; // x9
  __int64 v6; // x8
  int v7; // w10
  __int64 result; // x0
  __int64 v9; // x8

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
          v4 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          v3 = (__int64 *)(a1 + 136);
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
          v3 = (__int64 *)(v6 + 16 * v5 + 24);
          if ( (int)v5 > v7 )
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
  result = sub_4F4118(*v3, *(_QWORD *)(a1 + 16) - 16LL);
  v9 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v9 - 16) = *(_QWORD *)result;
  *(_DWORD *)(v9 - 8) = *(_DWORD *)(result + 8);
  return result;
}

