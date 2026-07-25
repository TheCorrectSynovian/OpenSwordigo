/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E7F18
 * Mangled: _Z10lua_objlenP9lua_Statei
 * Demangled: lua_objlen(lua_State *,int)
 *
 * Callers: 1
 *   0x00000000001F5A00  lua_objlen(lua_State *,int)
 *
 * Callees: 2
 *   0x00000000004F4B90  sub_4F4B90
 *   0x00000000004F5F80  sub_4F5F80
 *
 * Referenced strings: 50
 *   insn=0x00000000004E7F20 string=0x00000000004E7F24 "?"
 *   insn=0x00000000004E7F24 string=0x00000000004E7F28 "+"
 *   insn=0x00000000004E7F28 string=0x00000000004E7F2C "\t A"
 *   insn=0x00000000004E7F30 string=0x00000000004E7F38 ""
 *   insn=0x00000000004E7F38 string=0x00000000004E7F3C "A"
 *   insn=0x00000000004E7F44 string=0x00000000004E7F48 "*"
 *   insn=0x00000000004E7F48 string=0x00000000004E7FF0 "h\n@"
 *   insn=0x00000000004E7F4C string=0x00000000004E7F50 "?"
 *   insn=0x00000000004E7F54 string=0x00000000004E7F58 "@"
 *   insn=0x00000000004E7F54 string=0x00000000004E7F64 "("
 *   insn=0x00000000004E7F5C string=0x00000000004E7F60 "$"
 *   insn=0x00000000004E7F64 string=0x00000000004E7F68 "?"
 *   insn=0x00000000004E7F68 string=0x00000000004E7F6C "@"
 *   insn=0x00000000004E7F6C string=0x00000000004E7F70 ""
 *   insn=0x00000000004E7F70 string=0x00000000004E7F74 "?"
 *   insn=0x00000000004E7F74 string=0x00000000004E7F78 " "
 *   insn=0x00000000004E7F78 string=0x00000000004E7F9C ""
 *   insn=0x00000000004E7F7C string=0x00000000004E7F80 "?"
 *   insn=0x00000000004E7F84 string=0x00000000004E7F88 ""
 *   insn=0x00000000004E7F84 string=0x00000000004E7FC0 ""
 *   insn=0x00000000004E7FA4 string=0x00000000004E7FA8 ""
 *   insn=0x00000000004E7FA8 string=0x00000000004E7FAC ""
 *   insn=0x00000000004E7FAC string=0x00000000004E7FB0 "@"
 *   insn=0x00000000004E7FB0 string=0x00000000004E7FB4 "\t"
 *   insn=0x00000000004E7FB4 string=0x00000000004E7FB8 "D"
 *   insn=0x00000000004E7FB8 string=0x00000000004E7FBC ""
 *   insn=0x00000000004E7FC0 string=0x00000000004E7FC4 ")"
 *   insn=0x00000000004E7FC4 string=0x00000000004E7FC8 ")"
 *   insn=0x00000000004E7FCC string=0x00000000004E7FD0 ""
 *   insn=0x00000000004E7FD0 string=0x00000000004E7FD4 "k!/"
 *   insn=0x00000000004E7FD4 string=0x00000000004E7FD8 ""
 *   insn=0x00000000004E7FD8 string=0x00000000004E7FDC "\n-@9"
 *   insn=0x00000000004E7FDC string=0x00000000004E7FE0 ""
 *   insn=0x00000000004E7FE0 string=0x00000000004E7FE4 "a"
 *   insn=0x00000000004E7FE4 string=0x00000000004E7FE8 "?"
 *   insn=0x00000000004E7FE8 string=0x00000000004E7FEC "s"
 *   insn=0x00000000004E7FF0 string=0x00000000004E7FF4 "\t"
 *   insn=0x00000000004E7FF4 string=0x00000000004E7FF8 "?"
 *   insn=0x00000000004E8004 string=0x00000000004E800C "Iy"
 *   insn=0x00000000004E800C string=0x00000000004E8010 ")"
 *   insn=0x00000000004E8010 string=0x00000000004E8014 " "
 *   insn=0x00000000004E8014 string=0x00000000004E8024 "h"
 *   insn=0x00000000004E8014 string=0x00000000004E8030 "`"
 *   insn=0x00000000004E8014 string=0x00000000004E8040 "h"
 *   insn=0x00000000004E801C string=0x00000000004E8020 "`"
 *   insn=0x00000000004E8024 string=0x00000000004E8028 "\t@"
 *   insn=0x00000000004E8028 string=0x00000000004E802C "\t"
 *   insn=0x00000000004E8034 string=0x00000000004E8038 "|@"
 *   insn=0x00000000004E8034 string=0x00000000004F4B90 "\t8@"
 *   insn=0x00000000004E8040 string=0x00000000004E8044 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_objlen(__int64 a1, int a2)
{
  __int64 *v2; // x19
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x8
  int v6; // w10
  __int64 v7; // x8
  __int64 v8; // x8

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
          v2 = (__int64 *)(a1 + 136);
          v3 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL);
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
          v7 = v5 + 16 * v4 + 24;
          if ( (int)v4 <= v6 )
            v2 = (__int64 *)v7;
          else
            v2 = &qword_599BC8;
          break;
      }
    }
    else
    {
      v2 = (__int64 *)(*(_QWORD *)(a1 + 16) + 16LL * a2);
    }
  }
  else if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16) >= *(_QWORD *)(a1 + 16) )
  {
    v2 = &qword_599BC8;
  }
  else
  {
    v2 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * a2 - 16);
  }
  v8 = 0;
  switch ( *((_DWORD *)v2 + 2) )
  {
    case 3:
      if ( (unsigned int)sub_4F5F80(a1) )
        goto LABEL_18;
      v8 = 0;
      break;
    case 4:
LABEL_18:
      v8 = *(_QWORD *)(*v2 + 16);
      break;
    case 5:
      v8 = (int)sub_4F4B90(*v2);
      break;
    case 7:
      v8 = *(_QWORD *)(*v2 + 32);
      break;
    default:
      return v8;
  }
  return v8;
}

