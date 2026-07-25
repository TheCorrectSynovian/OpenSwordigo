/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E6F78
 * Mangled: _Z15lua_iscfunctionP9lua_Statei
 * Demangled: lua_iscfunction(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001F3A40  lua_iscfunction(lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 43
 *   insn=0x00000000004E6F78 string=0x00000000004E6F7C "+"
 *   insn=0x00000000004E6F7C string=0x00000000004E6F80 "\t A"
 *   insn=0x00000000004E6F84 string=0x00000000004E6F8C ""
 *   insn=0x00000000004E6F8C string=0x00000000004E6F90 "A"
 *   insn=0x00000000004E6F94 string=0x00000000004E6F98 "1"
 *   insn=0x00000000004E6F98 string=0x00000000004E6F9C "*"
 *   insn=0x00000000004E6F9C string=0x00000000004E7044 "\t\t@"
 *   insn=0x00000000004E6FA0 string=0x00000000004E6FA4 "?"
 *   insn=0x00000000004E6FA8 string=0x00000000004E6FAC "@"
 *   insn=0x00000000004E6FA8 string=0x00000000004E6FB8 "("
 *   insn=0x00000000004E6FAC string=0x00000000004E6FB0 ""
 *   insn=0x00000000004E6FB0 string=0x00000000004E6FB4 "$"
 *   insn=0x00000000004E6FB8 string=0x00000000004E6FBC "?"
 *   insn=0x00000000004E6FBC string=0x00000000004E6FC0 "@"
 *   insn=0x00000000004E6FC0 string=0x00000000004E6FC4 ""
 *   insn=0x00000000004E6FC0 string=0x00000000004E6FE8 ""
 *   insn=0x00000000004E6FC4 string=0x00000000004E6FC8 "?"
 *   insn=0x00000000004E6FC8 string=0x00000000004E6FCC " "
 *   insn=0x00000000004E6FCC string=0x00000000004E6FF0 ""
 *   insn=0x00000000004E6FD0 string=0x00000000004E6FD4 "?"
 *   insn=0x00000000004E6FD8 string=0x00000000004E6FDC ""
 *   insn=0x00000000004E6FD8 string=0x00000000004E7014 ""
 *   insn=0x00000000004E6FDC string=0x00000000004E6FE0 ""
 *   insn=0x00000000004E6FF4 string=0x00000000004E6FF8 ""
 *   insn=0x00000000004E6FF8 string=0x00000000004E6FFC ""
 *   insn=0x00000000004E6FFC string=0x00000000004E7000 "\t@"
 *   insn=0x00000000004E7000 string=0x00000000004E7004 " "
 *   insn=0x00000000004E7004 string=0x00000000004E7008 "\n"
 *   insn=0x00000000004E7008 string=0x00000000004E700C "\tD"
 *   insn=0x00000000004E700C string=0x00000000004E7010 ""
 *   insn=0x00000000004E7014 string=0x00000000004E7018 ")"
 *   insn=0x00000000004E7018 string=0x00000000004E701C ")"
 *   insn=0x00000000004E7020 string=0x00000000004E7024 ""
 *   insn=0x00000000004E7024 string=0x00000000004E7028 "k!/"
 *   insn=0x00000000004E7028 string=0x00000000004E702C ""
 *   insn=0x00000000004E702C string=0x00000000004E7030 "\n-@9"
 *   insn=0x00000000004E7030 string=0x00000000004E7034 ""
 *   insn=0x00000000004E7034 string=0x00000000004E7038 "a"
 *   insn=0x00000000004E7038 string=0x00000000004E703C "?"
 *   insn=0x00000000004E703C string=0x00000000004E7040 "h"
 *   insn=0x00000000004E7044 string=0x00000000004E7048 "?"
 *   insn=0x00000000004E704C string=0x00000000004E7050 ""
 *   insn=0x00000000004E7050 string=0x00000000004E7054 ")@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall lua_iscfunction(__int64 a1, int a2)
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
  return *((_DWORD *)v2 + 2) == 6 && *(_BYTE *)(*v2 + 10) != 0;
}

