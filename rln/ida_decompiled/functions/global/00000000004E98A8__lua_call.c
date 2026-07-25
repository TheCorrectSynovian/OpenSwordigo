/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E98A8
 * Mangled: _Z8lua_callP9lua_Stateii
 * Demangled: lua_call(lua_State *,int,int)
 *
 * Callers: 1
 *   0x0000000000202E50  lua_call(lua_State *,int,int)
 *
 * Callees: 1
 *   0x00000000004EC63C  sub_4EC63C
 *
 * Referenced strings: 9
 *   insn=0x00000000004E98B4 string=0x00000000004E98B8 "h\n@"
 *   insn=0x00000000004E98B8 string=0x00000000004E98BC ")"
 *   insn=0x00000000004E98C4 string=0x00000000004E98C8 "]"
 *   insn=0x00000000004E98D0 string=0x00000000004E98D4 "h"
 *   insn=0x00000000004E98D4 string=0x00000000004E98D8 "i\n@"
 *   insn=0x00000000004E98D8 string=0x00000000004E98DC "\n\t@"
 *   insn=0x00000000004E98DC string=0x00000000004E98E0 "?"
 *   insn=0x00000000004E98E0 string=0x00000000004E98E4 "C"
 *   insn=0x00000000004E98E4 string=0x00000000004E98E8 "\t\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_call(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // x0
  __int64 v6; // x8
  unsigned __int64 v7; // x9

  result = sub_4EC63C();
  if ( a3 == -1 )
  {
    v6 = *(_QWORD *)(a1 + 40);
    v7 = *(_QWORD *)(a1 + 16);
    if ( v7 >= *(_QWORD *)(v6 + 16) )
      *(_QWORD *)(v6 + 16) = v7;
  }
  return result;
}

