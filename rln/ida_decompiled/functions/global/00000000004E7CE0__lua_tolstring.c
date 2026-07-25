/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E7CE0
 * Mangled: _Z13lua_tolstringP9lua_StateiPm
 * Demangled: lua_tolstring(lua_State *,int,ulong *)
 *
 * Callers: 1
 *   0x00000000001F57A0  lua_tolstring(lua_State *,int,ulong *)
 *
 * Callees: 2
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004F5F80  sub_4F5F80
 *
 * Referenced strings: 53
 *   insn=0x00000000004E7CFC string=0x00000000004E7D00 "+"
 *   insn=0x00000000004E7D08 string=0x00000000004E7D10 ""
 *   insn=0x00000000004E7D10 string=0x00000000004E7D14 "A"
 *   insn=0x00000000004E7D20 string=0x00000000004E7D38 "(@"
 *   insn=0x00000000004E7D28 string=0x00000000004E7D2C "K"
 *   insn=0x00000000004E7D2C string=0x00000000004E7DB4 "("
 *   insn=0x00000000004E7D3C string=0x00000000004E7D40 "`"
 *   insn=0x00000000004E7D4C string=0x00000000004E7DE4 "s"
 *   insn=0x00000000004E7D50 string=0x00000000004E7D54 "\t!G"
 *   insn=0x00000000004E7D58 string=0x00000000004E7D5C "c"
 *   insn=0x00000000004E7D68 string=0x00000000004E7D6C "K"
 *   insn=0x00000000004E7D74 string=0x00000000004E7D7C ""
 *   insn=0x00000000004E7D7C string=0x00000000004E7D80 "A"
 *   insn=0x00000000004E7D8C string=0x00000000004E7D90 "("
 *   insn=0x00000000004E7D8C string=0x00000000004E7D9C "("
 *   insn=0x00000000004E7D90 string=0x00000000004E7D94 "\t@"
 *   insn=0x00000000004E7D94 string=0x00000000004E7D98 "h"
 *   insn=0x00000000004E7DBC string=0x00000000004E7DC0 ""
 *   insn=0x00000000004E7DC4 string=0x00000000004E7DC8 "`"
 *   insn=0x00000000004E7DD0 string=0x00000000004E7DD4 "!"
 *   insn=0x00000000004E7DFC string=0x00000000004E7E18 "("
 *   insn=0x00000000004E7E04 string=0x00000000004E7E08 "S"
 *   insn=0x00000000004E7E1C string=0x00000000004E7E20 "`"
 *   insn=0x00000000004E7E20 string=0x00000000004E7E24 ""
 *   insn=0x00000000004E7E28 string=0x00000000004E7E2C "`"
 *   insn=0x00000000004E7E34 string=0x00000000004E7E38 "A"
 *   insn=0x00000000004E7E40 string=0x00000000004E7E44 "s"
 *   insn=0x00000000004E7E5C string=0x00000000004E7E60 ""
 *   insn=0x00000000004E7E60 string=0x00000000004E7E64 ""
 *   insn=0x00000000004E7E64 string=0x00000000004E7E68 "@"
 *   insn=0x00000000004E7E78 string=0x00000000004E7E7C ")"
 *   insn=0x00000000004E7E7C string=0x00000000004E7E80 ")"
 *   insn=0x00000000004E7E84 string=0x00000000004E7E88 ""
 *   insn=0x00000000004E7E88 string=0x00000000004E7E8C "k!/"
 *   insn=0x00000000004E7E8C string=0x00000000004E7E90 ""
 *   insn=0x00000000004E7E90 string=0x00000000004E7E94 "\n-@9"
 *   insn=0x00000000004E7E94 string=0x00000000004E7E98 ""
 *   insn=0x00000000004E7E98 string=0x00000000004E7E9C "a"
 *   insn=0x00000000004E7E9C string=0x00000000004E7EA0 "?"
 *   insn=0x00000000004E7EA0 string=0x00000000004E7EA4 "a"
 *   insn=0x00000000004E7EC0 string=0x00000000004E7EC4 ""
 *   insn=0x00000000004E7EC4 string=0x00000000004E7EC8 ""
 *   insn=0x00000000004E7EC8 string=0x00000000004E7ECC "@"
 *   insn=0x00000000004E7EE0 string=0x00000000004E7EE4 ")"
 *   insn=0x00000000004E7EE4 string=0x00000000004E7EE8 ")"
 *   insn=0x00000000004E7EEC string=0x00000000004E7EF0 ""
 *   insn=0x00000000004E7EF0 string=0x00000000004E7EF4 "k!/"
 *   insn=0x00000000004E7EF4 string=0x00000000004E7EF8 ""
 *   insn=0x00000000004E7EF8 string=0x00000000004E7EFC "\n-@9"
 *   insn=0x00000000004E7EFC string=0x00000000004E7F00 ""
 *   insn=0x00000000004E7F00 string=0x00000000004E7F04 "a"
 *   insn=0x00000000004E7F04 string=0x00000000004E7F08 "?"
 *   insn=0x00000000004E7F08 string=0x00000000004E7F0C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_tolstring(__int64 a1, int a2, _QWORD *a3)
{
  __int64 *v6; // x1
  __int64 result; // x0
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x8
  int v11; // w10
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x9
  __int64 v15; // x8
  int v16; // w10
  __int64 v17; // x8

  if ( a2 < 1 )
  {
    if ( a2 < -9999 )
    {
      switch ( a2 )
      {
        case -10002:
          v6 = (__int64 *)(a1 + 120);
          break;
        case -10001:
          v6 = (__int64 *)(a1 + 136);
          v8 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
          *(_DWORD *)(a1 + 144) = 5;
          *(_QWORD *)(a1 + 136) = v8;
          break;
        case -10000:
          v6 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
          break;
        default:
          v9 = -10002LL - a2;
          v10 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
          v11 = *(unsigned __int8 *)(v10 + 11);
          v12 = v10 + 16 * v9 + 24;
          if ( (int)v9 <= v11 )
            v6 = (__int64 *)v12;
          else
            v6 = &qword_599BC8;
          break;
      }
    }
    else
    {
      v6 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
    }
  }
  else if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16) >= *(_QWORD *)(a1 + 16) )
  {
    v6 = &qword_599BC8;
  }
  else
  {
    v6 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
  }
  if ( *((_DWORD *)v6 + 2) == 4 )
    goto LABEL_15;
  if ( (unsigned int)sub_4F5F80(a1) )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 120LL) >= *(_QWORD *)(*(_QWORD *)(a1 + 32) + 112LL) )
      sub_4EDCB0(a1);
    if ( a2 < 1 )
    {
      if ( a2 < -9999 )
      {
        switch ( a2 )
        {
          case -10002:
            v6 = (__int64 *)(a1 + 120);
            if ( !a3 )
              return *v6 + 24;
            break;
          case -10001:
            v6 = (__int64 *)(a1 + 136);
            v13 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
            *(_DWORD *)(a1 + 144) = 5;
            *(_QWORD *)(a1 + 136) = v13;
            if ( !a3 )
              return *v6 + 24;
            break;
          case -10000:
            v6 = (__int64 *)(*(_QWORD *)(a1 + 32) + 160LL);
            if ( !a3 )
              return *v6 + 24;
            break;
          default:
            v14 = -10002LL - a2;
            v15 = **(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
            v16 = *(unsigned __int8 *)(v15 + 11);
            v17 = v15 + 16 * v14 + 24;
            if ( (int)v14 <= v16 )
              v6 = (__int64 *)v17;
            else
              v6 = &qword_599BC8;
            if ( !a3 )
              return *v6 + 24;
            break;
        }
      }
      else
      {
        v6 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
        if ( !a3 )
          return *v6 + 24;
      }
      goto LABEL_16;
    }
    if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16) >= *(_QWORD *)(a1 + 16) )
      v6 = &qword_599BC8;
    else
      v6 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
LABEL_15:
    if ( !a3 )
      return *v6 + 24;
LABEL_16:
    *a3 = *(_QWORD *)(*v6 + 16);
    return *v6 + 24;
  }
  result = 0;
  if ( a3 )
    *a3 = 0;
  return result;
}

