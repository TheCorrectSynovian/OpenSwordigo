/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6AB0
 * Mangled: _Z10lua_insertP9lua_Statei
 * Demangled: lua_insert(lua_State *,int)
 *
 * Callers: 1
 *   0x0000000000203550  lua_insert(lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 53
 *   insn=0x00000000004E6AB0 string=0x00000000004E6AB4 "+"
 *   insn=0x00000000004E6AB4 string=0x00000000004E6AB8 "\t A"
 *   insn=0x00000000004E6ABC string=0x00000000004E6AC4 ""
 *   insn=0x00000000004E6AC4 string=0x00000000004E6AC8 "A"
 *   insn=0x00000000004E6ACC string=0x00000000004E6AD0 "1"
 *   insn=0x00000000004E6AD0 string=0x00000000004E6AD4 "*"
 *   insn=0x00000000004E6AD4 string=0x00000000004E6B7C "\t@"
 *   insn=0x00000000004E6AD8 string=0x00000000004E6ADC "?"
 *   insn=0x00000000004E6AE0 string=0x00000000004E6AE4 "@"
 *   insn=0x00000000004E6AE0 string=0x00000000004E6AF0 "("
 *   insn=0x00000000004E6AE4 string=0x00000000004E6AE8 ""
 *   insn=0x00000000004E6AE8 string=0x00000000004E6AEC "$"
 *   insn=0x00000000004E6AF0 string=0x00000000004E6AF4 "?"
 *   insn=0x00000000004E6AF4 string=0x00000000004E6AF8 "@"
 *   insn=0x00000000004E6AF8 string=0x00000000004E6AFC ""
 *   insn=0x00000000004E6AF8 string=0x00000000004E6B20 ""
 *   insn=0x00000000004E6AFC string=0x00000000004E6B00 "?"
 *   insn=0x00000000004E6B00 string=0x00000000004E6B04 " "
 *   insn=0x00000000004E6B04 string=0x00000000004E6B28 ""
 *   insn=0x00000000004E6B08 string=0x00000000004E6B0C "?"
 *   insn=0x00000000004E6B10 string=0x00000000004E6B14 ""
 *   insn=0x00000000004E6B10 string=0x00000000004E6B4C ""
 *   insn=0x00000000004E6B14 string=0x00000000004E6B18 ""
 *   insn=0x00000000004E6B2C string=0x00000000004E6B30 ""
 *   insn=0x00000000004E6B30 string=0x00000000004E6B34 ""
 *   insn=0x00000000004E6B34 string=0x00000000004E6B38 "\t@"
 *   insn=0x00000000004E6B38 string=0x00000000004E6B3C " "
 *   insn=0x00000000004E6B3C string=0x00000000004E6B40 "\n"
 *   insn=0x00000000004E6B40 string=0x00000000004E6B44 "\tD"
 *   insn=0x00000000004E6B44 string=0x00000000004E6B48 ""
 *   insn=0x00000000004E6B4C string=0x00000000004E6B50 ")"
 *   insn=0x00000000004E6B50 string=0x00000000004E6B54 ")"
 *   insn=0x00000000004E6B58 string=0x00000000004E6B5C ""
 *   insn=0x00000000004E6B5C string=0x00000000004E6B60 "k!/"
 *   insn=0x00000000004E6B60 string=0x00000000004E6B64 ""
 *   insn=0x00000000004E6B64 string=0x00000000004E6B68 "\n-@9"
 *   insn=0x00000000004E6B68 string=0x00000000004E6B6C ""
 *   insn=0x00000000004E6B6C string=0x00000000004E6B70 "a"
 *   insn=0x00000000004E6B70 string=0x00000000004E6B74 "?"
 *   insn=0x00000000004E6B74 string=0x00000000004E6B78 "h"
 *   insn=0x00000000004E6B7C string=0x00000000004E6B80 "?"
 *   insn=0x00000000004E6B80 string=0x00000000004E6B84 "I"
 *   insn=0x00000000004E6B84 string=0x00000000004E6BAC "*"
 *   insn=0x00000000004E6B88 string=0x00000000004E6B8C "K_"
 *   insn=0x00000000004E6B8C string=0x00000000004E6B90 ","
 *   insn=0x00000000004E6B90 string=0x00000000004E6B94 "+"
 *   insn=0x00000000004E6B94 string=0x00000000004E6B98 "_"
 *   insn=0x00000000004E6B98 string=0x00000000004E6B9C ",\t"
 *   insn=0x00000000004E6BA0 string=0x00000000004E6BA4 "H"
 *   insn=0x00000000004E6BA4 string=0x00000000004E6BA8 "\t@"
 *   insn=0x00000000004E6BAC string=0x00000000004E6BB0 "\n"
 *   insn=0x00000000004E6BB0 string=0x00000000004E6BB4 ")\t@"
 *   insn=0x00000000004E6BB4 string=0x00000000004E6BB8 "\t\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_insert(__int64 result, int a2)
{
  __int64 *v2; // x8
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x8
  int v6; // w10
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x10
  __int64 v9; // t1
  int v10; // w12

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
  v7 = *(_QWORD *)(result + 16);
  if ( v7 > (unsigned __int64)v2 )
  {
    v8 = *(_QWORD *)(result + 16);
    do
    {
      v9 = *(_QWORD *)(v8 - 16);
      v8 -= 16LL;
      v10 = *(_DWORD *)(v7 - 8);
      *(_QWORD *)v7 = v9;
      *(_DWORD *)(v7 + 8) = v10;
      v7 = v8;
    }
    while ( v8 > (unsigned __int64)v2 );
    v7 = *(_QWORD *)(result + 16);
  }
  *v2 = *(_QWORD *)v7;
  *((_DWORD *)v2 + 2) = *(_DWORD *)(v7 + 8);
  return result;
}

