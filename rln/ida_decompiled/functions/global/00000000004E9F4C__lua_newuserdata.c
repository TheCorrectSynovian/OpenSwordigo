/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E9F4C
 * Mangled: _Z15lua_newuserdataP9lua_Statem
 * Demangled: lua_newuserdata(lua_State *,ulong)
 *
 * Callers: 1
 *   0x00000000001F5CA0  lua_newuserdata(lua_State *,ulong)
 *
 * Callees: 2
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004F3708  sub_4F3708
 *
 * Referenced strings: 15
 *   insn=0x00000000004E9F58 string=0x00000000004E9F5C "h"
 *   insn=0x00000000004E9F60 string=0x00000000004E9F64 "\t!G"
 *   insn=0x00000000004E9F68 string=0x00000000004E9F6C "c"
 *   insn=0x00000000004E9F6C string=0x00000000004E9F78 "h"
 *   insn=0x00000000004E9F70 string=0x00000000004E9F74 "O"
 *   insn=0x00000000004E9F78 string=0x00000000004E9F7C "i*@"
 *   insn=0x00000000004E9F84 string=0x00000000004E9F88 ""
 *   insn=0x00000000004E9F84 string=0x00000000004E9F98 "h"
 *   insn=0x00000000004E9F88 string=0x00000000004E9F8C ""
 *   insn=0x00000000004E9F8C string=0x00000000004E9F90 "a"
 *   insn=0x00000000004E9FA8 string=0x00000000004E9FAC "h\n@"
 *   insn=0x00000000004E9FB4 string=0x00000000004E9FB8 "\t\t"
 *   insn=0x00000000004E9FB8 string=0x00000000004E9FBC "h\n@"
 *   insn=0x00000000004E9FC0 string=0x00000000004E9FC4 "A"
 *   insn=0x00000000004E9FC4 string=0x00000000004E9FC8 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_newuserdata(_QWORD *a1, __int64 a2)
{
  __int64 v4; // x8
  _QWORD *v5; // x8
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 result; // x0

  if ( *(_QWORD *)(a1[4] + 120LL) >= *(_QWORD *)(a1[4] + 112LL) )
    sub_4EDCB0(a1);
  v4 = a1[5];
  if ( v4 == a1[10] )
    v5 = a1 + 15;
  else
    v5 = (_QWORD *)(**(_QWORD **)(v4 + 8) + 24LL);
  v6 = sub_4F3708(a1, a2, *v5);
  v7 = a1[2];
  *(_QWORD *)v7 = v6;
  *(_DWORD *)(v7 + 8) = 7;
  result = v6 + 40;
  a1[2] += 16LL;
  return result;
}

