/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E8A34
 * Mangled: _Z12lua_getfieldP9lua_StateiPKc
 * Demangled: lua_getfield(lua_State *,int,char const*)
 *
 * Callers: 1
 *   0x00000000001F9EE0  lua_getfield(lua_State *,int,char const*)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000203230  .strlen
 *   0x00000000004F356C  sub_4F356C
 *   0x00000000004F6020  sub_4F6020
 *
 * Referenced strings: 42
 *   insn=0x00000000004E8A44 string=0x00000000004E8A48 "V"
 *   insn=0x00000000004E8A54 string=0x00000000004E8A58 "?"
 *   insn=0x00000000004E8A5C string=0x00000000004E8A60 "+"
 *   insn=0x00000000004E8A60 string=0x00000000004E8A64 "i"A"
 *   insn=0x00000000004E8A68 string=0x00000000004E8A70 ""
 *   insn=0x00000000004E8A70 string=0x00000000004E8A74 "A"
 *   insn=0x00000000004E8A84 string=0x00000000004E8A88 "?"
 *   insn=0x00000000004E8A8C string=0x00000000004E8A90 "h\n@"
 *   insn=0x00000000004E8A8C string=0x00000000004E8B00 "("
 *   insn=0x00000000004E8AB8 string=0x00000000004E8ABC "c\n@"
 *   insn=0x00000000004E8AC8 string=0x00000000004E8ACC "U5"
 *   insn=0x00000000004E8ACC string=0x00000000004E8AD0 "h\n@"
 *   insn=0x00000000004E8AD0 string=0x00000000004E8AD4 "A"
 *   insn=0x00000000004E8AD4 string=0x00000000004E8AD8 "h\n"
 *   insn=0x00000000004E8AE4 string=0x00000000004E8AE8 "A"
 *   insn=0x00000000004E8B00 string=0x00000000004E8B04 "?"
 *   insn=0x00000000004E8B04 string=0x00000000004E8B08 "@"
 *   insn=0x00000000004E8B08 string=0x00000000004E8B0C ""
 *   insn=0x00000000004E8B08 string=0x00000000004E8B30 "u"
 *   insn=0x00000000004E8B0C string=0x00000000004E8B10 "?"
 *   insn=0x00000000004E8B10 string=0x00000000004E8B14 " "
 *   insn=0x00000000004E8B14 string=0x00000000004E8B38 "h"
 *   insn=0x00000000004E8B18 string=0x00000000004E8B1C "?"
 *   insn=0x00000000004E8B20 string=0x00000000004E8B24 "h"
 *   insn=0x00000000004E8B20 string=0x00000000004E8B5C "h"
 *   insn=0x00000000004E8B3C string=0x00000000004E8B40 "u""
 *   insn=0x00000000004E8B40 string=0x00000000004E8B44 ""
 *   insn=0x00000000004E8B44 string=0x00000000004E8B48 ""
 *   insn=0x00000000004E8B48 string=0x00000000004E8B4C "@"
 *   insn=0x00000000004E8B4C string=0x00000000004E8B50 "i"
 *   insn=0x00000000004E8B50 string=0x00000000004E8B54 "hF"
 *   insn=0x00000000004E8B5C string=0x00000000004E8B60 ")"
 *   insn=0x00000000004E8B60 string=0x00000000004E8B64 ")"
 *   insn=0x00000000004E8B68 string=0x00000000004E8B6C ""
 *   insn=0x00000000004E8B6C string=0x00000000004E8B70 "k!/"
 *   insn=0x00000000004E8B70 string=0x00000000004E8B74 ""
 *   insn=0x00000000004E8B74 string=0x00000000004E8B78 "\n-@9"
 *   insn=0x00000000004E8B78 string=0x00000000004E8B7C ""
 *   insn=0x00000000004E8B7C string=0x00000000004E8B80 "a"
 *   insn=0x00000000004E8B80 string=0x00000000004E8B84 "?"
 *   insn=0x00000000004E8B84 string=0x00000000004E8B88 "u"
 *   insn=0x00000000004E8B90 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_getfield(__int64 a1, int a2, char *a3)
{
  __int64 *v5; // x21
  size_t v6; // x0
  __int64 result; // x0
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x8
  int v11; // w10
  __int64 v12; // x8
  __int64 v13; // [xsp+8h] [xbp-38h] BYREF
  int v14; // [xsp+10h] [xbp-30h]
  __int64 v15; // [xsp+18h] [xbp-28h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 < 1 )
  {
    if ( a2 < -9999 )
    {
      switch ( a2 )
      {
        case -10002:
          v5 = (__int64 *)(a1 + 120);
          break;
        case -10001:
          v5 = (__int64 *)(a1 + 136);
          v8 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          *(_DWORD *)(a1 + 144) = 5;
          *(_QWORD *)(a1 + 136) = v8;
          break;
        case -10000:
          v5 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
          break;
        default:
          v9 = -10002LL - a2;
          v10 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
          v11 = *(unsigned __int8 *)(v10 + 11);
          v12 = v10 + 16 * v9 + 24;
          if ( (int)v9 <= v11 )
            v5 = (__int64 *)v12;
          else
            v5 = &qword_599BC8;
          break;
      }
    }
    else
    {
      v5 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
    }
  }
  else if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16) >= *(_QWORD *)(a1 + 16) )
  {
    v5 = &qword_599BC8;
  }
  else
  {
    v5 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
  }
  v6 = strlen(a3);
  v13 = sub_4F356C(a1, a3, v6);
  v14 = 4;
  result = sub_4F6020(a1, v5, &v13, *(_QWORD *)(a1 + 16));
  *(_QWORD *)(a1 + 16) += 16LL;
  return result;
}

