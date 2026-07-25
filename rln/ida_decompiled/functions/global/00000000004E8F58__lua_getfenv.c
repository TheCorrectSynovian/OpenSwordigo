/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E8F58
 * Mangled: _Z11lua_getfenvP9lua_Statei
 * Demangled: lua_getfenv(lua_State *,int)
 *
 * Callers: 1
 *   0x0000000000200A30  lua_getfenv(lua_State *,int)
 *
 * Callees: 0
 *
 * Referenced strings: 60
 *   insn=0x00000000004E8F58 string=0x00000000004E8F5C "+"
 *   insn=0x00000000004E8F5C string=0x00000000004E8F60 "\t A"
 *   insn=0x00000000004E8F64 string=0x00000000004E8F6C ""
 *   insn=0x00000000004E8F6C string=0x00000000004E8F70 "A"
 *   insn=0x00000000004E8F74 string=0x00000000004E8F78 "1"
 *   insn=0x00000000004E8F78 string=0x00000000004E8F7C "*"
 *   insn=0x00000000004E8F7C string=0x00000000004E9024 "\t\t@"
 *   insn=0x00000000004E8F80 string=0x00000000004E8F84 "?"
 *   insn=0x00000000004E8F88 string=0x00000000004E8F8C "@"
 *   insn=0x00000000004E8F88 string=0x00000000004E8F98 "("
 *   insn=0x00000000004E8F8C string=0x00000000004E8F90 ""
 *   insn=0x00000000004E8F90 string=0x00000000004E8F94 "$"
 *   insn=0x00000000004E8F98 string=0x00000000004E8F9C "?"
 *   insn=0x00000000004E8F9C string=0x00000000004E8FA0 "@"
 *   insn=0x00000000004E8FA0 string=0x00000000004E8FA4 ""
 *   insn=0x00000000004E8FA0 string=0x00000000004E8FC8 ""
 *   insn=0x00000000004E8FA4 string=0x00000000004E8FA8 "?"
 *   insn=0x00000000004E8FA8 string=0x00000000004E8FAC " "
 *   insn=0x00000000004E8FAC string=0x00000000004E8FD0 ""
 *   insn=0x00000000004E8FB0 string=0x00000000004E8FB4 "?"
 *   insn=0x00000000004E8FB8 string=0x00000000004E8FBC ""
 *   insn=0x00000000004E8FB8 string=0x00000000004E8FF4 ""
 *   insn=0x00000000004E8FBC string=0x00000000004E8FC0 ""
 *   insn=0x00000000004E8FD4 string=0x00000000004E8FD8 ""
 *   insn=0x00000000004E8FD8 string=0x00000000004E8FDC ""
 *   insn=0x00000000004E8FDC string=0x00000000004E8FE0 "\t@"
 *   insn=0x00000000004E8FE0 string=0x00000000004E8FE4 " "
 *   insn=0x00000000004E8FE4 string=0x00000000004E8FE8 "\n"
 *   insn=0x00000000004E8FE8 string=0x00000000004E8FEC "\tD"
 *   insn=0x00000000004E8FEC string=0x00000000004E8FF0 ""
 *   insn=0x00000000004E8FF4 string=0x00000000004E8FF8 ")"
 *   insn=0x00000000004E8FF8 string=0x00000000004E8FFC ")"
 *   insn=0x00000000004E9000 string=0x00000000004E9004 ""
 *   insn=0x00000000004E9004 string=0x00000000004E9008 "k!/"
 *   insn=0x00000000004E9008 string=0x00000000004E900C ""
 *   insn=0x00000000004E900C string=0x00000000004E9010 "\n-@9"
 *   insn=0x00000000004E9010 string=0x00000000004E9014 ""
 *   insn=0x00000000004E9014 string=0x00000000004E9018 "a"
 *   insn=0x00000000004E9018 string=0x00000000004E901C "?"
 *   insn=0x00000000004E901C string=0x00000000004E9020 "h"
 *   insn=0x00000000004E9024 string=0x00000000004E9028 "?!"
 *   insn=0x00000000004E9028 string=0x00000000004E902C "`"
 *   insn=0x00000000004E902C string=0x00000000004E9030 "?"
 *   insn=0x00000000004E902C string=0x00000000004E9058 ""
 *   insn=0x00000000004E9030 string=0x00000000004E9034 "`"
 *   insn=0x00000000004E9034 string=0x00000000004E9038 "?"
 *   insn=0x00000000004E9034 string=0x00000000004E9040 "\t"
 *   insn=0x00000000004E903C string=0x00000000004E9070 "\t"
 *   insn=0x00000000004E9040 string=0x00000000004E9044 ""
 *   insn=0x00000000004E9044 string=0x00000000004E9048 "@"
 *   insn=0x00000000004E9048 string=0x00000000004E904C "("
 *   insn=0x00000000004E9050 string=0x00000000004E9054 "\t"
 *   insn=0x00000000004E9054 string=0x00000000004E9078 "(\t"
 *   insn=0x00000000004E9058 string=0x00000000004E905C "\t"
 *   insn=0x00000000004E905C string=0x00000000004E9060 "\n=@"
 *   insn=0x00000000004E9060 string=0x00000000004E9064 "*"
 *   insn=0x00000000004E9064 string=0x00000000004E9068 ""
 *   insn=0x00000000004E9078 string=0x00000000004E907C ""
 *   insn=0x00000000004E907C string=0x00000000004E9080 "A"
 *   insn=0x00000000004E9080 string=0x00000000004E9084 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall lua_getfenv(__int64 a1, int a2)
{
  __int64 *v2; // x8
  __int64 v3; // x9
  __int64 v4; // x9
  __int64 v5; // x8
  int v6; // w10
  int v7; // w9
  _QWORD *result; // x0
  _QWORD *v9; // x9
  _QWORD *v10; // t1
  int v11; // w8
  __int64 v12; // x8
  _QWORD *v13; // t1
  _QWORD *v14; // t1

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
  v7 = *((_DWORD *)v2 + 2);
  if ( v7 == 8 )
  {
    v12 = *v2;
    v13 = *(_QWORD **)(a1 + 16);
    result = (_QWORD *)(a1 + 16);
    v9 = v13;
    *v13 = *(_QWORD *)(v12 + 120);
    v11 = *(_DWORD *)(v12 + 128);
  }
  else if ( v7 == 7 || v7 == 6 )
  {
    v10 = *(_QWORD **)(a1 + 16);
    result = (_QWORD *)(a1 + 16);
    v9 = v10;
    *v10 = *(_QWORD *)(*v2 + 24);
    v11 = 5;
  }
  else
  {
    v14 = *(_QWORD **)(a1 + 16);
    result = (_QWORD *)(a1 + 16);
    v9 = v14;
    v11 = 0;
  }
  *((_DWORD *)v9 + 2) = v11;
  *result += 16LL;
  return result;
}

