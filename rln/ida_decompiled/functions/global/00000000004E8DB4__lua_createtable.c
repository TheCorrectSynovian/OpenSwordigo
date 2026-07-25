/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E8DB4
 * Mangled: _Z15lua_createtableP9lua_Stateii
 * Demangled: lua_createtable(lua_State *,int,int)
 *
 * Callers: 1
 *   0x0000000000203A00  lua_createtable(lua_State *,int,int)
 *
 * Callees: 2
 *   0x00000000004EDCB0  sub_4EDCB0
 *   0x00000000004F3DB4  sub_4F3DB4
 *
 * Referenced strings: 7
 *   insn=0x00000000004E8DC4 string=0x00000000004E8DC8 "h"
 *   insn=0x00000000004E8DD0 string=0x00000000004E8DD4 "\t!G"
 *   insn=0x00000000004E8DD8 string=0x00000000004E8DDC "c"
 *   insn=0x00000000004E8DDC string=0x00000000004E8DE8 "v\n@"
 *   insn=0x00000000004E8E04 string=0x00000000004E8E08 "h\n@"
 *   insn=0x00000000004E8E08 string=0x00000000004E8E0C "A"
 *   insn=0x00000000004E8E0C string=0x00000000004E8E10 "h\n"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_createtable(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // x22
  __int64 result; // x0

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 32) + 120LL) >= *(_QWORD *)(*(_QWORD *)(a1 + 32) + 112LL) )
    sub_4EDCB0(a1);
  v6 = *(_QWORD *)(a1 + 16);
  result = sub_4F3DB4(a1, a2, a3);
  *(_QWORD *)v6 = result;
  *(_DWORD *)(v6 + 8) = 5;
  *(_QWORD *)(a1 + 16) += 16LL;
  return result;
}

