/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004E855C
 * Mangled: _Z14lua_pushnumberP9lua_Stated
 * Demangled: lua_pushnumber(lua_State *,double)
 *
 * Callers: 1
 *   0x00000000001FFCB0  lua_pushnumber(lua_State *,double)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004E8564 string=0x00000000004E8568 "\t\t"
 *   insn=0x00000000004E8568 string=0x00000000004E856C "@"
 *   insn=0x00000000004E856C string=0x00000000004E8570 "A"
 *   insn=0x00000000004E8570 string=0x00000000004E8574 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall lua_pushnumber(__int64 result, double a2)
{
  __int64 v2; // x8

  v2 = *(_QWORD *)(result + 16);
  *(double *)v2 = a2;
  *(_DWORD *)(v2 + 8) = 3;
  *(_QWORD *)(result + 16) += 16LL;
  return result;
}

